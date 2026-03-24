// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crospi_interfaces:msg/Vector3Parameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__STRUCT_H_
#define CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__STRUCT_H_

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
// Member 'value'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Vector3Parameters in the package crospi_interfaces.
typedef struct crospi_interfaces__msg__Vector3Parameters
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Vector3 value;
} crospi_interfaces__msg__Vector3Parameters;

// Struct for a sequence of crospi_interfaces__msg__Vector3Parameters.
typedef struct crospi_interfaces__msg__Vector3Parameters__Sequence
{
  crospi_interfaces__msg__Vector3Parameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__msg__Vector3Parameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__STRUCT_H_
