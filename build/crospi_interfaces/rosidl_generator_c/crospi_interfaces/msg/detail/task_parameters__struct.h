// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crospi_interfaces:msg/TaskParameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__STRUCT_H_
#define CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'numbers'
#include "crospi_interfaces/msg/detail/number_parameters__struct.h"
// Member 'poses'
#include "crospi_interfaces/msg/detail/pose_parameters__struct.h"
// Member 'vector3s'
#include "crospi_interfaces/msg/detail/vector3_parameters__struct.h"

/// Struct defined in msg/TaskParameters in the package crospi_interfaces.
/**
  * This describes parameters of an eTaSL task
  * the parameters are an unordered set.
  * we store them type-by-type
 */
typedef struct crospi_interfaces__msg__TaskParameters
{
  crospi_interfaces__msg__NumberParameters__Sequence numbers;
  crospi_interfaces__msg__PoseParameters__Sequence poses;
  crospi_interfaces__msg__Vector3Parameters__Sequence vector3s;
} crospi_interfaces__msg__TaskParameters;

// Struct for a sequence of crospi_interfaces__msg__TaskParameters.
typedef struct crospi_interfaces__msg__TaskParameters__Sequence
{
  crospi_interfaces__msg__TaskParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__msg__TaskParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__STRUCT_H_
