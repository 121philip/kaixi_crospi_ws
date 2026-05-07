import importlib.util
from pathlib import Path

import numpy as np


_MODULE_PATH = (
    Path(__file__).resolve().parents[1]
    / "example_nodes"
    / "vla_ros_bridge_node.py"
)


def _load_bridge_module():
    spec = importlib.util.spec_from_file_location("vla_ros_bridge_node", _MODULE_PATH)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


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
    assert bridge._JOINT_NAMES_7[-1] == "left_carriage_joint"
    assert joints[-1] == 0.037


def test_joint_vector_normalization_rejects_six_joint_arm_only_commands():
    bridge = _load_bridge_module()

    try:
        bridge._normalize_joint_vector(np.arange(6))
    except ValueError as exc:
        assert "Expected 7 joints" in str(exc)
    else:
        raise AssertionError("six-joint VLA commands must not be accepted")
