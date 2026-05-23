#!/usr/bin/env python3
"""
One-off calibration: measure per-axis maximum SpaceMouse twist.

Procedure (as documented in thesis Ch5 §sec:workload_quantification):
  1. Run this script while the spacenav driver is publishing /spacenav/twist.
  2. Push the SpaceMouse to the mechanical stop along each axis for ~2 s in turn:
       +x, -x, +y, -y, +z, -z, +rx, -rx, +ry, -ry, +rz, -rz
  3. The script tracks the peak |value| seen on each axis since launch.
  4. Press Ctrl+C to finalise. The peaks are written to <out>/vmax.yaml.

The output file is consumed by spacemouse_logger_node.py and by any offline
re-analysis that needs to renormalize CE_velocity. Do not edit it by hand.

Usage:
  ros2 run crospi_application_template calibrate_spacemouse_vmax.py \
      --out ./vmax.yaml
"""

import argparse
import sys
import time
from pathlib import Path

import yaml

sys.path.insert(0, "/opt/ros/humble/local/lib/python3.10/dist-packages")
sys.path.insert(0, "/opt/ros/humble/lib/python3.10/site-packages")

import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from geometry_msgs.msg import Twist


_AXES = ("vx", "vy", "vz", "wx", "wy", "wz")


class VmaxCalibrator(Node):

    def __init__(self):
        super().__init__("spacemouse_vmax_calibrator")
        self._peaks = {k: 0.0 for k in _AXES}
        self._t0 = time.time()
        self._last_print = self._t0
        self._sub = self.create_subscription(
            Twist, "/spacenav/twist", self._on_twist, qos_profile_sensor_data
        )
        self.get_logger().info(
            "[CALIB] Push SpaceMouse to the mechanical stop on each axis (~2 s each). "
            "Press Ctrl+C when done."
        )

    def _on_twist(self, msg: Twist):
        current = {
            "vx": msg.linear.x, "vy": msg.linear.y, "vz": msg.linear.z,
            "wx": msg.angular.x, "wy": msg.angular.y, "wz": msg.angular.z,
        }
        for k in _AXES:
            v = abs(current[k])
            if v > self._peaks[k]:
                self._peaks[k] = v
        now = time.time()
        if now - self._last_print >= 1.0:
            self._last_print = now
            self.get_logger().info(
                "[CALIB] running peaks: "
                + " ".join(f"{k}={self._peaks[k]:.3f}" for k in _AXES)
            )

    def save(self, out_path: str):
        for k, v in self._peaks.items():
            if v <= 0.0:
                self.get_logger().warning(
                    f"[CALIB] Axis {k} has zero peak; calibration will fail validation. "
                    "Did you push that axis?"
                )
        path = Path(out_path)
        path.parent.mkdir(parents=True, exist_ok=True)
        with open(path, "w") as f:
            yaml.safe_dump(self._peaks, f, sort_keys=False)
        self.get_logger().info(f"[CALIB] Wrote {path}")


def parse_args():
    parser = argparse.ArgumentParser(description="Calibrate vmax per axis")
    parser.add_argument("--out", required=True, type=str,
                        help="Output YAML path (e.g. ./vmax.yaml)")
    return parser.parse_args()


def main():
    args = parse_args()
    rclpy.init()
    node = VmaxCalibrator()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("[CALIB] SIGINT received, saving...")
    finally:
        node.save(args.out)
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
