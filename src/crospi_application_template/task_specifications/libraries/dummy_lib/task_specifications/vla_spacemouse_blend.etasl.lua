--  Copyright (c) 2025 KU Leuven, Belgium
--
--  Author: Santiago Iregui
--  email: <santiago.iregui@kuleuven.be>
--
--  GNU Lesser General Public License Usage
--  This file may be used under the terms of the GNU Lesser General Public
--  License version 3.

require("context")
require("geometric")
require("math")
reqs = require("task_requirements")


-- ========================================= PARAMETERS ===================================
task_description = "Shared control: blends spacemouse Cartesian velocity with VLA joint targets. "
                .. "Defaults preserve the previous log-only behavior before live weights arrive. "
                .. "Runtime weights w_vla, w_human, and w_gripper are provided on /shared_control/weights."

param = reqs.parameters(task_description, {
    reqs.params.scalar({name="linear_scale",   description="Scales linear velocity from spacemouse",  default=0.3, required=false}),
    reqs.params.scalar({name="angular_scale",  description="Scales angular velocity from spacemouse", default=0.3, required=false}),
    reqs.params.string({name="task_frame",     description="Frame for Cartesian spacemouse control",  default="tcp_frame", required=false}),
    reqs.params.bool(  {name="activate_linear",  description="Enable linear velocity from spacemouse",  default=true,  required=true}),
    reqs.params.bool(  {name="activate_angular", description="Enable angular velocity from spacemouse", default=false, required=true}),
    reqs.params.scalar({name="execution_time", description="Task duration in seconds (0 = infinite)", default=0, required=false, minimum=0}),
})

linear_scale   = constant(param.get("linear_scale"))
angular_scale  = constant(param.get("angular_scale"))
execution_time = param.get("execution_time")


-- ======================================== Robot model ========================================
robot        = reqs.robot_model({param.get("task_frame"), "gripper_frame"})
robot_joints = robot.robot_joints
task_frame   = robot.getFrame(param.get("task_frame"))
gripper_F = robot.getFrame("gripper_frame")

print("+++++++++++++++++++++ helloooooooooo 1")
-- ========================================= Input channels ===================================
-- Spacemouse twist (Cartesian velocity)
joystick_input = ctx:createInputChannelTwist("joystick_input")

print("+++++++++++++++++++++ helloooooooooo 2")
-- VLA joint targets (one scalar per joint, published via JointStateInputHandler)
target_joint_pos = {}
for i = 1, #robot_joints do
    target_joint_pos[i] = ctx:createInputChannelScalar("target_joint_" .. i)
end

print("+++++++++++++++++++++ helloooooooooo 3")
-- Future VLA end-effector pose target.
-- vla_ros_bridge_node.py can compute FK from the incoming VLA joint state and
-- publish geometry_msgs/msg/Pose on /pose_VLA:
--   position    = [x, y, z]
--   orientation = [qx, qy, qz, qw]
-- A PoseInputHandler should expose that topic as a frame input channel named
-- "pose_VLA". Keep this disabled for now; the active implementation below
-- still tracks /joint_states_VLA.
--
-- pose_VLA = ctx:createInputChannelFrame("pose_VLA")

-- Runtime weights.  The bridge publishes /shared_control/weights as
-- CrospiInput(names=["w_vla", "w_human", "w_gripper"], data=[...]).
-- Defaults preserve the previous hard-coded test weights until live values arrive.

-- Blending weights for WLN-QP: placed directly in Constraint{weight=...}.
-- The solver minimises sum_i(weight_i * expr_i^2). Sentinel writes these
-- weights directly instead of routing through alpha.
local w_vla   = ctx:createInputChannelScalar("w_vla", 1.0)
local w_human = ctx:createInputChannelScalar("w_human", 0.0)
local w_gripper = ctx:createInputChannelScalar("w_gripper", 1.0)


-- ========================================= Current joint expressions ===================================
joint_expressions = {}
for i = 1, #robot_joints do
    joint_expressions[i] = ctx:getScalarExpr(robot_joints[i])
end

