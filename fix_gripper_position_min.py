"""
Fix gripper (joint 6) position_min on the arm controller.

Root cause: position_min=0.0 m maps to exactly -12.5 motor SDK units (the hardware
boundary). Any command at or below 0.0 m triggers "position goal out of bounds".
Setting position_min=0.004 m (= existing position_tolerance) means the driver clips
all commands to >=0.004 m before the Motor SDK sees them.

Run ONCE after powering on the arm (before starting crospi_node).
The change is lost on power-off, so this must run each session.
"""

import trossen_arm


def main():
    driver = trossen_arm.TrossenArmDriver()
    driver.configure(
        trossen_arm.Model.wxai_v0,
        trossen_arm.StandardEndEffector.wxai_v0_follower,
        "192.168.2.3",
        False,
    )

    limits = driver.get_joint_limits()

    print("Current gripper (joint 6) limits:")
    g = limits[-1]
    print(f"  position_min:       {g.position_min}")
    print(f"  position_max:       {g.position_max}")
    print(f"  position_tolerance: {g.position_tolerance}")

    # Move position_min away from 0.0 so the Motor SDK never receives -12.5.
    # 0.004 m == existing tolerance, so physical hard-stop (0.0 m) stays within
    # [position_min - tolerance, position_max + tolerance] = [-0.0, 0.044].
    limits[-1].position_min = 0.004

    driver.set_joint_limits(limits)

    print("\nUpdated gripper (joint 6) limits:")
    updated = driver.get_joint_limits()[-1]
    print(f"  position_min:       {updated.position_min}")
    print(f"  position_max:       {updated.position_max}")
    print(f"  position_tolerance: {updated.position_tolerance}")
    print("\nDone. Restart crospi_node now.")


if __name__ == "__main__":
    main()
