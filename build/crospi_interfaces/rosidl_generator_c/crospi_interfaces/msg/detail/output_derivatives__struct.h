// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crospi_interfaces:msg/OutputDerivatives.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__OUTPUT_DERIVATIVES__STRUCT_H_
#define CROSPI_INTERFACES__MSG__DETAIL__OUTPUT_DERIVATIVES__STRUCT_H_

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
// Member 'is_declared'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/OutputDerivatives in the package crospi_interfaces.
/**
  * describes the output derivatives (i.e. time derivatives of variables/expressions) from eTaSL
 */
typedef struct crospi_interfaces__msg__OutputDerivatives
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__double__Sequence data;
  /// The following can be used to check if the variable was declared as an output expression in the task specification. If not is_declared=false and the corresponding data is set to zero.
  rosidl_runtime_c__boolean__Sequence is_declared;
} crospi_interfaces__msg__OutputDerivatives;

// Struct for a sequence of crospi_interfaces__msg__OutputDerivatives.
typedef struct crospi_interfaces__msg__OutputDerivatives__Sequence
{
  crospi_interfaces__msg__OutputDerivatives * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__msg__OutputDerivatives__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__MSG__DETAIL__OUTPUT_DERIVATIVES__STRUCT_H_
