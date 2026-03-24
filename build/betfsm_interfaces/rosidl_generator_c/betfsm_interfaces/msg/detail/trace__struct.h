// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from betfsm_interfaces:msg/Trace.idl
// generated code does not contain a copyright notice

#ifndef BETFSM_INTERFACES__MSG__DETAIL__TRACE__STRUCT_H_
#define BETFSM_INTERFACES__MSG__DETAIL__TRACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'active_states'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Trace in the package betfsm_interfaces.
typedef struct betfsm_interfaces__msg__Trace
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String__Sequence active_states;
} betfsm_interfaces__msg__Trace;

// Struct for a sequence of betfsm_interfaces__msg__Trace.
typedef struct betfsm_interfaces__msg__Trace__Sequence
{
  betfsm_interfaces__msg__Trace * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} betfsm_interfaces__msg__Trace__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BETFSM_INTERFACES__MSG__DETAIL__TRACE__STRUCT_H_
