#!/usr/bin/env python3
"""
SpaceMouse logger node for RQ3 shared-control experiments (B1 and B3).

Subscribes to:
  - /spacenav/twist  (geometry_msgs/Twist)        : 6-DOF operator twist
  - /spacenav/joy    (sensor_msgs/Joy)            : button states (gripper, mode-switch)
  - /joint_states_VLA (sensor_msgs/JointState)    : used only to start the trial clock
                                                    if a VLA target arrives before the
                                                    operator moves the SpaceMouse (B3 case).

Writes two CSV files per trial:
  - <out_dir>/<condition>_trial_<NN>_raw.csv      : high-frequency sample stream
  - <out_dir>/<condition>_trial_<NN>_summary.csv  : one row appended per trial run
                                                    (file is created with header on first run)

Trial timing convention (matches D-2026-05-23-002):
  - t_start = wall-clock time of the first detected motion event:
              either |twist_component| > deadband on /spacenav/twist
              or the first /joint_states_VLA message (whichever comes first).
  - t_end   = wall-clock time of SIGINT (Ctrl+C).
  - T_trial = t_end - t_start. If no motion was ever detected, the trial is logged
              with T_trial = NaN and a console warning.

Usage:
  ros2 run crospi_application_template spacemouse_logger_node.py \
      --condition B1 --trial 1 --out-dir ./logs --vmax-yaml ./vmax.yaml

The vmax.yaml file is produced by calibrate_spacemouse_vmax.py.
"""

import argparse
import csv
import math
import os
import signal
import sys
import time
from pathlib import Path
from typing import Optional

import yaml

sys.path.insert(0, "/opt/ros/humble/local/lib/python3.10/dist-packages")
sys.path.insert(0, "/opt/ros/humble/lib/python3.10/site-packages")

import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Joy, JointState


# --- Constants ---------------------------------------------------------------

# Twist component below this absolute value is treated as zero for motion-start
# detection. Set so that operator hand tremor does not trigger t_start.
_MOTION_START_DEADBAND = 0.02

# Joy button indices on a standard spacenav setup.
# left  button -> gripper (index 0)
# right button -> mode switch (index 1)
_BTN_GRIPPER = 0
_BTN_MODE = 1

# Expected vmax YAML keys.
_VMAX_KEYS = ("vx", "vy", "vz", "wx", "wy", "wz")


# --- Pure helpers (unit-testable, no ROS imports needed) ---------------------


def load_vmax(yaml_path: str) -> dict:
    """Load vmax.yaml. Raise if any of the six keys is missing or non-positive."""
    with open(yaml_path, "r") as f:
        data = yaml.safe_load(f)
    for k in _VMAX_KEYS:
        if k not in data:
            raise ValueError(f"vmax.yaml missing key '{k}'")
        if float(data[k]) <= 0.0:
            raise ValueError(f"vmax.yaml key '{k}' must be > 0, got {data[k]}")
    return {k: float(data[k]) for k in _VMAX_KEYS}


def normalized_twist_magnitude(twist: dict, vmax: dict) -> float:
    """Compute the instantaneous s(t) used in eq:ce_velocity.

    s(t) = (1/sqrt(6)) * ||(twist_i / vmax_i)_{i=1..6}||_2

    Returns a value in [0, 1] under the calibration convention.
    """
    acc = 0.0
    for k in _VMAX_KEYS:
        acc += (twist[k] / vmax[k]) ** 2
    return math.sqrt(acc) / math.sqrt(6.0)


def integrate_ce_velocity(samples) -> float:
    """Trapezoidal integration of s(t) divided by total duration.

    samples is an iterable of (timestamp_s, s_value) tuples, sorted by timestamp.
    Returns 0.0 if fewer than two samples are provided.
    """
    samples = list(samples)
    if len(samples) < 2:
        return 0.0
    total_area = 0.0
    total_time = samples[-1][0] - samples[0][0]
    if total_time <= 0.0:
        return 0.0
    for (t0, s0), (t1, s1) in zip(samples[:-1], samples[1:]):
        dt = t1 - t0
        total_area += 0.5 * (s0 + s1) * dt
    return total_area / total_time


# --- ROS2 node ---------------------------------------------------------------


