# Crospi — WidowX eTaSL Workspace

A ROS2 workspace that integrates the **Crospi** constraint-based robot control framework with the **Trossen WidowX AI** robotic arm, using **eTaSL** task specifications written in Lua.

> **Status:** Active development — focused on Trossen WidowX simulation and hardware integration.

---

## What is this?

**Crospi** (*Constraint-based ROS2 Solver and Plugin Interface*) lets you define robot tasks as mathematical constraints rather than pre-planned trajectories. A quadratic-programming solver (qpOASES) continuously computes optimal joint velocities to satisfy all constraints in real time, enabling reactive, adaptable robot behavior.

**eTaSL** (*Enhanced Task Specification Language*) is the Lua-based DSL used inside Crospi to define constraints, monitors, and task logic.

This workspace applies that framework to the Trossen WidowX AI arm, providing:
- A hardware driver plugin for the WidowX
- eTaSL task specifications (move-to-target, pick-and-place)
- A simulation setup so you can run everything without physical hardware

---

## Repository Structure

```
kaixi_crospi_ws/
├── src/
│   ├── crospi_application_template/       # Crospi framework template & utilities
│   │   ├── task_specifications/libraries/ # Reusable eTaSL task libraries
│   │   ├── skill_specifications/          # BehaviorFSM-based skill orchestration
│   │   ├── applications/                  # Full application examples (UR10, Trossen)
│   │   ├── tutorial_examples/             # Beginner tutorials
│   │   └── schemas/                       # JSON schemas for configuration validation
│   ├── widowx_etasl/                      # eTaSL tasks + ROS2 nodes for WidowX
│   │   ├── tasks/                         # Lua task files (move_to_target, pick_ball)
│   │   ├── config/                        # Setup JSON (simulation & hardware)
│   │   ├── crospi_bridge.py               # Bridges Crospi joint states → arm controller
│   │   └── crospi_starter.py             # Lifecycle orchestrator
│   ├── robot_drivers/
│   │   └── trossen_widowx_driver_crospi/ # C++ pluginlib driver for WidowX hardware
│   ├── trossen_widowx_interfaces/         # ROS2 service definitions
│   └── trossen_arm_description/           # URDF model, meshes, RViz config
└── schemas/                               # Auto-generated JSON schemas
```

---

## Prerequisites

- **ROS2** (Humble or later)
- **crospi_core** — Crospi constraint solver (external, from KU Leuven RAM group)
- **libtrossen_arm** — Trossen C++ arm driver ([setup guide](https://docs.trossenrobotics.com/trossen_arm/main/getting_started/software_setup.html))
- **trossen_widowx_interfaces** — ROS2 interfaces package ([GitHub](https://github.com/Robotics-Research-Group-KUL/trossen_widowx_interfaces))
- C++17 compiler, CMake ≥ 3.8
- Python 3, `colcon`

---

## Building

```bash
# Clone this workspace and the required interfaces package
cd kaixi_crospi_ws/src
git clone https://github.com/Robotics-Research-Group-KUL/trossen_widowx_interfaces

# Install libtrossen_arm first (see Trossen docs), then build
cd ..
colcon build --symlink-install

source install/setup.bash
```

JSON schemas for task and plugin configurations are **auto-generated** during the build from the Lua task files and pluginlib plugins.

---

## Running (Simulation)

```bash
# Terminal 1 — start the Trossen arm simulation
ros2 launch trossen_arm_description simulate.launch.py

# Terminal 2 — start Crospi + bridge + starter
ros2 launch widowx_etasl widowx_sim.launch.py
```

The starter node will configure and activate the Crospi lifecycle, load the task specification, and begin constraint-based control. To switch tasks (e.g., trigger pick-and-place), publish the corresponding event topic.

---

## How It Works

```
┌─────────────────────────────────────────────────────┐
│                   ROS2 Ecosystem                     │
│                                                      │
│  crospi_starter ──► CROSPI_NODE (crospi_core)       │
│                         │                            │
│                   eTaSL Solver                       │
│                   • Lua task constraints             │
│                   • QP optimization (qpOASES)        │
│                   • Frame/Jacobian computation       │
│                         │                            │
│                   I/O Handlers                       │
│                   • Input: target pose topics        │
│                   • Output: joint velocities         │
│                         │                            │
│  crospi_bridge ◄────────┘                            │
│       │  Converts joint states → trajectory goals    │
└───────┼──────────────────────────────────────────────┘
        │
   WidowX AI Arm (real or simulated)
```

**Task specification example** (Lua):
```lua
-- Constraint: drive end-effector to target position
Constraint {
    expr   = coord_x(ee_pos) - target_x,
    K      = 3.0,
    weight = 1.0,
    priority = 2,
}

-- Monitor: emit event when goal is reached
Monitor {
    expr      = dist_to_target,
    upper     = 0.01,
    actionname = "event",
    argument  = "e_goal_reached",
}
```

---

## Key Packages

| Package | Language | Purpose |
|---|---|---|
| `crospi_application_template` | Lua / Python | Framework template, task & skill libraries, application examples |
| `widowx_etasl` | Lua / Python | WidowX-specific tasks and ROS2 orchestration nodes |
| `trossen_widowx_driver_crospi` | C++ | pluginlib hardware driver for WidowX |
| `trossen_widowx_interfaces` | ROS2 IDL | Service definitions for gripper and arm mode control |
| `trossen_arm_description` | URDF / XML | Robot model, meshes, and RViz visualization |

---

## Documentation

Full documentation and tutorials are available on the [Crospi website](https://crospi-website-907f83.pages.gitlab.kuleuven.be/).

---

## License & Acknowledgements

- `crospi_application_template` — GNU LGPL v3
- `trossen_widowx_driver_crospi` — Apache-2.0
- `widowx_etasl` — MIT

This work was funded by the European Union's Horizon 2020 research and innovation programme under grant agreement No. [101058589](https://cordis.europa.eu/project/id/101058589) ([AI-PRISM](https://aiprism.eu/)).

Developed by the [Robotics & Mechatronics (RAM) Group](https://www.mech.kuleuven.be/en/research/ram), KU Leuven:
- Santiago Iregui Rincon
- Erwin Aertbeliën
- Federico Ulloa Rios
