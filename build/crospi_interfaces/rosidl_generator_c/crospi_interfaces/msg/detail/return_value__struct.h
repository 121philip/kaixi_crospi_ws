// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crospi_interfaces:msg/ReturnValue.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__RETURN_VALUE__STRUCT_H_
#define CROSPI_INTERFACES__MSG__DETAIL__RETURN_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  crospi_interfaces__msg__ReturnValue__SUCCESS = 0ul
};

/// Constant 'SYNTAX_ERROR'.
/**
  * LoadTask errors
 */
enum
{
  crospi_interfaces__msg__ReturnValue__SYNTAX_ERROR = 1ul
};

/// Constant 'FEATUREVAR_DID_NOT_CONVERGE'.
/**
  * InitializeTask errors:
 */
enum
{
  crospi_interfaces__msg__ReturnValue__FEATUREVAR_DID_NOT_CONVERGE = 1000ul
};

/// Constant 'SOLVER_DID_NOT_CONVERGE'.
/**
  * RunTask errors:
 */
enum
{
  crospi_interfaces__msg__ReturnValue__SOLVER_DID_NOT_CONVERGE = 2000ul
};

/// Constant 'CANCELLED'.
enum
{
  crospi_interfaces__msg__ReturnValue__CANCELLED = 2ul
};

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ReturnValue in the package crospi_interfaces.
/**
  * error messages returned by eTaSL
 */
typedef struct crospi_interfaces__msg__ReturnValue
{
  /// error code returned
  uint32_t errorcode;
  /// string given additional description of the error
  rosidl_runtime_c__String description;
} crospi_interfaces__msg__ReturnValue;

// Struct for a sequence of crospi_interfaces__msg__ReturnValue.
typedef struct crospi_interfaces__msg__ReturnValue__Sequence
{
  crospi_interfaces__msg__ReturnValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__msg__ReturnValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__MSG__DETAIL__RETURN_VALUE__STRUCT_H_
