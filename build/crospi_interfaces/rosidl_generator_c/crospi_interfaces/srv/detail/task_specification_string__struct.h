// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crospi_interfaces:srv/TaskSpecificationString.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_STRING__STRUCT_H_
#define CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'str'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TaskSpecificationString in the package crospi_interfaces.
typedef struct crospi_interfaces__srv__TaskSpecificationString_Request
{
  rosidl_runtime_c__String str;
} crospi_interfaces__srv__TaskSpecificationString_Request;

// Struct for a sequence of crospi_interfaces__srv__TaskSpecificationString_Request.
typedef struct crospi_interfaces__srv__TaskSpecificationString_Request__Sequence
{
  crospi_interfaces__srv__TaskSpecificationString_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__srv__TaskSpecificationString_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TaskSpecificationString in the package crospi_interfaces.
typedef struct crospi_interfaces__srv__TaskSpecificationString_Response
{
  bool success;
} crospi_interfaces__srv__TaskSpecificationString_Response;

// Struct for a sequence of crospi_interfaces__srv__TaskSpecificationString_Response.
typedef struct crospi_interfaces__srv__TaskSpecificationString_Response__Sequence
{
  crospi_interfaces__srv__TaskSpecificationString_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__srv__TaskSpecificationString_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_STRING__STRUCT_H_
