-- ============================================================
-- Task: pick ball (ball position is given as input)
-- ============================================================
require("context")
require("geometric")
require("math")
reqs = require("task_requirements")

-- Load robot model from config's default_robot_specification.
-- "tcp_frame" is the frame name set by the tcp_frame entry in the JSON config.
robot = reqs.robot_model({"tcp_frame"})
robot_joints = robot.robot_joints
tcp = robot.getFrame("tcp_frame")

-- Ball position inputs (published externally, default to a safe position)
ball_x = ctx:createInputChannelScalar("ball_x", 0.25)
ball_y = ctx:createInputChannelScalar("ball_y", 0.0)
ball_z = ctx:createInputChannelScalar("ball_z", 0.05)

-- Phase: 0 = approach (stop above ball), 1 = grasp (descend to ball)
phase = ctx:createInputChannelScalar("pick_phase", 0)

-- Approach offset: stop 10 cm above the ball during approach phase
approach_offset = constant(0.10)

-- Target position: when phase=0 hover above, when phase=1 go to ball
target_x = ball_x
target_y = ball_y
target_z = ball_z + approach_offset * (constant(1) - phase)

-- Current end-effector position and rotation
ee_pos = origin(tcp)
ee_rot = rotation(tcp)

-- Position constraints
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

-- Orientation constraint: keep end-effector pointing downward
-- rotate_x(-pi/2) is the desired orientation (gripper pointing down)
-- getRotVec returns a 3D vector, so we split into 3 scalar constraints
local ori_err = ee_rot * inv(rotate_x(-math.pi / 2))
Constraint{
    context  = ctx,
    name     = "ori_rx",
    expr     = coord_x(getRotVec(ori_err)),
    K        = 2.0,
    weight   = 0.5,
    priority = 2
}
Constraint{
    context  = ctx,
    name     = "ori_ry",
    expr     = coord_y(getRotVec(ori_err)),
    K        = 2.0,
    weight   = 0.5,
    priority = 2
}
Constraint{
    context  = ctx,
    name     = "ori_rz",
    expr     = coord_z(getRotVec(ori_err)),
    K        = 2.0,
    weight   = 0.5,
    priority = 2
}

-- Distance to target for monitoring
dist = norm(vector(
    coord_x(ee_pos) - target_x,
    coord_y(ee_pos) - target_y,
    coord_z(ee_pos) - target_z
))

-- Monitor: approach phase done (within 1.5 cm)
Monitor{
    context    = ctx,
    name       = "approach_done",
    expr       = dist,
    upper      = 0.015,
    actionname = "event",
    argument   = "e_approach_done"
}

-- Monitor: grasp phase done (within 0.8 cm)
Monitor{
    context    = ctx,
    name       = "grasp_done",
    expr       = dist,
    upper      = 0.008,
    actionname = "event",
    argument   = "e_grasp_done"
}

-- Expose distance for the TopicOutputHandler in config
ctx:setOutputExpression("dist_to_target", dist)

print("pick_ball task loaded")