class SpaceMouseLoggerNode(Node):

    def __init__(self, args):
        super().__init__("spacemouse_logger_node")

        self._args = args
        self._vmax = load_vmax(args.vmax_yaml)

        out_dir = Path(args.out_dir)
        out_dir.mkdir(parents=True, exist_ok=True)
        stem = f"{args.condition}_trial_{int(args.trial):02d}"
        self._raw_path = out_dir / f"{stem}_raw.csv"
        self._summary_path = out_dir / f"{args.condition}_summary.csv"

        self._raw_file = open(self._raw_path, "w", newline="")
        self._raw_writer = csv.writer(self._raw_file)
        self._raw_writer.writerow([
            "ts", "vx", "vy", "vz", "wx", "wy", "wz",
            "gripper_btn", "mode_btn",
        ])

        # Trial state
        self._t_start: Optional[float] = None
        self._t_end: Optional[float] = None

        # Aggregates
        self._samples = []          # list of (ts_rel, s_t) for CE_velocity integration
        self._n_gripper_press = 0
        self._n_mode_press = 0
        self._prev_gripper = 0
        self._prev_mode = 0

        # Subscriptions
        self._sub_twist = self.create_subscription(
            Twist, "/spacenav/twist", self._on_twist, qos_profile_sensor_data
        )
        self._sub_joy = self.create_subscription(
            Joy, "/spacenav/joy", self._on_joy, qos_profile_sensor_data
        )
        self._sub_vla = self.create_subscription(
            JointState, "/joint_states_VLA", self._on_vla_target, qos_profile_sensor_data
        )

        self.get_logger().info(
            f"[LOGGER] condition={args.condition} trial={args.trial:02d} "
            f"out_dir={out_dir} vmax={self._vmax}"
        )
        self.get_logger().info(
            "[LOGGER] Waiting for first motion event (twist > deadband or VLA target)..."
        )

    # -- callbacks ------------------------------------------------------------

    def _maybe_start(self, now: float, source: str):
        if self._t_start is None:
            self._t_start = now
            self.get_logger().info(f"[LOGGER] t_start latched by {source} at {now:.3f} s")

    def _on_twist(self, msg: Twist):
        now = time.time()
        twist = {
            "vx": msg.linear.x, "vy": msg.linear.y, "vz": msg.linear.z,
            "wx": msg.angular.x, "wy": msg.angular.y, "wz": msg.angular.z,
        }

        if self._t_start is None:
            if any(abs(twist[k]) > _MOTION_START_DEADBAND for k in _VMAX_KEYS):
                self._maybe_start(now, "spacenav/twist")
            else:
                return  # ignore pre-motion idle samples entirely

        s_t = normalized_twist_magnitude(twist, self._vmax)
        rel = now - self._t_start
        self._samples.append((rel, s_t))
        self._raw_writer.writerow([
            f"{now:.6f}",
            twist["vx"], twist["vy"], twist["vz"],
            twist["wx"], twist["wy"], twist["wz"],
            self._prev_gripper, self._prev_mode,
        ])

    def _on_joy(self, msg: Joy):
        if len(msg.buttons) < 2:
            return
        g = int(msg.buttons[_BTN_GRIPPER])
        m = int(msg.buttons[_BTN_MODE])
        if g == 1 and self._prev_gripper == 0:
            self._n_gripper_press += 1
        if m == 1 and self._prev_mode == 0:
            self._n_mode_press += 1
        self._prev_gripper = g
        self._prev_mode = m

    def _on_vla_target(self, msg: JointState):
        # Used only to start the clock if VLA produces output before the operator moves.
        if self._t_start is None:
            self._maybe_start(time.time(), "joint_states_VLA")

    # -- shutdown finalisation ------------------------------------------------

    def finalize(self):
        self._t_end = time.time()
        self._raw_file.close()

        if self._t_start is None:
            t_trial = float("nan")
            ce_velocity = float("nan")
            self.get_logger().warning(
                "[LOGGER] No motion was detected during this trial. "
                "T_trial recorded as NaN."
            )
        else:
            t_trial = self._t_end - self._t_start
            ce_velocity = integrate_ce_velocity(self._samples)

        gripper_rate = (
            self._n_gripper_press / t_trial if t_trial and t_trial > 0 else float("nan")
        )

        # Append (or create with header) the summary file.
        write_header = not self._summary_path.exists()
        with open(self._summary_path, "a", newline="") as f:
            w = csv.writer(f)
            if write_header:
                w.writerow([
                    "trial_id", "condition", "T_trial_s",
                    "CE_velocity", "n_gripper_press", "gripper_rate_hz",
                    "n_mode_switch", "raw_csv",
                ])
            w.writerow([
                int(self._args.trial), self._args.condition, f"{t_trial:.6f}",
                f"{ce_velocity:.6f}", self._n_gripper_press, f"{gripper_rate:.6f}",
                self._n_mode_press, self._raw_path.name,
            ])

        self.get_logger().info(
            f"[LOGGER] DONE  T_trial={t_trial:.3f}s  CE_velocity={ce_velocity:.4f}  "
            f"gripper={self._n_gripper_press}  mode_switch={self._n_mode_press}  "
            f"raw={self._raw_path}  summary={self._summary_path}"
        )


# --- entry point -------------------------------------------------------------


def parse_args():
    parser = argparse.ArgumentParser(description="SpaceMouse logger for B1/B3 trials")
    parser.add_argument("--condition", required=True, choices=["B1", "B3"],
                        help="Experimental condition (B1=pure SpaceMouse, B3=shared)")
    parser.add_argument("--trial", required=True, type=int,
                        help="Trial index (e.g. 1, 2, ..., 20)")
    parser.add_argument("--out-dir", required=True, type=str,
                        help="Directory for raw + summary CSVs")
    parser.add_argument("--vmax-yaml", required=True, type=str,
                        help="Path to vmax.yaml produced by calibrate_spacemouse_vmax.py")
    return parser.parse_args()


def main():
    args = parse_args()
    rclpy.init()
    node = SpaceMouseLoggerNode(args)

    # Trap SIGINT for clean finalisation, but let rclpy.spin's KeyboardInterrupt
    # path do the actual exit so the executor unwinds normally.
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("[LOGGER] SIGINT received, finalising...")
    finally:
        node.finalize()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
