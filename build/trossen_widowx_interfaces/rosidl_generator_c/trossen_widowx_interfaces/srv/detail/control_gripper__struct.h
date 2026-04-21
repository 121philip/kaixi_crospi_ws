// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trossen_widowx_interfaces:srv/ControlGripper.idl
// generated code does not contain a copyright notice

#ifndef TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__CONTROL_GRIPPER__STRUCT_H_
#define TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__CONTROL_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ControlGripper in the package trossen_widowx_interfaces.
typedef struct trossen_widowx_interfaces__srv__ControlGripper_Request
{
  double position;
  double time;
} trossen_widowx_interfaces__srv__ControlGripper_Request;

// Struct for a sequence of trossen_widowx_interfaces__srv__ControlGripper_Request.
typedef struct trossen_widowx_interfaces__srv__ControlGripper_Request__Sequence
{
  trossen_widowx_interfaces__srv__ControlGripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trossen_widowx_interfaces__srv__ControlGripper_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ControlGripper in the package trossen_widowx_interfaces.
typedef struct trossen_widowx_interfaces__srv__ControlGripper_Response
{
  bool success;
} trossen_widowx_interfaces__srv__ControlGripper_Response;

// Struct for a sequence of trossen_widowx_interfaces__srv__ControlGripper_Response.
typedef struct trossen_widowx_interfaces__srv__ControlGripper_Response__Sequence
{
  trossen_widowx_interfaces__srv__ControlGripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trossen_widowx_interfaces__srv__ControlGripper_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__CONTROL_GRIPPER__STRUCT_H_
