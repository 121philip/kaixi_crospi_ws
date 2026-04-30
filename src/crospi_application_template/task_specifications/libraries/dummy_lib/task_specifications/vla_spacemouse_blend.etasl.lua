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
                .. "Alpha=0 → pure VLA, Alpha=1 → pure spacemouse. "
                .. "Alpha is provided by TopicInputHandler on /shared_control/alpha as alpha_input."

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
robot        = reqs.robot_model({param.get("task_frame")})
robot_joints = robot.robot_joints
task_frame   = robot.getFrame(param.get("task_frame"))


-- ========================================= Input channels ===================================
-- Spacemouse twist (Cartesian velocity)
joystick_input = ctx:createInputChannelTwist("joystick_input")

-- VLA joint targets (one scalar per joint, published via JointStateInputHandler)
target_joint_pos = {}
for i = 1, #robot_joints do
    target_joint_pos[i] = ctx:createInputChannelScalar("target_joint_" .. i)
end

-- Alpha: human authority factor in [0, 1].
--   alpha = 0  → pure VLA  (eTaSL tracks VLA joint targets, spacemouse ignored)
--   alpha = 1  → pure SpaceMouse (joint tracking ignored, spacemouse drives Cartesian)
-- Published by vla_ros_bridge_node.py -> /shared_control/alpha -> TopicInputHandler.
-- /shared_control/alpha carries the final alpha scalar, not raw C_VLA.
-- The second argument (0.5) is the default used before the first message arrives.

-- alpha = ctx:createInputChannelScalar("alpha_input", 0.5)
alpha = 0.5

-- Blending weights for WLN-QP: placed directly in Constraint{weight=...}.
-- The solver minimises sum_i(weight_i * expr_i^2), so weight = (1-α) / α gives linear blending.
-- No sqrt needed here (sqrt was only required when weights lived inside expr).
local eps     = constant(1e-6)
-- local w_vla   = constant(1.0) - alpha + eps   -- (1-α): VLA effective weight
local w_vla   = 1   -- (1-α): VLA effective weight
local w_human = 0                 -- α:     human effective weight
-- local w_human = alpha + eps                   -- α:     human effective weight


-- ========================================= Current joint expressions ===================================
joint_expressions = {}
for i = 1, #robot_joints do
    joint_expressions[i] = ctx:getScalarExpr(robot_joints[i])
end

if #robot_joints ~= #target_joint_pos then
    error("Number of target joints (" .. tostring(#target_joint_pos) ..
          ") must equal robot joints (" .. tostring(#robot_joints) .. ")")
end


-- ========================================= VLA joint-tracking constraints ===================================
-- Effective weight = (1-α).  When α=0: full VLA.  When α=1: weight→0, constraint inactive.
tracking_error = {}
for i = 1, #robot_joints do
    local err = joint_expressions[i] - target_joint_pos[i]
    Constraint{
        context  = ctx,
        name     = "vla_joint_" .. robot_joints[i],
        expr     = err,
        priority = 2,
        weight   = w_vla,
        K        = 2
    }
    tracking_error[i] = err   -- raw (unscaled) for output monitoring
end


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
