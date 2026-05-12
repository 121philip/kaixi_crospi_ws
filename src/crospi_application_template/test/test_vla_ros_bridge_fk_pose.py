import importlib.util
from pathlib import Path
import sys
import types

import numpy as np


_MODULE_PATH = (
    Path(__file__).resolve().parents[1]
    / "example_nodes"
    / "vla_ros_bridge_node.py"
)


def _load_bridge_module():
    _install_ros_stubs()
    spec = importlib.util.spec_from_file_location("vla_ros_bridge_node", _MODULE_PATH)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def _install_ros_stubs():
    if "rclpy" in sys.modules:
        return

    rclpy = types.ModuleType("rclpy")
    rclpy.init = lambda *args, **kwargs: None
    rclpy.spin = lambda *args, **kwargs: None
    rclpy.shutdown = lambda *args, **kwargs: None

    rclpy_node = types.ModuleType("rclpy.node")

    class Node:
        pass

    rclpy_node.Node = Node

    rclpy_qos = types.ModuleType("rclpy.qos")
    rclpy_qos.qos_profile_sensor_data = object()

    sensor_msgs = types.ModuleType("sensor_msgs")
    sensor_msgs_msg = types.ModuleType("sensor_msgs.msg")

    class JointState:
        pass

    class Joy:
        pass

    sensor_msgs_msg.JointState = JointState
    sensor_msgs_msg.Joy = Joy

    std_msgs = types.ModuleType("std_msgs")
    std_msgs_msg = types.ModuleType("std_msgs.msg")

    class Float64:
        pass

    class String:
        pass

    std_msgs_msg.Float64 = Float64
    std_msgs_msg.String = String

    visualization_msgs = types.ModuleType("visualization_msgs")
    visualization_msgs_msg = types.ModuleType("visualization_msgs.msg")

    class Marker:
        SPHERE = 2
        LINE_STRIP = 4
        SPHERE_LIST = 7
        ADD = 0

    visualization_msgs_msg.Marker = Marker

    geometry_msgs = types.ModuleType("geometry_msgs")
    geometry_msgs_msg = types.ModuleType("geometry_msgs.msg")

    class Point:
        def __init__(self, **kwargs):
            self.__dict__.update(kwargs)

    geometry_msgs_msg.Point = Point

    builtin_interfaces = types.ModuleType("builtin_interfaces")
    builtin_interfaces_msg = types.ModuleType("builtin_interfaces.msg")

    class Duration:
        def __init__(self, **kwargs):
            self.__dict__.update(kwargs)

    builtin_interfaces_msg.Duration = Duration

    crospi_interfaces = types.ModuleType("crospi_interfaces")
    crospi_interfaces_msg = types.ModuleType("crospi_interfaces.msg")

    class Input:
        pass

    crospi_interfaces_msg.Input = Input

    sys.modules.update({
        "rclpy": rclpy,
        "rclpy.node": rclpy_node,
        "rclpy.qos": rclpy_qos,
        "sensor_msgs": sensor_msgs,
        "sensor_msgs.msg": sensor_msgs_msg,
        "std_msgs": std_msgs,
        "std_msgs.msg": std_msgs_msg,
        "visualization_msgs": visualization_msgs,
        "visualization_msgs.msg": visualization_msgs_msg,
        "geometry_msgs": geometry_msgs,
        "geometry_msgs.msg": geometry_msgs_msg,
        "builtin_interfaces": builtin_interfaces,
        "builtin_interfaces.msg": builtin_interfaces_msg,
        "crospi_interfaces": crospi_interfaces,
        "crospi_interfaces.msg": crospi_interfaces_msg,
    })


def test_fk_ee_pose_returns_xyz_and_normalized_xyzw_quaternion():
    bridge = _load_bridge_module()

    pose = bridge._fk_ee_pose(np.zeros(7))

    assert pose.shape == (7,)
    np.testing.assert_allclose(pose[:3], bridge._fk_ee(np.zeros(7)))
    np.testing.assert_allclose(np.linalg.norm(pose[3:]), 1.0)
    np.testing.assert_allclose(pose[3:], [0.0, 0.0, 0.0, 1.0])


def test_joint_vector_normalization_preserves_gripper_as_seventh_joint():
    bridge = _load_bridge_module()

    joints = bridge._normalize_joint_vector([[0.0], [0.1], [0.2], [0.3], [0.4], [0.5], [0.037]])

    assert joints.shape == (7,)
    assert bridge._JOINT_NAMES_7[-1] == "joint_6"
    assert joints[-1] == 0.037


def test_joint_vector_normalization_rejects_six_joint_arm_only_commands():
    bridge = _load_bridge_module()

    try:
        bridge._normalize_joint_vector(np.arange(6))
    except ValueError as exc:
        assert "Expected 7 joints" in str(exc)
    else:
        raise AssertionError("six-joint VLA commands must not be accepted")


def test_spacemouse_buttons_emit_rising_edges_only():
    bridge = _load_bridge_module()
    detector = bridge._SpaceMouseButtonDetector(debounce_s=0.15)

    event = detector.update(True, False, now=1.0)
    assert event.left_press
    assert not event.right_press

    event = detector.update(True, False, now=1.01)
    assert not event.left_press
    assert not event.right_press

    detector.update(False, False, now=1.02)
    event = detector.update(True, False, now=1.05)
    assert not event.left_press

    detector.update(False, False, now=1.2)
    event = detector.update(True, False, now=1.21)
    assert event.left_press


def test_left_button_gripper_override_replaces_vla_gripper_target():
    bridge = _load_bridge_module()
    authority = bridge._OperatorAuthority(
        gripper_closed_pos=0.001,
        gripper_open_pos=0.035,
    )

    target = authority.toggle_gripper()
    joints = authority.apply_gripper_override(np.array([0, 1, 2, 3, 4, 5, 0.035]))
    weights = authority.runtime_weights(np.array([0.7, 0.2]), now=1.0)

    assert target == 0.001
    assert joints[-1] == 0.001
    np.testing.assert_allclose(weights, [0.7, 0.2, 1.0])

    target = authority.toggle_gripper()
    joints = authority.apply_gripper_override(np.array([0, 1, 2, 3, 4, 5, 0.001]))
    assert target == 0.035
    assert joints[-1] == 0.035


def test_right_button_human_only_blocks_vla_arm_but_keeps_operator_gripper():
    bridge = _load_bridge_module()
    authority = bridge._OperatorAuthority()

    authority.toggle_gripper()
    authority.toggle_human_only(now=1.0)
    weights = authority.runtime_weights(np.array([0.9, 0.1]), now=1.1)

    assert authority.mode == bridge._MODE_HUMAN_ONLY
    np.testing.assert_allclose(weights, [0.0, 1.0, 1.0])


def test_human_only_exit_waits_for_fresh_vla_then_ramps_weight():
    bridge = _load_bridge_module()
    authority = bridge._OperatorAuthority(resume_ramp_s=0.4)

    authority.toggle_human_only(now=1.0)
    authority.toggle_human_only(now=2.0)
    np.testing.assert_allclose(
        authority.runtime_weights(np.array([0.8, 0.1]), now=2.1),
        [0.0, 0.1, 0.0],
    )

    authority.note_vla_command(now=2.2)
    np.testing.assert_allclose(
        authority.runtime_weights(np.array([0.8, 0.1]), now=2.3),
        [0.2, 0.1, 0.2],
    )
    np.testing.assert_allclose(
        authority.runtime_weights(np.array([0.8, 0.1]), now=2.7),
        [0.8, 0.1, 0.8],
    )
