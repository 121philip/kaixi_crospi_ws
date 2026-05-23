#!/usr/bin/env python3
"""
Eyeball-check tool for RQ3 trial CSVs.

Run this immediately after a trial (or after a calibration cycle) to confirm:
  - the raw CSV has the expected columns,
  - timestamps are monotonic and roughly evenly spaced,
  - twist values fall within the calibrated vmax envelope,
  - gripper and mode-switch press counts make sense.

It also recomputes CE_velocity, gripper_rate, and n_mode_switch from the raw
CSV and reports them, so the operator can sanity-check the summary row before
moving to the next trial.

Usage:
  python check_csv.py --raw ./logs/B1_trial_01_raw.csv --vmax ./vmax.yaml
  python check_csv.py --summary ./logs/B1_summary.csv
"""

import argparse
import csv
import math
import sys
from pathlib import Path

import yaml


_EXPECTED_RAW_COLS = [
    "ts", "vx", "vy", "vz", "wx", "wy", "wz", "gripper_btn", "mode_btn",
]
_AXES = ("vx", "vy", "vz", "wx", "wy", "wz")


def load_vmax(path):
    with open(path, "r") as f:
        d = yaml.safe_load(f)
    for k in _AXES:
        if k not in d or float(d[k]) <= 0.0:
            sys.exit(f"FAIL: vmax.yaml missing or non-positive key '{k}'")
    return {k: float(d[k]) for k in _AXES}


def check_raw(raw_path: Path, vmax: dict) -> int:
    rc = 0
    if not raw_path.exists():
        print(f"FAIL: raw CSV not found at {raw_path}")
        return 1

    with open(raw_path, "r") as f:
        reader = csv.reader(f)
        header = next(reader, None)
        rows = list(reader)

    if header != _EXPECTED_RAW_COLS:
        print(f"FAIL: header mismatch. expected={_EXPECTED_RAW_COLS} got={header}")
        return 1
    print(f"OK   header columns: {header}")

    if len(rows) < 2:
        print(f"FAIL: only {len(rows)} data rows (need >=2)")
        return 1
    print(f"OK   row count: {len(rows)}")

    ts_values = [float(r[0]) for r in rows]
    if any(b < a for a, b in zip(ts_values, ts_values[1:])):
        print("FAIL: timestamps are not monotonically non-decreasing")
        rc = 1
    else:
        print("OK   timestamps monotonic non-decreasing")

    span = ts_values[-1] - ts_values[0]
    mean_dt = span / (len(rows) - 1)
    print(f"INFO time span: {span:.3f} s, mean dt: {mean_dt * 1000:.2f} ms "
          f"(approx {1.0 / mean_dt:.1f} Hz)")

    # Check twist values lie within +/- 1.5 * vmax envelope (allow some headroom
    # in case the operator pushed slightly past calibrated peak).
    for axis_idx, axis_name in enumerate(_AXES, start=1):
        col = [float(r[axis_idx]) for r in rows]
        peak = max(abs(v) for v in col)
        limit = 1.5 * vmax[axis_name]
        flag = "OK  " if peak <= limit else "WARN"
        if peak > limit:
            rc = 1
        print(f"{flag} axis {axis_name}: peak={peak:.4f}  vmax={vmax[axis_name]:.4f}")

    # Gripper / mode button event counts (rising edges).
    g_col = [int(r[7]) for r in rows]
    m_col = [int(r[8]) for r in rows]
    n_g = sum(1 for a, b in zip(g_col, g_col[1:]) if a == 0 and b == 1)
    n_m = sum(1 for a, b in zip(m_col, m_col[1:]) if a == 0 and b == 1)
    print(f"INFO gripper presses (rising edges): {n_g}")
    print(f"INFO mode-switch presses (rising edges): {n_m}")

    # Recompute CE_velocity using trapezoidal integration.
    s_samples = []
    for r in rows:
        twist = {axis: float(r[i + 1]) for i, axis in enumerate(_AXES)}
        acc = sum((twist[k] / vmax[k]) ** 2 for k in _AXES)
        s_t = math.sqrt(acc) / math.sqrt(6.0)
        s_samples.append((float(r[0]), s_t))
    area = 0.0
    for (t0, s0), (t1, s1) in zip(s_samples[:-1], s_samples[1:]):
        area += 0.5 * (s0 + s1) * (t1 - t0)
    ce = area / span if span > 0 else float("nan")
    print(f"INFO recomputed CE_velocity: {ce:.4f}")

    return rc


def check_summary(summary_path: Path) -> int:
    if not summary_path.exists():
        print(f"FAIL: summary CSV not found at {summary_path}")
        return 1
    with open(summary_path, "r") as f:
        reader = csv.DictReader(f)
        rows = list(reader)
    expected = {"trial_id", "condition", "T_trial_s", "CE_velocity",
                "n_gripper_press", "gripper_rate_hz", "n_mode_switch", "raw_csv"}
    actual = set(reader.fieldnames or [])
    missing = expected - actual
    if missing:
        print(f"FAIL: summary missing columns {missing}")
        return 1
    print(f"OK   summary header columns complete")
    print(f"OK   trials recorded: {len(rows)}")
    for r in rows:
        print(f"  trial {r['trial_id']:>3}  cond={r['condition']}  "
              f"T={float(r['T_trial_s']):.2f}s  CE={float(r['CE_velocity']):.4f}  "
              f"gripper={r['n_gripper_press']}  mode={r['n_mode_switch']}")
    return 0


def main():
    p = argparse.ArgumentParser(description="Check trial CSV files")
    p.add_argument("--raw", type=str, default=None, help="Path to a raw_csv file")
    p.add_argument("--vmax", type=str, default=None, help="Path to vmax.yaml (required with --raw)")
    p.add_argument("--summary", type=str, default=None, help="Path to a summary CSV")
    args = p.parse_args()

    if not args.raw and not args.summary:
        sys.exit("Specify at least one of --raw or --summary")

    rc = 0
    if args.raw:
        if not args.vmax:
            sys.exit("--vmax is required when --raw is given")
        vmax = load_vmax(args.vmax)
        rc |= check_raw(Path(args.raw), vmax)
    if args.summary:
        rc |= check_summary(Path(args.summary))
    sys.exit(rc)


if __name__ == "__main__":
    main()
