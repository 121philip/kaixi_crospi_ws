// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from crospi_interfaces:msg/Vector3Parameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__FUNCTIONS_H_
#define CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "crospi_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "crospi_interfaces/msg/detail/vector3_parameters__struct.h"

/// Initialize msg/Vector3Parameters message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crospi_interfaces__msg__Vector3Parameters
 * )) before or use
 * crospi_interfaces__msg__Vector3Parameters__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__msg__Vector3Parameters__init(crospi_interfaces__msg__Vector3Parameters * msg);

/// Finalize msg/Vector3Parameters message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__msg__Vector3Parameters__fini(crospi_interfaces__msg__Vector3Parameters * msg);

/// Create msg/Vector3Parameters message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crospi_interfaces__msg__Vector3Parameters__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__msg__Vector3Parameters *
crospi_interfaces__msg__Vector3Parameters__create();

/// Destroy msg/Vector3Parameters message.
/**
 * It calls
 * crospi_interfaces__msg__Vector3Parameters__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__msg__Vector3Parameters__destroy(crospi_interfaces__msg__Vector3Parameters * msg);

/// Check for msg/Vector3Parameters message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__msg__Vector3Parameters__are_equal(const crospi_interfaces__msg__Vector3Parameters * lhs, const crospi_interfaces__msg__Vector3Parameters * rhs);

/// Copy a msg/Vector3Parameters message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__msg__Vector3Parameters__copy(
  const crospi_interfaces__msg__Vector3Parameters * input,
  crospi_interfaces__msg__Vector3Parameters * output);

/// Initialize array of msg/Vector3Parameters messages.
/**
 * It allocates the memory for the number of elements and calls
 * crospi_interfaces__msg__Vector3Parameters__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__msg__Vector3Parameters__Sequence__init(crospi_interfaces__msg__Vector3Parameters__Sequence * array, size_t size);

/// Finalize array of msg/Vector3Parameters messages.
/**
 * It calls
 * crospi_interfaces__msg__Vector3Parameters__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__msg__Vector3Parameters__Sequence__fini(crospi_interfaces__msg__Vector3Parameters__Sequence * array);

/// Create array of msg/Vector3Parameters messages.
/**
 * It allocates the memory for the array and calls
 * crospi_interfaces__msg__Vector3Parameters__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__msg__Vector3Parameters__Sequence *
crospi_interfaces__msg__Vector3Parameters__Sequence__create(size_t size);

/// Destroy array of msg/Vector3Parameters messages.
/**
 * It calls
 * crospi_interfaces__msg__Vector3Parameters__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__msg__Vector3Parameters__Sequence__destroy(crospi_interfaces__msg__Vector3Parameters__Sequence * array);

/// Check for msg/Vector3Parameters message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__msg__Vector3Parameters__Sequence__are_equal(const crospi_interfaces__msg__Vector3Parameters__Sequence * lhs, const crospi_interfaces__msg__Vector3Parameters__Sequence * rhs);

/// Copy an array of msg/Vector3Parameters messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__msg__Vector3Parameters__Sequence__copy(
  const crospi_interfaces__msg__Vector3Parameters__Sequence * input,
  crospi_interfaces__msg__Vector3Parameters__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__FUNCTIONS_H_
