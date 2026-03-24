// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crospi_interfaces:msg/PoseParameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__POSE_PARAMETERS__STRUCT_H_
#define CROSPI_INTERFACES__MSG__DETAIL__POSE_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/transform__struct.h"

/// Struct defined in msg/PoseParameters in the package crospi_interfaces.
typedef struct crospi_interfaces__msg__PoseParameters
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Transform poses;
} crospi_interfaces__msg__PoseParameters;

// Struct for a sequence of crospi_interfaces__msg__PoseParameters.
typedef struct crospi_interfaces__msg__PoseParameters__Sequence
{
  crospi_interfaces__msg__PoseParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__msg__PoseParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__MSG__DETAIL__POSE_PARAMETERS__STRUCT_H_
