// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crospi_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__INPUT__STRUCT_H_
#define CROSPI_INTERFACES__MSG__DETAIL__INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Input in the package crospi_interfaces.
/**
  * describes the input from eTaSL
 */
typedef struct crospi_interfaces__msg__Input
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__double__Sequence data;
} crospi_interfaces__msg__Input;

// Struct for a sequence of crospi_interfaces__msg__Input.
typedef struct crospi_interfaces__msg__Input__Sequence
{
  crospi_interfaces__msg__Input * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__msg__Input__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__MSG__DETAIL__INPUT__STRUCT_H_
