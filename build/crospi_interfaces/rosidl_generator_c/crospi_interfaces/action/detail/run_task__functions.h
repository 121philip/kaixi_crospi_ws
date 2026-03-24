// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from crospi_interfaces:action/RunTask.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__ACTION__DETAIL__RUN_TASK__FUNCTIONS_H_
#define CROSPI_INTERFACES__ACTION__DETAIL__RUN_TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "crospi_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "crospi_interfaces/action/detail/run_task__struct.h"

/// Initialize action/RunTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crospi_interfaces__action__RunTask_Goal
 * )) before or use
 * crospi_interfaces__action__RunTask_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Goal__init(crospi_interfaces__action__RunTask_Goal * msg);

/// Finalize action/RunTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Goal__fini(crospi_interfaces__action__RunTask_Goal * msg);

/// Create action/RunTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crospi_interfaces__action__RunTask_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_Goal *
crospi_interfaces__action__RunTask_Goal__create();

/// Destroy action/RunTask message.
/**
 * It calls
 * crospi_interfaces__action__RunTask_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Goal__destroy(crospi_interfaces__action__RunTask_Goal * msg);

/// Check for action/RunTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Goal__are_equal(const crospi_interfaces__action__RunTask_Goal * lhs, const crospi_interfaces__action__RunTask_Goal * rhs);

/// Copy a action/RunTask message.
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
crospi_interfaces__action__RunTask_Goal__copy(
  const crospi_interfaces__action__RunTask_Goal * input,
  crospi_interfaces__action__RunTask_Goal * output);

/// Initialize array of action/RunTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * crospi_interfaces__action__RunTask_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Goal__Sequence__init(crospi_interfaces__action__RunTask_Goal__Sequence * array, size_t size);

/// Finalize array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Goal__Sequence__fini(crospi_interfaces__action__RunTask_Goal__Sequence * array);

/// Create array of action/RunTask messages.
/**
 * It allocates the memory for the array and calls
 * crospi_interfaces__action__RunTask_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_Goal__Sequence *
crospi_interfaces__action__RunTask_Goal__Sequence__create(size_t size);

/// Destroy array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Goal__Sequence__destroy(crospi_interfaces__action__RunTask_Goal__Sequence * array);

/// Check for action/RunTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Goal__Sequence__are_equal(const crospi_interfaces__action__RunTask_Goal__Sequence * lhs, const crospi_interfaces__action__RunTask_Goal__Sequence * rhs);

/// Copy an array of action/RunTask messages.
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
crospi_interfaces__action__RunTask_Goal__Sequence__copy(
  const crospi_interfaces__action__RunTask_Goal__Sequence * input,
  crospi_interfaces__action__RunTask_Goal__Sequence * output);

/// Initialize action/RunTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crospi_interfaces__action__RunTask_Result
 * )) before or use
 * crospi_interfaces__action__RunTask_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Result__init(crospi_interfaces__action__RunTask_Result * msg);

/// Finalize action/RunTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Result__fini(crospi_interfaces__action__RunTask_Result * msg);

/// Create action/RunTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crospi_interfaces__action__RunTask_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_Result *
crospi_interfaces__action__RunTask_Result__create();

/// Destroy action/RunTask message.
/**
 * It calls
 * crospi_interfaces__action__RunTask_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Result__destroy(crospi_interfaces__action__RunTask_Result * msg);

/// Check for action/RunTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Result__are_equal(const crospi_interfaces__action__RunTask_Result * lhs, const crospi_interfaces__action__RunTask_Result * rhs);

/// Copy a action/RunTask message.
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
crospi_interfaces__action__RunTask_Result__copy(
  const crospi_interfaces__action__RunTask_Result * input,
  crospi_interfaces__action__RunTask_Result * output);

/// Initialize array of action/RunTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * crospi_interfaces__action__RunTask_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Result__Sequence__init(crospi_interfaces__action__RunTask_Result__Sequence * array, size_t size);

/// Finalize array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Result__Sequence__fini(crospi_interfaces__action__RunTask_Result__Sequence * array);

/// Create array of action/RunTask messages.
/**
 * It allocates the memory for the array and calls
 * crospi_interfaces__action__RunTask_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_Result__Sequence *
crospi_interfaces__action__RunTask_Result__Sequence__create(size_t size);

/// Destroy array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Result__Sequence__destroy(crospi_interfaces__action__RunTask_Result__Sequence * array);

/// Check for action/RunTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Result__Sequence__are_equal(const crospi_interfaces__action__RunTask_Result__Sequence * lhs, const crospi_interfaces__action__RunTask_Result__Sequence * rhs);

/// Copy an array of action/RunTask messages.
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
crospi_interfaces__action__RunTask_Result__Sequence__copy(
  const crospi_interfaces__action__RunTask_Result__Sequence * input,
  crospi_interfaces__action__RunTask_Result__Sequence * output);

/// Initialize action/RunTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crospi_interfaces__action__RunTask_Feedback
 * )) before or use
 * crospi_interfaces__action__RunTask_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Feedback__init(crospi_interfaces__action__RunTask_Feedback * msg);

/// Finalize action/RunTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Feedback__fini(crospi_interfaces__action__RunTask_Feedback * msg);

/// Create action/RunTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crospi_interfaces__action__RunTask_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_Feedback *
crospi_interfaces__action__RunTask_Feedback__create();

/// Destroy action/RunTask message.
/**
 * It calls
 * crospi_interfaces__action__RunTask_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Feedback__destroy(crospi_interfaces__action__RunTask_Feedback * msg);

/// Check for action/RunTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Feedback__are_equal(const crospi_interfaces__action__RunTask_Feedback * lhs, const crospi_interfaces__action__RunTask_Feedback * rhs);

/// Copy a action/RunTask message.
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
crospi_interfaces__action__RunTask_Feedback__copy(
  const crospi_interfaces__action__RunTask_Feedback * input,
  crospi_interfaces__action__RunTask_Feedback * output);

/// Initialize array of action/RunTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * crospi_interfaces__action__RunTask_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Feedback__Sequence__init(crospi_interfaces__action__RunTask_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Feedback__Sequence__fini(crospi_interfaces__action__RunTask_Feedback__Sequence * array);

/// Create array of action/RunTask messages.
/**
 * It allocates the memory for the array and calls
 * crospi_interfaces__action__RunTask_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_Feedback__Sequence *
crospi_interfaces__action__RunTask_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_Feedback__Sequence__destroy(crospi_interfaces__action__RunTask_Feedback__Sequence * array);

/// Check for action/RunTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_Feedback__Sequence__are_equal(const crospi_interfaces__action__RunTask_Feedback__Sequence * lhs, const crospi_interfaces__action__RunTask_Feedback__Sequence * rhs);

/// Copy an array of action/RunTask messages.
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
crospi_interfaces__action__RunTask_Feedback__Sequence__copy(
  const crospi_interfaces__action__RunTask_Feedback__Sequence * input,
  crospi_interfaces__action__RunTask_Feedback__Sequence * output);

/// Initialize action/RunTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crospi_interfaces__action__RunTask_SendGoal_Request
 * )) before or use
 * crospi_interfaces__action__RunTask_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_SendGoal_Request__init(crospi_interfaces__action__RunTask_SendGoal_Request * msg);

/// Finalize action/RunTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_SendGoal_Request__fini(crospi_interfaces__action__RunTask_SendGoal_Request * msg);

/// Create action/RunTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crospi_interfaces__action__RunTask_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_SendGoal_Request *
crospi_interfaces__action__RunTask_SendGoal_Request__create();

/// Destroy action/RunTask message.
/**
 * It calls
 * crospi_interfaces__action__RunTask_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_SendGoal_Request__destroy(crospi_interfaces__action__RunTask_SendGoal_Request * msg);

/// Check for action/RunTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_SendGoal_Request__are_equal(const crospi_interfaces__action__RunTask_SendGoal_Request * lhs, const crospi_interfaces__action__RunTask_SendGoal_Request * rhs);

/// Copy a action/RunTask message.
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
crospi_interfaces__action__RunTask_SendGoal_Request__copy(
  const crospi_interfaces__action__RunTask_SendGoal_Request * input,
  crospi_interfaces__action__RunTask_SendGoal_Request * output);

/// Initialize array of action/RunTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * crospi_interfaces__action__RunTask_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__init(crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__fini(crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * array);

/// Create array of action/RunTask messages.
/**
 * It allocates the memory for the array and calls
 * crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence *
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__destroy(crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * array);

/// Check for action/RunTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__are_equal(const crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * lhs, const crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/RunTask messages.
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
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__copy(
  const crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * input,
  crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * output);

/// Initialize action/RunTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crospi_interfaces__action__RunTask_SendGoal_Response
 * )) before or use
 * crospi_interfaces__action__RunTask_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_SendGoal_Response__init(crospi_interfaces__action__RunTask_SendGoal_Response * msg);

/// Finalize action/RunTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_SendGoal_Response__fini(crospi_interfaces__action__RunTask_SendGoal_Response * msg);

/// Create action/RunTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crospi_interfaces__action__RunTask_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_SendGoal_Response *
crospi_interfaces__action__RunTask_SendGoal_Response__create();

/// Destroy action/RunTask message.
/**
 * It calls
 * crospi_interfaces__action__RunTask_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_SendGoal_Response__destroy(crospi_interfaces__action__RunTask_SendGoal_Response * msg);

/// Check for action/RunTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_SendGoal_Response__are_equal(const crospi_interfaces__action__RunTask_SendGoal_Response * lhs, const crospi_interfaces__action__RunTask_SendGoal_Response * rhs);

/// Copy a action/RunTask message.
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
crospi_interfaces__action__RunTask_SendGoal_Response__copy(
  const crospi_interfaces__action__RunTask_SendGoal_Response * input,
  crospi_interfaces__action__RunTask_SendGoal_Response * output);

/// Initialize array of action/RunTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * crospi_interfaces__action__RunTask_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__init(crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__fini(crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * array);

/// Create array of action/RunTask messages.
/**
 * It allocates the memory for the array and calls
 * crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence *
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__destroy(crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * array);

/// Check for action/RunTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__are_equal(const crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * lhs, const crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/RunTask messages.
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
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__copy(
  const crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * input,
  crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * output);

/// Initialize action/RunTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crospi_interfaces__action__RunTask_GetResult_Request
 * )) before or use
 * crospi_interfaces__action__RunTask_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_GetResult_Request__init(crospi_interfaces__action__RunTask_GetResult_Request * msg);

/// Finalize action/RunTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_GetResult_Request__fini(crospi_interfaces__action__RunTask_GetResult_Request * msg);

/// Create action/RunTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crospi_interfaces__action__RunTask_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_GetResult_Request *
crospi_interfaces__action__RunTask_GetResult_Request__create();

/// Destroy action/RunTask message.
/**
 * It calls
 * crospi_interfaces__action__RunTask_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_GetResult_Request__destroy(crospi_interfaces__action__RunTask_GetResult_Request * msg);

/// Check for action/RunTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_GetResult_Request__are_equal(const crospi_interfaces__action__RunTask_GetResult_Request * lhs, const crospi_interfaces__action__RunTask_GetResult_Request * rhs);

/// Copy a action/RunTask message.
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
crospi_interfaces__action__RunTask_GetResult_Request__copy(
  const crospi_interfaces__action__RunTask_GetResult_Request * input,
  crospi_interfaces__action__RunTask_GetResult_Request * output);

/// Initialize array of action/RunTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * crospi_interfaces__action__RunTask_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__init(crospi_interfaces__action__RunTask_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__fini(crospi_interfaces__action__RunTask_GetResult_Request__Sequence * array);

/// Create array of action/RunTask messages.
/**
 * It allocates the memory for the array and calls
 * crospi_interfaces__action__RunTask_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_GetResult_Request__Sequence *
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__destroy(crospi_interfaces__action__RunTask_GetResult_Request__Sequence * array);

/// Check for action/RunTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__are_equal(const crospi_interfaces__action__RunTask_GetResult_Request__Sequence * lhs, const crospi_interfaces__action__RunTask_GetResult_Request__Sequence * rhs);

/// Copy an array of action/RunTask messages.
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
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__copy(
  const crospi_interfaces__action__RunTask_GetResult_Request__Sequence * input,
  crospi_interfaces__action__RunTask_GetResult_Request__Sequence * output);

/// Initialize action/RunTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crospi_interfaces__action__RunTask_GetResult_Response
 * )) before or use
 * crospi_interfaces__action__RunTask_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_GetResult_Response__init(crospi_interfaces__action__RunTask_GetResult_Response * msg);

/// Finalize action/RunTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_GetResult_Response__fini(crospi_interfaces__action__RunTask_GetResult_Response * msg);

/// Create action/RunTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crospi_interfaces__action__RunTask_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_GetResult_Response *
crospi_interfaces__action__RunTask_GetResult_Response__create();

/// Destroy action/RunTask message.
/**
 * It calls
 * crospi_interfaces__action__RunTask_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_GetResult_Response__destroy(crospi_interfaces__action__RunTask_GetResult_Response * msg);

/// Check for action/RunTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_GetResult_Response__are_equal(const crospi_interfaces__action__RunTask_GetResult_Response * lhs, const crospi_interfaces__action__RunTask_GetResult_Response * rhs);

/// Copy a action/RunTask message.
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
crospi_interfaces__action__RunTask_GetResult_Response__copy(
  const crospi_interfaces__action__RunTask_GetResult_Response * input,
  crospi_interfaces__action__RunTask_GetResult_Response * output);

/// Initialize array of action/RunTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * crospi_interfaces__action__RunTask_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__init(crospi_interfaces__action__RunTask_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__fini(crospi_interfaces__action__RunTask_GetResult_Response__Sequence * array);

/// Create array of action/RunTask messages.
/**
 * It allocates the memory for the array and calls
 * crospi_interfaces__action__RunTask_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_GetResult_Response__Sequence *
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__destroy(crospi_interfaces__action__RunTask_GetResult_Response__Sequence * array);

/// Check for action/RunTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__are_equal(const crospi_interfaces__action__RunTask_GetResult_Response__Sequence * lhs, const crospi_interfaces__action__RunTask_GetResult_Response__Sequence * rhs);

/// Copy an array of action/RunTask messages.
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
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__copy(
  const crospi_interfaces__action__RunTask_GetResult_Response__Sequence * input,
  crospi_interfaces__action__RunTask_GetResult_Response__Sequence * output);

/// Initialize action/RunTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crospi_interfaces__action__RunTask_FeedbackMessage
 * )) before or use
 * crospi_interfaces__action__RunTask_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_FeedbackMessage__init(crospi_interfaces__action__RunTask_FeedbackMessage * msg);

/// Finalize action/RunTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_FeedbackMessage__fini(crospi_interfaces__action__RunTask_FeedbackMessage * msg);

/// Create action/RunTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crospi_interfaces__action__RunTask_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_FeedbackMessage *
crospi_interfaces__action__RunTask_FeedbackMessage__create();

/// Destroy action/RunTask message.
/**
 * It calls
 * crospi_interfaces__action__RunTask_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_FeedbackMessage__destroy(crospi_interfaces__action__RunTask_FeedbackMessage * msg);

/// Check for action/RunTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_FeedbackMessage__are_equal(const crospi_interfaces__action__RunTask_FeedbackMessage * lhs, const crospi_interfaces__action__RunTask_FeedbackMessage * rhs);

/// Copy a action/RunTask message.
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
crospi_interfaces__action__RunTask_FeedbackMessage__copy(
  const crospi_interfaces__action__RunTask_FeedbackMessage * input,
  crospi_interfaces__action__RunTask_FeedbackMessage * output);

/// Initialize array of action/RunTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * crospi_interfaces__action__RunTask_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__init(crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__fini(crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * array);

/// Create array of action/RunTask messages.
/**
 * It allocates the memory for the array and calls
 * crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence *
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RunTask messages.
/**
 * It calls
 * crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
void
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__destroy(crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * array);

/// Check for action/RunTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crospi_interfaces
bool
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__are_equal(const crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * lhs, const crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/RunTask messages.
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
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__copy(
  const crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * input,
  crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__ACTION__DETAIL__RUN_TASK__FUNCTIONS_H_
