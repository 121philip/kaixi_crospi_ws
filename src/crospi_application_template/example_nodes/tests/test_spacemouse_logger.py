"""
Pytest unit tests for the pure-Python helpers in spacemouse_logger_node.py.

These tests stub out rclpy and friends so the module can be imported in a plain
Python environment (no sourced ROS distribution).
"""

import math
import sys
import types
from pathlib import Path

import pytest


def _install_ros_stubs():
    """Insert empty stub modules so `import spacemouse_logger_node` succeeds."""
    for name in [
        "rclpy", "rclpy.node", "rclpy.qos",
        "geometry_msgs", "geometry_msgs.msg",
        "sensor_msgs", "sensor_msgs.msg",
    ]:
        sys.modules.setdefault(name, types.ModuleType(name))
    sys.modules["rclpy.qos"].qos_profile_sensor_data = None
    sys.modules["rclpy.node"].Node = type("Node", (), {"__init__": lambda self, *a, **k: None})
    sys.modules["geometry_msgs.msg"].Twist = type("Twist", (), {})
    sys.modules["sensor_msgs.msg"].Joy = type("Joy", (), {})
    sys.modules["sensor_msgs.msg"].JointState = type("JointState", (), {})


_install_ros_stubs()
sys.path.insert(0, str(Path(__file__).resolve().parent.parent))

# Import after stubbing so the rclpy `import` lines succeed.
import spacemouse_logger_node as slogger  # noqa: E402


# --- normalized_twist_magnitude ----------------------------------------------


def test_normalized_twist_zero_is_zero():
    vmax = {k: 1.0 for k in slogger._VMAX_KEYS}
    twist = {k: 0.0 for k in slogger._VMAX_KEYS}
    assert slogger.normalized_twist_magnitude(twist, vmax) == 0.0


def test_normalized_twist_saturation_is_one():
    vmax = {k: 1.0 for k in slogger._VMAX_KEYS}
    twist = {k: 1.0 for k in slogger._VMAX_KEYS}
    # ||(1,1,1,1,1,1)||_2 / sqrt(6) = sqrt(6)/sqrt(6) = 1
    assert math.isclose(slogger.normalized_twist_magnitude(twist, vmax), 1.0)


def test_normalized_twist_single_axis_half():
    vmax = {k: 1.0 for k in slogger._VMAX_KEYS}
    twist = {k: 0.0 for k in slogger._VMAX_KEYS}
    twist["vx"] = 0.5
    # sqrt(0.25) / sqrt(6) = 0.5 / sqrt(6)
    assert math.isclose(
        slogger.normalized_twist_magnitude(twist, vmax),
        0.5 / math.sqrt(6.0),
    )


def test_normalized_twist_respects_per_axis_vmax():
    vmax = {"vx": 2.0, "vy": 1.0, "vz": 1.0, "wx": 1.0, "wy": 1.0, "wz": 1.0}
    twist = {"vx": 2.0, "vy": 0.0, "vz": 0.0, "wx": 0.0, "wy": 0.0, "wz": 0.0}
    # vx normalised = 1.0 -> ||(1,0,0,0,0,0)||_2 / sqrt(6) = 1/sqrt(6)
    assert math.isclose(
        slogger.normalized_twist_magnitude(twist, vmax),
        1.0 / math.sqrt(6.0),
    )


def test_normalized_twist_is_signed_invariant():
    vmax = {k: 1.0 for k in slogger._VMAX_KEYS}
    twist_pos = {"vx": 0.4, "vy": 0.0, "vz": 0.0, "wx": 0.0, "wy": 0.0, "wz": 0.0}
    twist_neg = {"vx": -0.4, "vy": 0.0, "vz": 0.0, "wx": 0.0, "wy": 0.0, "wz": 0.0}
    assert math.isclose(
        slogger.normalized_twist_magnitude(twist_pos, vmax),
        slogger.normalized_twist_magnitude(twist_neg, vmax),
    )


# --- integrate_ce_velocity ---------------------------------------------------


def test_integrate_empty_returns_zero():
    assert slogger.integrate_ce_velocity([]) == 0.0


def test_integrate_constant_signal_equals_value():
    samples = [(0.0, 0.3), (1.0, 0.3), (2.0, 0.3)]
    assert math.isclose(slogger.integrate_ce_velocity(samples), 0.3)


def test_integrate_step_signal():
    # half the trial at 0, half at 1 -> average 0.5 by trapezoidal area
    samples = [(0.0, 0.0), (1.0, 0.0), (1.0001, 1.0), (2.0001, 1.0)]
    val = slogger.integrate_ce_velocity(samples)
    assert 0.45 < val < 0.55


def test_integrate_handles_zero_duration():
    samples = [(1.0, 0.4), (1.0, 0.4)]
    assert slogger.integrate_ce_velocity(samples) == 0.0


# --- load_vmax ---------------------------------------------------------------


def test_load_vmax_happy_path(tmp_path):
    p = tmp_path / "vmax.yaml"
    p.write_text("vx: 0.5\nvy: 0.5\nvz: 0.4\nwx: 1.2\nwy: 1.2\nwz: 1.0\n")
    vmax = slogger.load_vmax(str(p))
    assert vmax == {"vx": 0.5, "vy": 0.5, "vz": 0.4,
                    "wx": 1.2, "wy": 1.2, "wz": 1.0}


def test_load_vmax_rejects_missing_key(tmp_path):
    p = tmp_path / "vmax.yaml"
    p.write_text("vx: 0.5\nvy: 0.5\nvz: 0.4\nwx: 1.2\nwy: 1.2\n")  # missing wz
    with pytest.raises(ValueError, match="missing key 'wz'"):
        slogger.load_vmax(str(p))


def test_load_vmax_rejects_zero_value(tmp_path):
    p = tmp_path / "vmax.yaml"
    p.write_text("vx: 0.0\nvy: 0.5\nvz: 0.4\nwx: 1.2\nwy: 1.2\nwz: 1.0\n")
    with pytest.raises(ValueError, match="must be > 0"):
        slogger.load_vmax(str(p))
