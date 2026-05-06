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
