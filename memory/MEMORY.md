# Memory Index

- **维护规则**：以后新增或更新 Claude 本地记忆（`~/.claude/projects/-home-masterthesis-kaixi-crospi-ws/memory/`）时，必须同步更新本仓库的 `memory/` 目录，确保可提交到 GitHub 的版本保持最新。

- [VLA 共享控制系统架构](project_vla_shared_control_architecture.md) — 关键文件、UDP 协议、eTaSL 权重配置（已修复）、双进程桥接原因、两处 IP 连接、四层架构说明、四命令启动顺序
- [lerobot–CroSPI 集成决策与修复记录](project_crospi_lerobot_integration.md) — eTaSL weight bug 修复、CroSPIFollower 设计、架构选型理由、RViz 独立可视化分析、UDP 桥接的 Python ABI 不兼容根因（Humble=Py3.10 vs LeRobot=Py3.12）；旧名文件已删除，session 中出现旧名是缓存
- [bridge node FK 正向运动学分析结论](project_fk_analysis_verified.md) — FK 参数已验证正确；predicted_ee_marker 偏差是共享控制预期行为，非 Bug；改进方向
- [WidowX AI Follower 运动学链结构](project_urdf_kinematic_chain.md) — 完整关节链、EE 路径、gripper 分支、7-DOF 顺序
