---
name: lerobot–CroSPI 集成决策与修复记录
description: CroSPIFollower 类的设计决策、eTaSL 权重 bug 修复、反向 UDP 通道实现、RViz 可视化 bug 修复、架构选型理由
type: project
originSessionId: 65c3d8bf-312c-45ed-a5c7-84f8a28cc883
---
## 背景

目标：让 lerobot 只负责推理（SmolVLA），CroSPI/eTaSL 负责所有硬件执行。需要一个新的机器人类替换直接控制硬件的 WidowXAIFollower。

## 已实施的修复和新增内容

### 1. eTaSL 权重实现（vla_spacemouse_blend.etasl.lua）

**历史 bug**：原版 `w_vla = sqrt(1-alpha)` 被定义但从未放入任何 Constraint；SpaceMouse 约束把 `w_human` 乘在 expr 里（两层平方导致权重是 α² 而非 α）。

**代码结构已正确**（weight 字段放相对权重，expr 保持干净）：
```lua
Constraint{ expr = err, weight = w_vla,   K = 2 }   -- VLA
Constraint{ expr = vel_err, weight = w_human, K = 0 }   -- SpaceMouse
```
Santiago 确认：`weight` 字段接受动态 eTaSL 表达式（不仅限于常数）。

**当前运行状态（硬编码，未激活动态混合）**：
```lua
alpha   = 0.5          -- 硬编码；动态读取行已注释
w_vla   = 1            -- 硬编码；(1-alpha+eps) 行已注释
w_human = 1            -- 硬编码；(alpha+eps) 行已注释
```
结果：VLA 和 SpaceMouse 当前各 50% 固定权重，无法实时调整。

**激活动态 α（TODO，两步）**：
1. `vla_spacemouse_blend.etasl.lua` 第 58-67 行：取消注释 3 行动态表达式，注释掉 3 个硬编码值
2. `trossen_vla_shared_control.setup.json` inputhandlers 末尾追加：
   ```json
   {"is-TopicInputHandler": true, "topic-name": "/shared_control/alpha"}
   ```
Bridge 侧已就绪：`vla_ros_bridge_node.py` 一直在 30Hz 发布 `/shared_control/alpha`（CrospiInput 格式，names=["alpha_input"]）。

### 2. 新建 CroSPIFollower 机器人类

**文件**：
- `lerobot_trossen/packages/lerobot_robot_trossen/src/lerobot_robot_trossen/crospi_follower.py`
- `lerobot_trossen/packages/lerobot_robot_trossen/src/lerobot_robot_trossen/config_crospi_follower.py`

**与 WidowXAIFollower 的关键差异**：
- `configure()`：只读取当前关节位置记录，不移动机械臂（eTaSL/CroSPI FSM 负责初始化动作）
- `send_action()`：空操作，直接返回 action dict；actor_thread 仍以 30 Hz 调用并转发给 rviz_publisher.put_actual() → MSG_ACTUAL → /joint_states_VLA → eTaSL
- `disconnect()`：只调用 driver.cleanup()，不移动机械臂
- `is_connected`：只检查相机，SDK 连接通过 `_arm_connected` 单独跟踪
- 支持 `connect(connect_arm=False)`：可跳过 SDK 连接，joint_states 改由 bridge 的反向 UDP 提供

**Config 精简**：去掉 `max_relative_target`、`min_time_to_move_multiplier`、`loop_rate`、`staged_positions`——这些由 CroSPI 负责。

### 3. run_inference_rtc.py 变更

- 新增 `--crospi` 标志：使用 CroSPIFollowerConfig 替代 WidowXAIFollowerConfig
- 删除 `--rviz` 标志：RVizPublisher 始终启动（UDP fire-and-forget，无接收方时无副作用）
- 新增 `--print-publish` 标志：单独测试时在 stdout 打印 ACTUAL/PREDICTED/ALPHA 内容
- `--crospi` 模式连接机械臂：`cast(CroSPIFollower, robot).connect(connect_arm=False)`（cast 让 Pylance 识别 connect_arm 参数，运行时无开销）

