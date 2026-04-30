#!/usr/bin/env python3
"""
Active CroSPI-side UDP receiver and ROS2 bridge.

It consumes UDP packets from lerobot_trossen/important_code/inference/
rviz_publisher.py and republishes the active runtime interfaces:
  - /joint_states_VLA for eTaSL VLA target tracking
  - /actual/joint_states_rviz and /predicted_ee_marker for RViz
  - /shared_control/alpha as CrospiInput(names=["alpha_input"], data=[alpha])
  - /shared_control/alpha_monitor as Float64 for quick debugging

Important: /shared_control/alpha is final alpha only; it is not C_VLA.

VLA–CroSPI Bridge Node（系统 Python 3.10 运行）

职责：
  1. UDP 接收 VLA 动作 → 发布 /joint_states_VLA（6-DOF，供 eTaSL 跟踪）
  2. 订阅 /joint_states（真实反馈）→ 发布 /actual/joint_states_rviz（RViz 蓝色机器人）
  3. UDP 接收预测块 → FK → 发布 /predicted_ee_marker（橙色轨迹）
  4. 管理 alpha → 发布 /shared_control/alpha（CrospiInput 格式，供 TopicInputHandler）
  5. SpaceMouse 按钮检测 → 夹爪 STUB

完整启动顺序（本节点由步骤3启动，步骤1-2需先完成）：
  步骤 1: ros2 run crospi_core crospi_node --ros-args \
              -p config_file:="$[crospi_application_template]/.../trossen_vla_shared_control.setup.json"
  步骤 2: python3 .../trossen_vla_shared_control_runner.py
  步骤 3: ros2 launch crospi_application_template trossen_follower_visualization.launch.py  ← 本节点
  步骤 4: ros2 launch spacenav classic-launch.py
  步骤 5: python lerobot_trossen/important_code/inference/run_inference_rtc.py --rviz --alpha-mode constant --alpha-const 0.5
"""

import pickle
import socket
import sys
import time
from typing import Optional

sys.path.insert(0, "/opt/ros/humble/local/lib/python3.10/dist-packages")
sys.path.insert(0, "/opt/ros/humble/lib/python3.10/site-packages")

import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import JointState, Joy
from std_msgs.msg import Float64
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point
from builtin_interfaces.msg import Duration
from crospi_interfaces.msg import Input as CrospiInput
# from trossen_widowx_interfaces.srv import ControlGripper

# ---------------------------------------------------------------------------
# SpaceMouse button detector
# ---------------------------------------------------------------------------

_LONG_PRESS_S = 0.6


class _ArbiterResult:
    __slots__ = ('gripper_close', 'gripper_open', 'override_long', 'resume_long')

    def __init__(self, gripper_close, gripper_open, override_long, resume_long):
        self.gripper_close = gripper_close
        self.gripper_open  = gripper_open
        self.override_long = override_long
        self.resume_long   = resume_long


class _SpaceMouseArbiter:
    """Detects short-press (gripper) and long-press (mode) events from SpaceMouse buttons."""

    def __init__(self):
        self._btn_l_t: Optional[float] = None
        self._btn_r_t: Optional[float] = None
        self._btn_l_was = False
        self._btn_r_was = False

    def update(self, btn_l: bool, btn_r: bool, now: Optional[float] = None) -> _ArbiterResult:
        if now is None:
            now = time.monotonic()

        gc = go = ol = rl = False

        if btn_l and not self._btn_l_was:
            self._btn_l_t = now
        if not btn_l and self._btn_l_was:
            if (now - (self._btn_l_t or now)) >= _LONG_PRESS_S:
                ol = True
            else:
                gc = True
            self._btn_l_t = None
        self._btn_l_was = btn_l

        if btn_r and not self._btn_r_was:
            self._btn_r_t = now
        if not btn_r and self._btn_r_was:
            if (now - (self._btn_r_t or now)) >= _LONG_PRESS_S:
                rl = True
            else:
                go = True
            self._btn_r_t = None
        self._btn_r_was = btn_r

        return _ArbiterResult(gc, go, ol, rl)


# ---------------------------------------------------------------------------
# UDP protocol
# ---------------------------------------------------------------------------
_UDP_HOST      = "127.0.0.1"
_UDP_PORT      = 9788
_UDP_PORT_JS   = 9789  # 反向：bridge → lerobot 关节状态
_MSG_ACTUAL    = 0   # shape [7,]  — VLA current action
_MSG_PREDICTED = 1   # shape [N,7] — VLA predicted chunk
_MSG_ALPHA     = 2   # shape [1,]  — final shared-control alpha

# ---------------------------------------------------------------------------
# Joint names
# ---------------------------------------------------------------------------
_JOINT_NAMES_7 = [
    "joint_0", "joint_1", "joint_2", "joint_3",
    "joint_4", "joint_5", "left_carriage_joint",
]
_JOINT_NAMES_6 = _JOINT_NAMES_7[:6]

