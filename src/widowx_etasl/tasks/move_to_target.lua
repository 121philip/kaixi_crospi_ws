-- ============================================================
-- Task: move end-effector to a target position
-- ============================================================
require("context")
require("geometric")
reqs = require("task_requirements")

-- Load robot model from config's default_robot_specification.
-- "tcp_frame" is the frame name set by the tcp_frame entry in the JSON config.
robot = reqs.robot_model({"tcp_frame"})
robot_joints = robot.robot_joints
tcp = robot.getFrame("tcp_frame")

-- Target position from the TwistInputHandler (varname "target" in config).
-- linear.x/y/z of the twist message are used as target x/y/z position.
target_input = ctx:createInputChannelTwist("target")
target_x = coord_x(transvel(target_input))
target_y = coord_y(transvel(target_input))
target_z = coord_z(transvel(target_input))

-- Current end-effector position
ee_pos = origin(tcp)

-- Position constraints: drive each axis to the target
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

-- Monitor: fire event when end-effector is within 1 cm of target
dist_to_target = norm(vector(
    coord_x(ee_pos) - target_x,
    coord_y(ee_pos) - target_y,
    coord_z(ee_pos) - target_z
))

Monitor{
    context    = ctx,
    name       = "goal_reached",
    expr       = dist_to_target,
    upper      = 0.01,
    actionname = "event",
    argument   = "e_goal_reached"
}

-- Expose distance for the TopicOutputHandler in config
ctx:setOutputExpression("dist_to_target", dist_to_target)

print("move_to_target task loaded")