### 4. 反向 UDP 通道实现（:9789，bridge → lerobot）

**背景（与 Santiago 讨论后）**：follower 只能由 CroSPI 连接，lerobot 不应直接连 SDK 读取关节状态；改由 bridge_node 订阅真实 /joint_states 后转发。

**已修改文件**：
- `rviz_publisher.py`：新增 `_recv_loop` 守护线程绑定 UDP :9789，`get_latest_joints()` 加锁返回最新 [7,] 关节数组
- `inference_thread.py`：在 get_observation() 之后调用 `rviz_publisher.get_latest_joints()`，若有值则覆盖 raw_obs 中的 7 个 `.pos` 字段（bridge 未就绪时保留 SDK/mock 值，< 1s 过渡期）
- `vla_ros_bridge_node.py`：在 `_joint_states_cb` 中新增 `self._js_sock.sendto(pickle.dumps(joint_array, protocol=4), ("127.0.0.1", 9789))`

**测试方法（无 CroSPI）**：
```bash
# 监听 UDP :9788 验证 lerobot 输出
python3 -c "
import socket, pickle, numpy as np
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
sock.bind(('127.0.0.1', 9788))
while True:
    data, _ = sock.recvfrom(65535)
    t = data[0]
    arr = pickle.loads(data[1:])
    if t == 0: print(f'[ACTUAL] {np.round(arr,4).tolist()}')
    elif t == 1: print(f'[PREDICTED] shape={np.asarray(arr).shape}')
    elif t == 2: print(f'[ALPHA] {float(arr[0]):.4f}')
"
# 同时启动 lerobot
python important_code/inference/run_inference_rtc.py --dry-run --print-publish --task "..."
```

## 架构选型：为什么新文件放在 lerobot_trossen 而不是 CroSPI 侧

- lerobot 基类 `Robot`、Python 3.12 venv、OpenCV 摄像头全在 lerobot 侧
- CroSPI（System Python 3.10）不需要了解 lerobot 类继承结构
- 观测值通过 trossen SDK 直接读取（只读），无需反向 UDP（两个进程可以同时连接同一 IP 读取数据）

## UDP 桥接的根本原因：Python ABI 不兼容（已验证）

