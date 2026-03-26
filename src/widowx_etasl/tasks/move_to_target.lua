-- ============================================================
-- Task: move end-effector to a target position
-- 任务：将机械臂末端执行器（end-effector）移动到目标位置
-- ============================================================

-- 引入 eTaSL 框架所需的模块：
--   context  : 提供全局上下文对象 ctx，所有约束/监控器都注册到此
--   geometric : 提供几何运算函数（origin、coord_x/y/z、norm、vector 等）
require("context")
require("geometric")
-- task_requirements 是项目自定义模块，封装了加载机器人模型的公共逻辑
reqs = require("task_requirements")

-- ============================================================
-- 1. 加载机器人模型
-- ============================================================
-- robot_model({"tcp_frame"}) 从 JSON 配置文件中读取机器人 URDF，
-- 并将名为 "tcp_frame" 的坐标系（Tool Center Point，工具中心点）注册进来。
-- robot_joints : 机器人所有关节变量的集合（eTaSL 内部用于生成雅可比矩阵）
-- tcp          : tcp_frame 对应的变换矩阵（Frame 对象），随关节角度实时更新
robot = reqs.robot_model({"tcp_frame"})
robot_joints = robot.robot_joints
tcp = robot.getFrame("tcp_frame")

-- ============================================================
-- 2. 读取目标位置（来自 ROS 话题输入）
-- ============================================================
-- createInputChannelTwist("target") 订阅配置文件中 varname="target" 的
-- TwistInputHandler，即一个 geometry_msgs/Twist 消息。
-- 此处只用其线速度部分（linear.x/y/z）来表示目标的三维坐标。
target_input = ctx:createInputChannelTwist("target")
-- transvel() 取 Twist 的线速度分量，coord_x/y/z 再分别提取 x、y、z 值
target_x = coord_x(transvel(target_input))
target_y = coord_y(transvel(target_input))
target_z = coord_z(transvel(target_input))

-- ============================================================
-- 3. 获取末端执行器当前位置
-- ============================================================
-- origin(tcp) 从 tcp 坐标系的变换矩阵中提取平移部分，得到一个三维点（Point）
ee_pos = origin(tcp)

-- ============================================================
-- 4. 位置约束（Position Constraints）
-- ============================================================
-- eTaSL 通过最小化约束表达式来求解关节速度指令。
-- 每个 Constraint 定义一个标量误差，控制器驱动该误差趋向 0。
--
-- 参数说明：
--   expr     : 误差表达式，此处为"当前坐标 - 目标坐标"，目标是让它等于 0
--   K        : 比例增益（类似 PD 控制中的 Kp），值越大收敛越快但可能不稳定
--   weight   : 该约束在同优先级内的权重，用于加权最小二乘
--   priority : 优先级，数字越小优先级越高（1 最高）；相同优先级的约束同时求解

-- X 轴：末端 x 坐标跟踪目标 x
Constraint {
    context = ctx,
    name = "pos_x",
    expr = coord_x(ee_pos) - target_x,  -- 误差 = 当前x - 目标x
    K = 3.0,
    weight = 1.0,
    priority = 2
}
-- Y 轴：末端 y 坐标跟踪目标 y
Constraint {
    context = ctx,
    name = "pos_y",
    expr = coord_y(ee_pos) - target_y,  -- 误差 = 当前y - 目标y
    K = 3.0,
    weight = 1.0,
    priority = 2
}
-- Z 轴：末端 z 坐标跟踪目标 z
Constraint {
    context = ctx,
    name = "pos_z",
    expr = coord_z(ee_pos) - target_z,  -- 误差 = 当前z - 目标z
    K = 3.0,
    weight = 1.0,
    priority = 2
}

-- ============================================================
-- 5. 到达检测监控器（Monitor）
-- ============================================================
-- 计算末端到目标的欧氏距离（3D 范数）
dist_to_target = norm(vector(
    coord_x(ee_pos) - target_x,
    coord_y(ee_pos) - target_y,
    coord_z(ee_pos) - target_z
))

-- Monitor 持续监测 expr 的值：
--   upper = 0.01 表示当 dist_to_target < 0.01 m（即 1 cm）时触发
--   触发后发出名为 "e_goal_reached" 的事件，
--   上层状态机（etasl_driver）可据此切换到下一个任务
Monitor {
    context = ctx,
    name = "goal_reached",
    expr = dist_to_target,
    upper = 0.01,           -- 到达阈值：1 cm
    actionname = "event",   -- 触发动作类型：发布事件
    argument = "e_goal_reached"  -- 事件名称，供外部逻辑监听
}

-- ============================================================
-- 6. 输出距离值（供 ROS 话题发布）
-- ============================================================
-- 将 dist_to_target 表达式注册为输出通道，
-- 配置文件中的 TopicOutputHandler 会将其实时发布为 ROS 话题，
-- 方便外部节点监控当前距离。
ctx:setOutputExpression("dist_to_target", dist_to_target)

print("move_to_target task loaded")
