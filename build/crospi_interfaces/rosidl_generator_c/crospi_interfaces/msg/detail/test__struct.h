// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crospi_interfaces:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__TEST__STRUCT_H_
#define CROSPI_INTERFACES__MSG__DETAIL__TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Test in the package crospi_interfaces.
typedef struct crospi_interfaces__msg__Test
{
  bool a;
} crospi_interfaces__msg__Test;

// Struct for a sequence of crospi_interfaces__msg__Test.
typedef struct crospi_interfaces__msg__Test__Sequence
{
  crospi_interfaces__msg__Test * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__msg__Test__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__MSG__DETAIL__TEST__STRUCT_H_