**问题背景**：Santiago 建议参考 [ycheng517/lerobot-ros](https://github.com/ycheng517/lerobot-ros) 直接在 LeRobot 进程内 `import rclpy` 并发布 ROS2 topic，认为 UDP 是不必要的复杂层。

**技术分析**：

| | ycheng517/lerobot-ros | 本项目 |
|---|---|---|
| ROS2 版本 | Jazzy | **Humble** |
| ROS2 Python | **3.12** | **3.10** |
| LeRobot Python | **3.12** | **3.12** |
| ABI 兼容 | ✓ 一致 | **✗ 不兼容** |

`rclpy` 核心是 C 扩展模块（`_rclpy_pybind11.cpython-310-x86_64-linux-gnu.so`），针对 Python 3.10 ABI 编译。**Python 3.12 进程无法加载 Python 3.10 的 `.so` 扩展**，即使在 `sys.path` 中添加 Humble 的 site-packages 路径也无效——Python 会在 import 时以 ABI 版本不匹配拒绝加载。

lerobot-ros 能直接 import rclpy 的原因：Jazzy 的 rclpy 编译目标是 Python 3.12，与 LeRobot venv 的 Python 版本一致。

**结论**：UDP 桥接是两个不兼容 Python 运行时之间 IPC 的标准方案，不是"意大利面"。本机 loopback UDP 延迟 < 1ms，对 30Hz 控制循环无影响。若未来升级到 ROS2 Jazzy，可消除 UDP 层，直接仿照 lerobot-ros 的方案。

**Why:** Santiago 未意识到 Humble vs Jazzy 的 Python 版本差异，误以为两个环境下的解法等价。

**How to apply:** 遇到"为什么不直接 import rclpy"或"为什么需要 UDP bridge"的问题，以此作为技术依据。

## RViz 可视化 Bug 修复（2026-05-01）

### Bug 1：蓝色机器人不显示——robot_state_publisher 缺少 remapping

**文件**：`trossen_follower_visualization.launch.py`

**原因**：`robot_state_publisher` 在 namespace `actual` 下默认订阅 `/actual/joint_states`，但 bridge 发布的话题名字不一致导致 TF frame 从未发布，蓝色机器人不出现。

**修复**：恢复 remapping（曾被误删）：
```python
rsp = Node(
    package="robot_state_publisher",
    namespace="actual",
    remappings=[("joint_states", "/actual/joint_states_rviz")],  # ← 关键
    parameters=[{"robot_description": _build_blue_urdf()}],
)
```

### Bug 2：/joint_states QoS 不兼容——bridge 收不到关节状态

**文件**：`vla_ros_bridge_node.py`

**原因**：`crospi_node` 发布 `/joint_states` 使用 `BEST_EFFORT` reliability（硬件传感器默认），bridge 订阅使用 rclpy 默认的 `RELIABLE`，ROS2 不传递不兼容 QoS 的消息，`_latest_actual_joints` 永远为 None。

**错误提示**：`[WARN] offering incompatible QoS. No messages will be received from it. Last incompatible policy: RELIABILITY`

**修复**：
```python
from rclpy.qos import qos_profile_sensor_data
self.create_subscription(JointState, "/joint_states", self._joint_states_cb, qos_profile_sensor_data)
```

**Why:** 硬件 driver 习惯用 BEST_EFFORT（不要求每包必达），而 rclpy 默认 RELIABLE，两者不兼容时 ROS2 静默丢包。

**How to apply:** 凡是订阅来自硬件 driver 的话题（/joint_states、/imu 等），优先使用 `qos_profile_sensor_data`。

### Bug 3：BeTFSM 状态机配置不一致（2026-05-01，已解决）

**文件**：`trossen_vla_shared_control_runner.py`

**原因**：`MovingHome` 的 transition 写的是 `SUCCEED: "Wait"`，但 `TimedWait("Wait", ...)` 状态已被注释掉，betfsm 找不到目标状态，抛 Exception 并 abort。

**解决**：取消注释 `TimedWait("Wait", Duration(seconds=5))`，并增加中间状态 `spacemouse_control`。

当前状态机路径：`MovingHome` → `Wait`（5s）→ `spacemouse_control` → `spacemouse_shared_control_vla`

### 5. 代码精简与文件重命名（2026-05-01，已完成，旧文件已删除）

**`_SpaceMouseArbiter` 内联**：原有 `shared_control_spacemouse.py`（870 行）中只有 `SpaceMouseArbiter + ArbiterResult` 被使用，其余 `ModeSwitcher / VelocityBlender / JacobianIK / SharedControlSystemSM` 均为死代码（eTaSL QP 求解器原生处理跨空间约束，不需要 JacobianIK）。精简后再内联为 bridge node 内部私有类 `_SpaceMouseArbiter`（只接受 `btn_l, btn_r`），`shared_control/` 文件夹已整体删除。

**设计原则确定**：无需 FSM 状态机（VLA_AUTONOMOUS / SHARED_CONTROL / HUMAN_ONLY 是过度工程），α ∈ [0,1] 本身即是控制比，α=0 纯 VLA、α=1 纯 SpaceMouse 只是连续谱的边界。

**删除 `/shared_control/mode` 话题**：bridge node 原有 `_control_mode` 字段和该话题是 FSM 删除后的残留，已完全移除。

**文件重命名（可读性提升）**：
| 旧名 | 新名 |
|------|------|
| `move_joystick_with_jointstate_test.etasl.lua` | `vla_spacemouse_blend.etasl.lua` |
| `move_joystick_with_jointstate_test.etasl.json` | `vla_spacemouse_blend.etasl.json` |
| `trossen_teleoperation_spacemouse.setup.json` | `trossen_vla_shared_control.setup.json` |
| `spacemouse_teleoperation_trossen.py` | `trossen_vla_shared_control_runner.py` |
| `tasks/spacemouse_teleoperation_trossen.json` | `tasks/trossen_vla_shared_control.json` |

配套更新：JSON schema 内的 `$id` 和 `is-move_joystick_with_jointstate_test` 键改为 `is-vla_spacemouse_blend`；tasks JSON 的 `file_path` 引用已同步更新；runner.py 内的 `load_task_list()` 路径已同步更新。

**重要：旧名文件已从磁盘删除（2026-05-01 验证）。** 若在 session 上下文中出现旧名（如 `trossen_teleoperation_spacemouse.setup.json`、`spacemouse_teleoperation_trossen.py`、`move_joystick_with_jointstate_test.etasl.lua` 等），那是上一次 session 读取的缓存内容，不代表这些文件当前存在。应以新名文件为准。

**lerobot_trossen 可视化文件删除**：以下文件/文件夹已删除，功能由 crospi 工作区的对应文件接管：
- `lerobot_trossen/important_code/inference/rviz_node.py`（→ `vla_ros_bridge_node.py`）
- `lerobot_trossen/important_code/visualization/`（整个文件夹：`launch_viz.sh`、`trajectory_viz.rviz`、`test_rviz_motion.py`、`diag_tf.py`）
- `kaixi_crospi_ws/src/.../applications/trossen_applications/launch_viz.sh`（→ `trossen_follower_visualization.launch.py`）

## 关于 RViz SpaceMouse 单独可视化

蓝色机器人可视化路径：`crospi_node /joint_states` → bridge `_joint_states_cb` → `/actual/joint_states_rviz` → `robot_state_publisher` → TF frames → RViz。

该路径完全不依赖 lerobot，理论上 SpaceMouse 单独控制时就应工作。**2026-05-01 前因上述 Bug 1+2 实际上无法工作，现已修复。**

橙色预测轨迹（MSG_PREDICTED）依赖 lerobot 运行，SpaceMouse 单独模式时正常缺失。

**How to apply:** 遇到"只用 SpaceMouse 能看到机器人吗"——确认 Bug 1+2 的修复是否已包含在当前代码中。

### 话题命名优化（2026-05-01，已实施）

**背景**：`/actual/joint_states_VLA` 与 `/joint_states_VLA` 名字太相近，难以区分用途。

**改名**：`/actual/joint_states_VLA` → `/actual/joint_states_rviz`

**涉及文件**：`vla_ros_bridge_node.py`（发布端，当前 publisher 话题名为 `/actual/joint_states_rviz`）、`trossen_follower_visualization.launch.py`（remapping 已对应更新）。`setup.json` 不涉及此话题。

### 可行优化：直接使用 /joint_states 供 RViz（未实施）

`_publish_actual_viz()` 对 `/joint_states` 做了两件事：①按 `_JOINT_NAMES_7` 重排关节顺序，②以节点时钟重新打时间戳，30 Hz 发布。`robot_state_publisher` 按名称而非顺序匹配关节，故重排无意义；若 `/joint_states` 时间戳本身有效，重新打戳也多余。

**若要实施**：将 launch 文件的 remapping 改为 `("joint_states", "/joint_states")`，删除 `self._actual_pub` 和 `_publish_actual_viz()` 中的 publish 调用。但 `_publish_actual_viz()` 本身仍需保留——它还负责计算并发布 EE 球形 marker（`actual/base_link` frame）。

**Why:** 暂未实施，等有机会验证 `/joint_states` 的时间戳质量后再决定。