# ---------------------------------------------------------------------------
# Forward kinematics (extracted from wxai_follower.urdf)
# ---------------------------------------------------------------------------
_FK_JOINTS = [
    {"xyz": [0.0,      0.0,     0.05725], "axis": [ 0,  0,  1]},  # joint_0
    {"xyz": [0.02,     0.0,     0.04625], "axis": [ 0,  1,  0]},  # joint_1
    {"xyz": [-0.264,   0.0,     0.0    ], "axis": [ 0, -1,  0]},  # joint_2
    {"xyz": [0.245,    0.0,     0.06   ], "axis": [ 0, -1,  0]},  # joint_3
    {"xyz": [0.06775,  0.0,     0.0455 ], "axis": [ 0,  0, -1]},  # joint_4
    {"xyz": [0.02895,  0.0,    -0.0455 ], "axis": [ 1,  0,  0]},  # joint_5
]
_EE_OFFSET = np.array([0.156062, 0.0, 0.0])


def _rot3(axis, angle: float) -> np.ndarray:
    axis = np.asarray(axis, dtype=float) / np.linalg.norm(axis)
    c, s, t = np.cos(angle), np.sin(angle), 1.0 - np.cos(angle)
    x, y, z = axis
    return np.array([
        [t*x*x + c,    t*x*y - z*s,  t*x*z + y*s],
        [t*x*y + z*s,  t*y*y + c,    t*y*z - x*s],
        [t*x*z - y*s,  t*y*z + x*s,  t*z*z + c  ],
    ])


def _fk_ee(q7: np.ndarray) -> np.ndarray:
    T = np.eye(4)
    for j, qi in zip(_FK_JOINTS, q7[:6]):
        Tji = np.eye(4)
        Tji[:3, :3] = _rot3(j["axis"], float(qi))
        Tji[:3, 3]  = j["xyz"]
        T = T @ Tji
    return T[:3, :3] @ _EE_OFFSET + T[:3, 3]


# ---------------------------------------------------------------------------
# Bridge node
# ---------------------------------------------------------------------------