if #robot_joints ~= #target_joint_pos then
    error("Number of target joints (" .. tostring(#target_joint_pos) ..
          ") must equal robot joints (" .. tostring(#robot_joints) .. ")")
end

print("+++++++++++++++++++++ helloooooooooo 4")
-- ========================================= VLA joint-tracking constraints ===================================
tracking_error = {}

k_joint = {0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 2}

for i = 1, #robot_joints do
    local err = joint_expressions[i] - target_joint_pos[i]
    local joint_weight = w_vla
    if i == #robot_joints then
        joint_weight = w_gripper
    end
    Constraint{
        context  = ctx,
        name     = "vla_joint_" .. robot_joints[i],
        expr     = err,
        K        = k_joint[i],
        weight   = joint_weight,
        priority = 2
    }
    tracking_error[i] = err   -- raw (unscaled) for output monitoring
end

-- ========================================= Future VLA Cartesian pose-tracking constraints ===================================
-- Use this block after enabling /pose_VLA in vla_ros_bridge_node.py and adding
-- a PoseInputHandler in trossen_vla_shared_control.setup.json.
--
-- Constraint{
--     context  = ctx,
--     name     = "vla_pose_translation",
--     expr     = origin(task_frame) - origin(pose_VLA),
--     K        = 1,
--     weight   = w_vla,
--     priority = 2
-- }
--
-- Constraint{
--     context  = ctx,
--     name     = "vla_pose_orientation",
--     expr     = inv(rotation(pose_VLA)) * rotation(task_frame),
--     K        = 1,
--     weight   = w_vla,
--     priority = 2
-- }


-- =============================== Cartesian frame ==============================
tf_inst = task_frame


-- ========================================= SpaceMouse Cartesian velocity constraints ===================================
-- Effective weight = α.  When α=1: full spacemouse.  When α=0: weight→0, constraint inactive.
if param.get("activate_linear") then

    desired_vel_x = coord_x(transvel(joystick_input)) * linear_scale
    desired_vel_y = coord_y(transvel(joystick_input)) * linear_scale
    desired_vel_z = coord_z(transvel(joystick_input)) * linear_scale

    Constraint{
        context  = ctx,
        name     = "x_velocity",
        expr     = coord_x(origin(tf_inst)) - desired_vel_x * time,
        K        = 0,
        weight   = w_human,
        priority = 2
    }
    Constraint{
        context  = ctx,
        name     = "y_velocity",
        expr     = coord_y(origin(tf_inst)) - desired_vel_y * time,
        K        = 0,
        weight   = w_human,
        priority = 2
    }
    Constraint{
        context  = ctx,
        name     = "z_velocity",
        expr     = coord_z(origin(tf_inst)) - desired_vel_z * time,
        K        = 0,
        weight   = w_human,
        priority = 2
    }
else
    -- When linear is disabled AND alpha→1, keep translation fixed.
    Constraint{
        context  = ctx,
        name     = "keep_translation_constant",
        expr     = origin(tf_inst),
        target   = initial_value(time, origin(tf_inst)),
        K        = 4,
        weight   = 1,
        priority = 2
    }
end

if param.get("activate_angular") then

    desired_omega_x = coord_x(rotvel(joystick_input)) * angular_scale
    desired_omega_y = coord_y(rotvel(joystick_input)) * angular_scale
    desired_omega_z = coord_z(rotvel(joystick_input)) * angular_scale

    Constraint{
        context  = ctx,
        name     = "x_angular",
        expr     = coord_x(getRotVec(rotation(tf_inst))) - desired_omega_x * time,
        K        = 0,
        weight   = w_human,
        priority = 2
    }
    Constraint{
        context  = ctx,
        name     = "y_angular",
        expr     = coord_y(getRotVec(rotation(tf_inst))) - desired_omega_y * time,
        K        = 0,
        weight   = w_human,
        priority = 2
    }
    Constraint{
        context  = ctx,
        name     = "z_angular",
        expr     = coord_z(getRotVec(rotation(tf_inst))) - desired_omega_z * time,
        K        = 0,
        weight   = w_human,
        priority = 2
    }
else
    Constraint{
        context  = ctx,
        name     = "keep_rotation_constant",
        expr     = rotation(tf_inst) * initial_value(time, rotation(tf_inst)),
        K        = 4,
        weight   = 1,
        priority = 2
    }
end


-- ======================================== Output expressions ========================================
quat_tf = toQuat(rotation(task_frame))
ctx:setOutputExpression("time",   time)
ctx:setOutputExpression("w_vla_runtime",   w_vla)
ctx:setOutputExpression("w_human_runtime", w_human)
ctx:setOutputExpression("w_gripper_runtime", w_gripper)
ctx:setOutputExpression("x_tf",   coord_x(origin(task_frame)))
ctx:setOutputExpression("y_tf",   coord_y(origin(task_frame)))
ctx:setOutputExpression("z_tf",   coord_z(origin(task_frame)))
ctx:setOutputExpression("qx_tf",  coord_x(vec(quat_tf)))
ctx:setOutputExpression("qy_tf",  coord_y(vec(quat_tf)))
ctx:setOutputExpression("qz_tf",  coord_z(vec(quat_tf)))
ctx:setOutputExpression("qw_tf",  w(quat_tf))

for i = 1, #robot_joints do
    ctx:setOutputExpression("jpos" .. i, ctx:getScalarExpr(robot_joints[i]))
end

-- Tracking errors use raw (unscaled) expressions so values are physically meaningful.
for i = 1, #robot_joints do
    ctx:setOutputExpression("tracking_error_" .. robot_joints[i], tracking_error[i])
end


-- ======================================== Execution timer ========================================
if execution_time > 0 then
    Monitor{
        context    = ctx,
        name       = "finish_after_execution_time",
        upper      = 0.0,
        actionname = "exit",
        expr       = time - constant(execution_time)
    }
end
