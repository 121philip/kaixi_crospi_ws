-- ============================================================
-- Task: pick_ball (assume the ball is already detected and its position is given)
-- ============================================================
require("context")
require("geometric")

-- ── 1. 从 URDF 建立运动学模型 ──────────────────────────────
local u = UrdfExpr()
u:readFromFile(
    rospack_find("trossen_arm_description") ..
    "/urdf/wxai.urdf.xacro"
)
u:addTransform("T_world_ee", "gripper_link", "world")
u:addTransform("T_world_wrist", "wrist_link", "world")
local r = u:getExpressions(ctx)

T_world_ee = r.T_world_ee
T_world_wrist = r.T_world_wrist
ee_pos = origin(T_world_ee)

-- ── 2. 读取外部输入：球的位置（来自 ROS2 话题）──────────────
ball_x = ctx:createInputChannelScalar("ball_x", 0.25)
ball_y = ctx:createInputChannelScalar("ball_y", 0.0)
ball_z = ctx:createInputChannelScalar("ball_z", 0.05)

-- approach offset: 在球的基础上向上偏移 10cm，避免直接碰撞
approach_offset = 0.10 -- 米

-- ── 3. phase parameter (external control) ──────────────
-- 0 = approaching, 1 = grasping
phase = ctx:createInputChannelScalar("pick_phase", 0)

-- ── calculation of the goal position ──────────────
-- 目标位置：球的 x,y，z 在球上方 10cm
target_x = ball_x
target_y = ball_y
target_z = ball_z + approach_offset * (constant(1) - phase) + ball_z * phase
-- simply: when phase=0, target_z = ball_z + 0.10; when phase=1, target_z = ball_z

-- ── 4. position constraints ────────────────────────────
Constraint{
    context  = ctx,
    name     = "pos_x",
    expr     = coord_x(ee_pos) - target_x,
    K        = 3.0,
    weight   = 1.0,
    priority = 2
}

Constraint{
    context  = ctx,
    name     = "pos_y",
    expr     = coord_y(ee_pos) - target_y,
    K        = 3.0,
    weight   = 1.0,
    priority = 2
}

Constraint{
    context  = ctx,
    name     = "pos_z",
    expr     = coord_z(ee_pos) - target_z,
    K        = 3.0,
    weight   = 1.0,
    priority = 2
}

-- ── 5. 姿态约束：保持末端朝下 ────────────────────────────────────
-- 提取末端 z 轴方向（在世界坐标系中）
ee_rot    = rotation(T_world_ee)
-- ee_z_axis 应该朝向世界 -z 方向（向下抓）
-- 用旋转向量约束（getRotVec 返回旋转轴×角度）
-- 目标：ee 的 z 轴与世界 -z 对齐
-- 这里用近似：约束 ee 的 y 轴接近水平
Constraint{
    context  = ctx,
    name     = "orientation_z",
    expr     = getRotVec(ee_rot * inv(rotate_x(-3.14159/2))),
    -- 目标末端朝向：绕X轴转-90度（具体值需根据URDF调整）
    K        = 2.0,
    weight   = 0.5,   -- 姿态权重低于位置，允许一定偏差
    priority = 2
}

-- ── 6. 监视器：检测是否到达目标 ──────────────────────────────
dist = vector_norm(
    construct_vector(
        coord_x(ee_pos) - target_x,
        coord_y(ee_pos) - target_y,
        coord_z(ee_pos) - target_z
    )
)

Monitor{
    context = ctx,
    name = "approach_done",
    expr = dist,
    upper = 0.015,  -- 当末端距离目标小于1.5cm时认为到达
    actionname = "event",
    argument = "e_approach_done"
}

Monitor{
    context = ctx,
    name = "grasp_done",
    expr = dist,
    upper = 0.008,  -- 当末端距离目标小于0.8cm时认为抓取完成
    actionname = "event",
    argument = "e_grasp_done"
}

print("pick_ball task initialized")