class VLABridgeNode(Node):

    def __init__(self):
        super().__init__("vla_ros_bridge")

        self.declare_parameter("alpha", 0.5)
        self.declare_parameter("enable_gripper", False)
        self._alpha: float = float(
            self.get_parameter("alpha").get_parameter_value().double_value
        )
        self._enable_gripper: bool = bool(
            self.get_parameter("enable_gripper").get_parameter_value().bool_value
        )

        # Publishers
        self._vla_cmd_pub    = self.create_publisher(JointState,   "/joint_states_VLA",        10)
        self._actual_pub     = self.create_publisher(JointState,   "/actual/joint_states_rviz", 10)
        self._marker_pub     = self.create_publisher(Marker,       "/predicted_ee_marker",     10)
        self._alpha_etasl_pub  = self.create_publisher(CrospiInput, "/shared_control/alpha",   10)
        self._alpha_monitor_pub = self.create_publisher(Float64,   "/shared_control/alpha_monitor", 10)

        # Subscribers
        self.create_subscription(Float64,    "/override/alpha", self._override_alpha_cb, 10)
        self.create_subscription(JointState, "/joint_states",   self._joint_states_cb,   qos_profile_sensor_data)
        self.create_subscription(Joy,        "/spacenav/joy",   self._joy_cb,            10)

        # self._gripper_client = (
        #     self.create_client(ControlGripper, "widowX/control_gripper")
        #     if self._enable_gripper
        #     else None
        # )

        self._arbiter = _SpaceMouseArbiter()
        self._latest_joy_buttons = (False, False)

        self._sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self._sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self._sock.bind((_UDP_HOST, _UDP_PORT))
        self._sock.setblocking(False)

        # 反向通道：将 /joint_states 转发给 lerobot_trossen（供 VLA 观测使用）
        self._js_sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

        self._latest_actual_joints: JointState | None = None
        self._latest_chunk: np.ndarray | None = None
        self._marker_lifetime = Duration(sec=0, nanosec=200_000_000)

        self.create_timer(1.0 / 30.0, self._timer_cb)
        self.get_logger().info(
            f"[vla_bridge] UDP {_UDP_HOST}:{_UDP_PORT}  alpha={self._alpha:.2f}"
        )

    # Callbacks

    def _override_alpha_cb(self, msg: Float64):
        self._alpha = float(np.clip(msg.data, 0.0, 1.0))
        self.get_logger().info(f"[vla_bridge] alpha → {self._alpha:.3f}")

    def _joint_states_cb(self, msg: JointState):
        self._latest_actual_joints = msg
        # 转发给 lerobot_trossen：按 _JOINT_NAMES_7 顺序提取 7 个关节位置
        name_to_pos = dict(zip(msg.name, msg.position))
        joint_array = np.array(
            [name_to_pos.get(n, 0.0) for n in _JOINT_NAMES_7], dtype=np.float64
        )
        # print(joint_array)
        try:
            self._js_sock.sendto(
                pickle.dumps(joint_array, protocol=4), (_UDP_HOST, _UDP_PORT_JS)
            )
        except OSError:
            print("Error sending UDP")
            pass

    def _joy_cb(self, msg: Joy):
        self._latest_joy_buttons = (
            bool(msg.buttons[0]) if len(msg.buttons) > 0 else False,
            bool(msg.buttons[1]) if len(msg.buttons) > 1 else False,
        )

    # Main 30 Hz loop

    def _timer_cb(self):
        now = self.get_clock().now().to_msg()

        # Drain UDP
        while True:
            try:
                data, _ = self._sock.recvfrom(65535)
            except BlockingIOError:
                break
            if len(data) < 2:
                continue
            try:
                array = pickle.loads(data[1:])
            except Exception:
                continue
            if data[0] == _MSG_ACTUAL:
                self._publish_vla_cmd(array, now)
            elif data[0] == _MSG_PREDICTED:
                self._latest_chunk = array
            elif data[0] == _MSG_ALPHA:
                self._update_alpha_from_udp(array)

        if self._latest_actual_joints is not None:
            self._publish_actual_viz(now)

        if self._latest_chunk is not None:
            self._publish_predicted_markers(now)

        # Buttons → gripper
        arb = self._arbiter.update(*self._latest_joy_buttons)
        if arb.gripper_close:
            self._trigger_gripper(True)
        if arb.gripper_open:
            self._trigger_gripper(False)

        # Alpha → eTaSL
        etasl_msg = CrospiInput()
        etasl_msg.names = ["alpha_input"]
        etasl_msg.data  = [self._alpha]
        self._alpha_etasl_pub.publish(etasl_msg)

        monitor = Float64()
        monitor.data = self._alpha
        self._alpha_monitor_pub.publish(monitor)

    # Publishers

    def _update_alpha_from_udp(self, array: np.ndarray):
        alpha_array = np.asarray(array, dtype=np.float64).reshape(-1)
        if alpha_array.size < 1:
            return
        self._alpha = float(np.clip(alpha_array[0], 0.0, 1.0))
        self.get_logger().info(f"[vla_bridge] alpha udp {self._alpha:.3f}")

    def _publish_vla_cmd(self, q7: np.ndarray, now):
        msg = JointState()
        msg.header.stamp = now
        msg.name     = _JOINT_NAMES_6
        msg.position = q7[:6].tolist()
        self._vla_cmd_pub.publish(msg)

    def _publish_actual_viz(self, now):
        src = self._latest_actual_joints
        name_to_pos = dict(zip(src.name, src.position))
        msg = JointState()
        msg.header.stamp = now
        msg.name     = _JOINT_NAMES_7
        msg.position = [name_to_pos.get(n, 0.0) for n in _JOINT_NAMES_7]
        self._actual_pub.publish(msg)

        ee = _fk_ee(np.array(msg.position))
        sphere = Marker()
        sphere.header.frame_id = "actual/base_link"
        sphere.header.stamp    = now
        sphere.ns = "ee_actual"; sphere.id = 0
        sphere.type   = Marker.SPHERE
        sphere.action = Marker.ADD
        sphere.pose.position = Point(x=float(ee[0]), y=float(ee[1]), z=float(ee[2]))
        sphere.pose.orientation.w = 1.0
        sphere.scale.x = sphere.scale.y = sphere.scale.z = 0.02
        sphere.color.r = 0.0; sphere.color.g = 1.0; sphere.color.b = 0.2; sphere.color.a = 1.0
        sphere.lifetime = self._marker_lifetime
        self._marker_pub.publish(sphere)

    def _publish_predicted_markers(self, now):
        chunk = self._latest_chunk
        if chunk is None:
            return
        ee_pts = [_fk_ee(q) for q in chunk]
        pts = [Point(x=float(p[0]), y=float(p[1]), z=float(p[2])) for p in ee_pts]

        line = Marker()
        line.header.frame_id = "actual/base_link"
        line.header.stamp = now
        line.ns = "ee_predicted"; line.id = 1
        line.type = Marker.LINE_STRIP; line.action = Marker.ADD
        line.scale.x = 0.004
        line.color.r = 1.0; line.color.g = 0.35; line.color.b = 0.0; line.color.a = 1.0
        line.lifetime = self._marker_lifetime
        line.points = pts
        self._marker_pub.publish(line)

        dots = Marker()
        dots.header = line.header
        dots.ns = "ee_predicted_dots"; dots.id = 2
        dots.type = Marker.SPHERE_LIST; dots.action = Marker.ADD
        dots.scale.x = dots.scale.y = dots.scale.z = 0.006
        dots.color = line.color; dots.lifetime = self._marker_lifetime
        dots.points = pts
        self._marker_pub.publish(dots)

    def _trigger_gripper(self, close: bool):
        # STUB: TODO: self._gripper_client.call_async(ControlGripperRequest(close=close))
        self.get_logger().info(f"[GRIPPER STUB] {'close' if close else 'open'}")

    def destroy_node(self):
        self._sock.close()
        self._js_sock.close()
        super().destroy_node()


def main():
    rclpy.init()
    node = VLABridgeNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
