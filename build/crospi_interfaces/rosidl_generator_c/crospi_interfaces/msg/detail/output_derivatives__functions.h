// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from crospi_interfaces:msg/OutputDerivatives.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__OUTPUT_DERIVATIVES__FUNCTIONS_H_
#define CROSPI_INTERFACES__MSG__DETAIL__OUTPUT_DERIVATIVES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "crospi_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "crospi_interfaces/msg/detail/output_derivatives__struct.h"

/// Initialize msg/OutputDerivatives message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crospi_interfaces__msg__OutputDerivatives
 * )) before or use
 * crospi_interfaces__msg__OutputDerivatives__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__msg__OutputDerivatives__init(crospi_interfaces__msg__OutputDerivatives * msg);

/// Finalize msg/OutputDerivatives message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__msg__OutputDerivatives__fini(crospi_interfaces__msg__OutputDerivatives * msg);

/// Create msg/OutputDerivatives message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crospi_interfaces__msg__OutputDerivatives__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__msg__OutputDerivatives *
crospi_interfaces__msg__OutputDerivatives__create();

/// Destroy msg/OutputDerivatives message.
/**
 * It calls
 * crospi_interfaces__msg__OutputDerivatives__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__msg__OutputDerivatives__destroy(crospi_interfaces__msg__OutputDerivatives * msg);

/// Check for msg/OutputDerivatives message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__msg__OutputDerivatives__are_equal(const crospi_interfaces__msg__OutputDerivatives * lhs, const crospi_interfaces__msg__OutputDerivatives * rhs);

/// Copy a msg/OutputDerivatives message.
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
crospi_interfaces__msg__OutputDerivatives__copy(
  const crospi_interfaces__msg__OutputDerivatives * input,
  crospi_interfaces__msg__OutputDerivatives * output);

/// Initialize array of msg/OutputDerivatives messages.
/**
 * It allocates the memory for the number of elements and calls
 * crospi_interfaces__msg__OutputDerivatives__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__msg__OutputDerivatives__Sequence__init(crospi_interfaces__msg__OutputDerivatives__Sequence * array, size_t size);

/// Finalize array of msg/OutputDerivatives messages.
/**
 * It calls
 * crospi_interfaces__msg__OutputDerivatives__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__msg__OutputDerivatives__Sequence__fini(crospi_interfaces__msg__OutputDerivatives__Sequence * array);

/// Create array of msg/OutputDerivatives messages.
/**
 * It allocates the memory for the array and calls
 * crospi_interfaces__msg__OutputDerivatives__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__msg__OutputDerivatives__Sequence *
crospi_interfaces__msg__OutputDerivatives__Sequence__create(size_t size);

/// Destroy array of msg/OutputDerivatives messages.
/**
 * It calls
 * crospi_interfaces__msg__OutputDerivatives__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__msg__OutputDerivatives__Sequence__destroy(crospi_interfaces__msg__OutputDerivatives__Sequence * array);

/// Check for msg/OutputDerivatives message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__msg__OutputDerivatives__Sequence__are_equal(const crospi_interfaces__msg__OutputDerivatives__Sequence * lhs, const crospi_interfaces__msg__OutputDerivatives__Sequence * rhs);

/// Copy an array of msg/OutputDerivatives messages.
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
crospi_interfaces__msg__OutputDerivatives__Sequence__copy(
  const crospi_interfaces__msg__OutputDerivatives__Sequence * input,
  crospi_interfaces__msg__OutputDerivatives__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__MSG__DETAIL__OUTPUT_DERIVATIVES__FUNCTIONS_H_
