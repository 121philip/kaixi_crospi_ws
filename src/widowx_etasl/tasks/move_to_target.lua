-- ============================================================
-- 任务：将 WidowX AI 末端移动到指定目标位置
-- ============================================================

require("context")   -- 必须：加载 eTaSL 上下文
require("geometric") -- 必须：加载几何工具（translate_x 等函数）

-- ── 1. 从 URDF 建立运动学模型 ──────────────────────────────
local u = UrdfExpr()
-- 注意：这里用 rospack_find 自动找到 URDF 文件路径
u:readFromFile(
    rospack_find("trossen_arm_description") ..
    "/urdf/wxai.urdf.xacro"
)

-- 注册需要的坐标系：末端执行器相对于世界坐标系
u:addTransform("T_world_ee", "gripper_link", "world")

-- 获取所有表达式（此后 r.T_world_ee 就是末端位姿，依赖关节变量）
local r = u:getExpressions(ctx)
T_world_ee = r.T_world_ee


-- ── 2. 读取外部输入：目标位置（来自 ROS2 话题）──────────────
-- 这三个输入从 ROS2 topic 订阅，单位：米
target_x = ctx:createInputChannelScalar("target_x", 0.3)
target_y = ctx:createInputChannelScalar("target_y", 0.0)
target_z = ctx:createInputChannelScalar("target_z", 0.2)


-- ── 3. 计算末端当前位置 ──────────────────────────────────────
ee_pos = origin(T_world_ee)   -- 从 4×4 变换矩阵提取 xyz 位置


-- ── 4. 定义约束：末端位置逼近目标 ────────────────────────────

-- X 轴位置约束
Constraint{
    context  = ctx,
    name     = "pos_x",
    expr     = coord_x(ee_pos) - target_x,  -- 当前x - 目标x → 0
    K        = 3.0,   -- 时间常数 τ=1/3 ≈ 0.33秒
    weight   = 1.0,
    priority = 2
}

-- Y 轴位置约束
Constraint{
    context  = ctx,
    name     = "pos_y",
    expr     = coord_y(ee_pos) - target_y,
    K        = 3.0,
    weight   = 1.0,
    priority = 2
}

-- Z 轴位置约束（高度）
Constraint{
    context  = ctx,
    name     = "pos_z",
    expr     = coord_z(ee_pos) - target_z,
    K        = 3.0,
    weight   = 1.0,
    priority = 2
}


-- ── 5. 安全约束：关节速度限制（可选但强烈推荐）────────────────
-- 通过正则化参数实现，在 config JSON 中设置
-- 也可以用 priority=0 的硬约束：
-- Constraint{context=ctx, name="jnt_vel_limit", ...}


-- ── 6. 监视器：检测是否到达目标 ──────────────────────────────
-- 计算末端到目标的欧几里得距离
dist_to_target = vector_norm(
    construct_vector(
        coord_x(ee_pos) - target_x,
        coord_y(ee_pos) - target_y,
        coord_z(ee_pos) - target_z
    )
)

Monitor{
    context    = ctx,
    name       = "goal_reached",
    expr       = dist_to_target,
    upper      = 0.01,            -- 距离 < 1cm 时触发
    actionname = "event",
    argument   = "e_goal_reached" -- 发出事件，供状态机使用
}

-- 打印调试信息（启动时）
print("任务加载完成: move_to_target")
print(ctx)  -- 打印所有变量和约束摘要