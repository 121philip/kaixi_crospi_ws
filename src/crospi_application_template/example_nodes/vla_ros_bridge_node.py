#!/usr/bin/env python3
"""
Active CroSPI-side UDP receiver and ROS2 bridge.

It consumes UDP packets from lerobot_trossen/important_code/inference/
rviz_publisher.py and republishes the active runtime interfaces:
  - /joint_states_VLA for eTaSL VLA target tracking
  - /actual/joint_states_rviz and /predicted_ee_marker for RViz
  - /shared_control/weights as CrospiInput(names=["w_vla", "w_human", "w_gripper"], data=[...])
  - /shared_control/mode as String for quick button-mode debugging

VLA–CroSPI Bridge Node（系统 Python 3.10 运行）

职责：
  1. UDP 接收 VLA 动作 → 发布 /joint_states_VLA（7-DOF，含夹爪，供 eTaSL 跟踪）
  2. 订阅 /joint_states（真实反馈）→ 发布 /actual/joint_states_rviz（RViz 蓝色机器人）
  3. UDP 接收预测块 → FK → 发布 /predicted_ee_marker（橙色轨迹）
  4. Manage direct weights -> publish /shared_control/weights (CrospiInput)
  5. SpaceMouse buttons -> mode toggle and gripper override

完整启动顺序（本节点由步骤3启动，步骤1-2需先完成）：
  步骤 1: ros2 run crospi_core crospi_node --ros-args \
              -p config_file:="$[crospi_application_template]/.../trossen_vla_shared_control.setup.json"
  步骤 2: python3 .../trossen_vla_shared_control_runner.py
  步骤 3: ros2 launch crospi_application_template trossen_follower_visualization.launch.py  ← 本节点
  步骤 4: ros2 launch spacenav classic-launch.py
  步骤 5: python lerobot_trossen/important_code/inference/run_inference.py --crospi
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
from std_msgs.msg import String
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point
# from geometry_msgs.msg import Pose
from builtin_interfaces.msg import Duration
from crospi_interfaces.msg import Input as CrospiInput
# from trossen_widowx_interfaces.srv import ControlGripper

# ---------------------------------------------------------------------------
# SpaceMouse button and operator authority state
# ---------------------------------------------------------------------------

_MODE_SHARED = "SHARED"
_MODE_HUMAN_ONLY = "HUMAN_ONLY"
_BUTTON_DEBOUNCE_S = 0.15
_RESUME_RAMP_S = 1.5       # seconds to ramp w_vla back up after HUMAN_ONLY
_GRIPPER_RAMP_S = 0.6      # seconds to ramp gripper joint to new open/close target
_ALIGN_DURATION_S = 1.5    # seconds to hold actual joints as VLA target after HUMAN_ONLY
_GRIPPER_CLOSED_POS = 0.001
_GRIPPER_OPEN_POS = 0.035
_OPERATOR_HUMAN_WEIGHT = 1.0
_OPERATOR_GRIPPER_WEIGHT = 1.0


class _ButtonEvents:
    __slots__ = ("left_press", "right_press")

    def __init__(self, left_press: bool, right_press: bool):
        self.left_press = left_press
        self.right_press = right_press


class _SpaceMouseButtonDetector:
    """Detect rising-edge button presses from SpaceMouse buttons."""

    def __init__(self, debounce_s: float = _BUTTON_DEBOUNCE_S):
        self._debounce_s = float(debounce_s)
        self._left_was = False
        self._right_was = False
        self._last_left_press = -float("inf")
        self._last_right_press = -float("inf")

    def update(self, btn_l: bool, btn_r: bool, now: Optional[float] = None) -> _ButtonEvents:
        if now is None:
            now = time.monotonic()

        left_press = btn_l and not self._left_was and (now - self._last_left_press) >= self._debounce_s
        right_press = btn_r and not self._right_was and (now - self._last_right_press) >= self._debounce_s

        if left_press:
            self._last_left_press = now
        if right_press:
            self._last_right_press = now

        self._left_was = btn_l
        self._right_was = btn_r
        return _ButtonEvents(left_press, right_press)


class _OperatorAuthority:
    """Owns SpaceMouse button authority over VLA arm and gripper commands."""

    def __init__(
        self,
        *,
        gripper_closed_pos: float = _GRIPPER_CLOSED_POS,
        gripper_open_pos: float = _GRIPPER_OPEN_POS,
        operator_human_weight: float = _OPERATOR_HUMAN_WEIGHT,
        operator_gripper_weight: float = _OPERATOR_GRIPPER_WEIGHT,
        resume_ramp_s: float = _RESUME_RAMP_S,
        gripper_ramp_s: float = _GRIPPER_RAMP_S,
        align_duration_s: float = _ALIGN_DURATION_S,
    ):
        self.mode = _MODE_SHARED
        self.gripper_override_active = False
        self.gripper_closed = False
        self.gripper_target: Optional[float] = None
        self._gripper_closed_pos = float(gripper_closed_pos)
        self._gripper_open_pos = float(gripper_open_pos)
        self._operator_human_weight = float(operator_human_weight)
        self._operator_gripper_weight = float(operator_gripper_weight)
        self._resume_ramp_s = max(0.0, float(resume_ramp_s))
        self._awaiting_fresh_vla = False
        self._resume_started_at: Optional[float] = None
        # Gripper ramp: smooth transition from current position to new open/close target
        self._gripper_ramp_s = max(0.0, float(gripper_ramp_s))
        self._gripper_ramp_start: Optional[float] = None
        self._gripper_ramp_started_at: Optional[float] = None
        # Alignment window: hold actual joints as VLA target after returning from HUMAN_ONLY
        self._align_duration_s = max(0.0, float(align_duration_s))
        self._align_until: Optional[float] = None

    def toggle_gripper(self, current_pos: float, now: float) -> float:
        self.gripper_override_active = True
        self.gripper_closed = not self.gripper_closed
        self.gripper_target = (
            self._gripper_closed_pos if self.gripper_closed else self._gripper_open_pos
        )
        self._gripper_ramp_start = float(current_pos)
        self._gripper_ramp_started_at = now
        return self.gripper_target

    def toggle_human_only(self, now: Optional[float] = None) -> str:
        if now is None:
            now = time.monotonic()
        if self.mode == _MODE_HUMAN_ONLY:
            self.mode = _MODE_SHARED
            self._awaiting_fresh_vla = True
            self._resume_started_at = None
            self._align_until = None  # set by note_vla_command when first VLA arrives
            self.gripper_override_active = False  # VLA resumes gripper control
        else:
            self.mode = _MODE_HUMAN_ONLY
            self._awaiting_fresh_vla = False
            self._resume_started_at = None
            self._align_until = None
        return self.mode

    def note_vla_command(self, now: Optional[float] = None) -> None:
        if now is None:
            now = time.monotonic()
        if self._awaiting_fresh_vla:
            self._awaiting_fresh_vla = False
            self._resume_started_at = now
            self._align_until = now + self._align_duration_s

    def apply_gripper_override(self, joints: np.ndarray, now: Optional[float] = None) -> np.ndarray:
        out = np.asarray(joints, dtype=np.float64).copy()
        if not self.gripper_override_active or self.gripper_target is None:
            return out
        if now is None:
            now = time.monotonic()
        if (self._gripper_ramp_started_at is not None
                and self._gripper_ramp_start is not None
                and self._gripper_ramp_s > 0.0):
            t = float(np.clip((now - self._gripper_ramp_started_at) / self._gripper_ramp_s, 0.0, 1.0))
            out[-1] = self._gripper_ramp_start + t * (self.gripper_target - self._gripper_ramp_start)
        else:
            out[-1] = self.gripper_target
        return out

    @property
    def is_aligning(self) -> bool:
        return self._align_until is not None and time.monotonic() < self._align_until

    def _vla_resume_scale(self, now: float) -> float:
        if self.mode == _MODE_HUMAN_ONLY or self._awaiting_fresh_vla:
            return 0.0
        if self._resume_started_at is None or self._resume_ramp_s <= 0.0:
            return 1.0
        scale = (now - self._resume_started_at) / self._resume_ramp_s
        if scale >= 1.0:
            self._resume_started_at = None
            return 1.0
        return float(np.clip(scale, 0.0, 1.0))

    def runtime_weights(self, sentinel_weights: np.ndarray, now: Optional[float] = None) -> np.ndarray:
        if now is None:
            now = time.monotonic()
        sentinel_weights = _normalize_weights(sentinel_weights)
        if self.mode == _MODE_HUMAN_ONLY:
            w_vla = 0.0
            w_human = self._operator_human_weight
            w_gripper = self._operator_gripper_weight if self.gripper_override_active else 0.0
        else:
            # _vla_resume_scale linearly ramps 0→1 over resume_ramp_s seconds
            # after the operator releases HUMAN_ONLY mode, preventing a weight step.
            w_vla = float(sentinel_weights[0]) * self._vla_resume_scale(now)
            w_human = float(sentinel_weights[1])
            w_gripper = self._operator_gripper_weight if self.gripper_override_active else w_vla
        return np.array([w_vla, w_human, w_gripper], dtype=np.float64)


# ---------------------------------------------------------------------------
# UDP protocol
# ---------------------------------------------------------------------------
_UDP_HOST      = "127.0.0.1"
_UDP_PORT      = 9788
_UDP_PORT_JS   = 9789  # 反向：bridge → lerobot 关节状态
_MSG_ACTUAL    = 0   # shape [7,]  — VLA current action
_MSG_PREDICTED = 1   # shape [N,7] — VLA predicted chunk
_MSG_WEIGHTS   = 2   # shape [2,]  Sentinel direct eTaSL weights

# ---------------------------------------------------------------------------
# Joint names
# ---------------------------------------------------------------------------
_JOINT_NAMES_7 = [
    "joint_0", "joint_1", "joint_2", "joint_3",
    "joint_4", "joint_5", "joint_6",
]
_JOINT_COUNT = len(_JOINT_NAMES_7)
_SENTINEL_WEIGHT_COUNT = 2


def _normalize_joint_vector(joints: np.ndarray) -> np.ndarray:
    """Return a flat 7-joint vector with gripper as the final element."""
    arr = np.asarray(joints, dtype=np.float64).reshape(-1)
    if arr.size != _JOINT_COUNT:
        raise ValueError(
            f"Expected {_JOINT_COUNT} joints including gripper, got {arr.size}"
        )
    return arr


def _normalize_joint_chunk(chunk: np.ndarray) -> np.ndarray:
    """Return an Nx7 joint chunk with gripper in column 6."""
    arr = np.asarray(chunk, dtype=np.float64)
    if arr.ndim == 1:
        return _normalize_joint_vector(arr).reshape(1, _JOINT_COUNT)
    if arr.ndim != 2 or arr.shape[1] != _JOINT_COUNT:
        raise ValueError(
            f"Expected predicted chunk shape (N, {_JOINT_COUNT}) including gripper, "
            f"got {arr.shape}"
        )
    return arr


def _normalize_weights(weights: np.ndarray) -> np.ndarray:
    """Return non-negative Sentinel weights [w_vla, w_human]."""
    arr = np.asarray(weights, dtype=np.float64).reshape(-1)
    if arr.size != _SENTINEL_WEIGHT_COUNT:
        raise ValueError(f"Expected {_SENTINEL_WEIGHT_COUNT} Sentinel weights, got {arr.size}")
    if not np.all(np.isfinite(arr)):
        raise ValueError("Sentinel weights must be finite")
    return np.maximum(arr, 0.0)

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


def _fk_ee_transform(q7: np.ndarray) -> np.ndarray:
    """Chain 4x4 homogeneous transforms along the kinematic chain.

    Each joint contributes: rotation about its axis (angle qi) followed by the fixed
    translation to the next joint origin, both extracted from wxai_follower.urdf.
    The gripper joint (q7[6]) does not affect EE position so only q7[:6] are used.
    Finally appends the fixed EE offset relative to joint_5's frame.
    """
    T = np.eye(4)
    for j, qi in zip(_FK_JOINTS, q7[:6]):
        Tji = np.eye(4)
        Tji[:3, :3] = _rot3(j["axis"], float(qi))
        Tji[:3, 3]  = j["xyz"]
        T = T @ Tji

    Tee = np.eye(4)
    Tee[:3, 3] = _EE_OFFSET
    return T @ Tee


def _fk_ee(q7: np.ndarray) -> np.ndarray:
    T = _fk_ee_transform(q7)
    return T[:3, 3]


def _quat_xyzw_from_rot(R: np.ndarray) -> np.ndarray:
    trace = float(np.trace(R))
    if trace > 0.0:
        s = np.sqrt(trace + 1.0) * 2.0
        qw = 0.25 * s
        qx = (R[2, 1] - R[1, 2]) / s
        qy = (R[0, 2] - R[2, 0]) / s
        qz = (R[1, 0] - R[0, 1]) / s
    else:
        diag = np.diagonal(R)
        if diag[0] > diag[1] and diag[0] > diag[2]:
            s = np.sqrt(1.0 + R[0, 0] - R[1, 1] - R[2, 2]) * 2.0
            qw = (R[2, 1] - R[1, 2]) / s
            qx = 0.25 * s
            qy = (R[0, 1] + R[1, 0]) / s
            qz = (R[0, 2] + R[2, 0]) / s
        elif diag[1] > diag[2]:
            s = np.sqrt(1.0 + R[1, 1] - R[0, 0] - R[2, 2]) * 2.0
            qw = (R[0, 2] - R[2, 0]) / s
            qx = (R[0, 1] + R[1, 0]) / s
            qy = 0.25 * s
            qz = (R[1, 2] + R[2, 1]) / s
        else:
            s = np.sqrt(1.0 + R[2, 2] - R[0, 0] - R[1, 1]) * 2.0
            qw = (R[1, 0] - R[0, 1]) / s
            qx = (R[0, 2] + R[2, 0]) / s
            qy = (R[1, 2] + R[2, 1]) / s
            qz = 0.25 * s

    quat = np.array([qx, qy, qz, qw], dtype=np.float64)
    return quat / np.linalg.norm(quat)


def _fk_ee_pose(q7: np.ndarray) -> np.ndarray:
    """Return end-effector pose as [x, y, z, qx, qy, qz, qw]."""
    T = _fk_ee_transform(q7)
    return np.concatenate((T[:3, 3], _quat_xyzw_from_rot(T[:3, :3])))


# ---------------------------------------------------------------------------
# Bridge node
# ---------------------------------------------------------------------------

class VLABridgeNode(Node):

    def __init__(self):
        super().__init__("vla_ros_bridge")

        self.declare_parameter("enable_gripper", False)

        # 没收到 Sentinel 权重前，先用旧的测试权重: [w_vla, w_human]
        # w_gripper 由 _OperatorAuthority.runtime_weights() 根据夹爪 override 状态派生。
        self._weights = np.array([1.0, 1.0], dtype=np.float64)
        
        self._enable_gripper: bool = bool(
            self.get_parameter("enable_gripper").get_parameter_value().bool_value
        )

        # Publishers
        self._vla_cmd_pub    = self.create_publisher(JointState,   "/joint_states_VLA",        10)
        # Future Cartesian VLA target:
        # self._vla_pose_pub = self.create_publisher(Pose, "/pose_VLA", 10)
        self._actual_pub     = self.create_publisher(JointState,   "/actual/joint_states_rviz", 10)
        self._marker_pub     = self.create_publisher(Marker,       "/predicted_ee_marker",     10)
        self._weights_etasl_pub = self.create_publisher(CrospiInput, "/shared_control/weights", 10)
        self._mode_pub = self.create_publisher(String, "/shared_control/mode", 10)

        # Subscribers
        self.create_subscription(JointState, "/joint_states",   self._joint_states_cb,   qos_profile_sensor_data)
        self.create_subscription(Joy,        "/spacenav/joy",   self._joy_cb,            10)

        self._button_detector = _SpaceMouseButtonDetector()
        self._operator = _OperatorAuthority()
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
            f"[vla_bridge] UDP {_UDP_HOST}:{_UDP_PORT}"
        )

    # Callbacks

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
        vla_cmd_published = False
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
                vla_cmd_published = True
            elif data[0] == _MSG_PREDICTED:
                self._latest_chunk = array
            elif data[0] == _MSG_WEIGHTS:
                self._update_weights_from_udp(array)

        if self._latest_actual_joints is not None:
            self._publish_actual_viz(now)

        if self._latest_chunk is not None:
            self._publish_predicted_markers(now)

        # Buttons → gripper (left button only active in HUMAN_ONLY mode)
        button_events = self._button_detector.update(*self._latest_joy_buttons)
        if button_events.left_press and self._operator.mode == _MODE_HUMAN_ONLY:
            mono_now = time.monotonic()
            current_gripper = self._get_current_gripper_pos()
            target = self._operator.toggle_gripper(current_gripper, mono_now)
            self.get_logger().info(
                "[vla_bridge] SpaceMouse left toggle -> gripper %s target=%.4f (from %.4f)"
                % ("close" if self._operator.gripper_closed else "open", target, current_gripper)
            )
        if button_events.right_press:
            mode = self._operator.toggle_human_only(time.monotonic())
            self.get_logger().info(f"[vla_bridge] SpaceMouse right toggle -> mode={mode}")

        # When VLA is not running but gripper override is active, publish arm-hold +
        # gripper-target to /joint_states_VLA so eTaSL can actuate the gripper.
        if (
            self._operator.gripper_override_active
            and not vla_cmd_published
            and self._latest_actual_joints is not None
        ):
            self._publish_gripper_hold_cmd(now)

        weights_msg = CrospiInput()
        runtime_weights = self._operator.runtime_weights(self._weights, time.monotonic())
        weights_msg.names = ["w_vla", "w_human", "w_gripper"]
        weights_msg.data = runtime_weights.tolist()
        self._weights_etasl_pub.publish(weights_msg)

        mode_msg = String()
        mode_msg.data = self._operator.mode
        self._mode_pub.publish(mode_msg)

    # Publishers

    def _update_weights_from_udp(self, array: np.ndarray):
        try:
            self._weights = _normalize_weights(array)
        except ValueError as exc:
            self.get_logger().warning(f"[vla_bridge] dropping invalid Sentinel weights: {exc}")
            return
        self.get_logger().info(
            "[vla_bridge] weights udp w_vla=%.3f w_human=%.3f"
            % (self._weights[0], self._weights[1])
        )

    def _publish_vla_cmd(self, q7: np.ndarray, now):
        try:
            joints = _normalize_joint_vector(q7)
        except ValueError as exc:
            self.get_logger().warning(f"[vla_bridge] dropping invalid VLA command: {exc}")
            return

        mono = time.monotonic()
        self._operator.note_vla_command(mono)
        joints = self._operator.apply_gripper_override(joints, mono)

        # During alignment window, hold arm joints at actual position so eTaSL sees
        # zero tracking error while VLA adapts to the arm's current pose.
        if self._operator.is_aligning and self._latest_actual_joints is not None:
            name_to_pos = dict(zip(
                self._latest_actual_joints.name, self._latest_actual_joints.position
            ))
            for i, n in enumerate(_JOINT_NAMES_7[:-1]):  # joints 0-5 only, keep gripper
                joints[i] = name_to_pos.get(n, joints[i])

        msg = JointState()
        msg.header.stamp = now
        msg.name     = _JOINT_NAMES_7
        msg.position = joints.tolist()
        self._vla_cmd_pub.publish(msg)

        # Future Cartesian VLA target from FK.
        # Keep this disabled for now: eTaSL still consumes /joint_states_VLA.
        #
        # pose_vla = _fk_ee_pose(np.asarray(q7, dtype=np.float64))
        # pose_msg = Pose()
        # pose_msg.position.x = float(pose_vla[0])
        # pose_msg.position.y = float(pose_vla[1])
        # pose_msg.position.z = float(pose_vla[2])
        # pose_msg.orientation.x = float(pose_vla[3])
        # pose_msg.orientation.y = float(pose_vla[4])
        # pose_msg.orientation.z = float(pose_vla[5])
        # pose_msg.orientation.w = float(pose_vla[6])
        # self._vla_pose_pub.publish(pose_msg)

    def _publish_gripper_hold_cmd(self, now):
        """Publish current arm joints + gripper override target when VLA is not running."""
        src = self._latest_actual_joints
        if src is None:
            return
        name_to_pos = dict(zip(src.name, src.position))
        joints = np.array(
            [name_to_pos.get(n, 0.0) for n in _JOINT_NAMES_7], dtype=np.float64
        )
        joints = self._operator.apply_gripper_override(joints)
        msg = JointState()
        msg.header.stamp = now
        msg.name = _JOINT_NAMES_7
        msg.position = joints.tolist()
        self._vla_cmd_pub.publish(msg)

    def _get_current_gripper_pos(self) -> float:
        if self._latest_actual_joints is None:
            return _GRIPPER_OPEN_POS
        name_to_pos = dict(zip(
            self._latest_actual_joints.name, self._latest_actual_joints.position
        ))
        return float(name_to_pos.get(_JOINT_NAMES_7[-1], _GRIPPER_OPEN_POS))

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
        try:
            chunk = _normalize_joint_chunk(chunk)
        except ValueError as exc:
            self.get_logger().warning(f"[vla_bridge] dropping invalid predicted chunk: {exc}")
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
