// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crospi_interfaces:action/RunTask.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__ACTION__DETAIL__RUN_TASK__STRUCT_H_
#define CROSPI_INTERFACES__ACTION__DETAIL__RUN_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RunTask in the package crospi_interfaces.
typedef struct crospi_interfaces__action__RunTask_Goal
{
  /// GOAL definition ##################
  /// JSON description of the task:
  rosidl_runtime_c__String task;
} crospi_interfaces__action__RunTask_Goal;

// Struct for a sequence of crospi_interfaces__action__RunTask_Goal.
typedef struct crospi_interfaces__action__RunTask_Goal__Sequence
{
  crospi_interfaces__action__RunTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__action__RunTask_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'terminating_event'
// Member 'event_argument'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/RunTask in the package crospi_interfaces.
typedef struct crospi_interfaces__action__RunTask_Result
{
  /// Name of the event that terminated the controller
  rosidl_runtime_c__String terminating_event;
  /// Argument of the event
  rosidl_runtime_c__String event_argument;
} crospi_interfaces__action__RunTask_Result;

// Struct for a sequence of crospi_interfaces__action__RunTask_Result.
typedef struct crospi_interfaces__action__RunTask_Result__Sequence
{
  crospi_interfaces__action__RunTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__action__RunTask_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'event'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/RunTask in the package crospi_interfaces.
typedef struct crospi_interfaces__action__RunTask_Feedback
{
  rosidl_runtime_c__String event;
} crospi_interfaces__action__RunTask_Feedback;

// Struct for a sequence of crospi_interfaces__action__RunTask_Feedback.
typedef struct crospi_interfaces__action__RunTask_Feedback__Sequence
{
  crospi_interfaces__action__RunTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__action__RunTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "crospi_interfaces/action/detail/run_task__struct.h"

/// Struct defined in action/RunTask in the package crospi_interfaces.
typedef struct crospi_interfaces__action__RunTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  crospi_interfaces__action__RunTask_Goal goal;
} crospi_interfaces__action__RunTask_SendGoal_Request;

// Struct for a sequence of crospi_interfaces__action__RunTask_SendGoal_Request.
typedef struct crospi_interfaces__action__RunTask_SendGoal_Request__Sequence
{
  crospi_interfaces__action__RunTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__action__RunTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RunTask in the package crospi_interfaces.
typedef struct crospi_interfaces__action__RunTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} crospi_interfaces__action__RunTask_SendGoal_Response;

// Struct for a sequence of crospi_interfaces__action__RunTask_SendGoal_Response.
typedef struct crospi_interfaces__action__RunTask_SendGoal_Response__Sequence
{
  crospi_interfaces__action__RunTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__action__RunTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RunTask in the package crospi_interfaces.
typedef struct crospi_interfaces__action__RunTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} crospi_interfaces__action__RunTask_GetResult_Request;

// Struct for a sequence of crospi_interfaces__action__RunTask_GetResult_Request.
typedef struct crospi_interfaces__action__RunTask_GetResult_Request__Sequence
{
  crospi_interfaces__action__RunTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__action__RunTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "crospi_interfaces/action/detail/run_task__struct.h"

/// Struct defined in action/RunTask in the package crospi_interfaces.
typedef struct crospi_interfaces__action__RunTask_GetResult_Response
{
  int8_t status;
  crospi_interfaces__action__RunTask_Result result;
} crospi_interfaces__action__RunTask_GetResult_Response;

// Struct for a sequence of crospi_interfaces__action__RunTask_GetResult_Response.
typedef struct crospi_interfaces__action__RunTask_GetResult_Response__Sequence
{
  crospi_interfaces__action__RunTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__action__RunTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "crospi_interfaces/action/detail/run_task__struct.h"

/// Struct defined in action/RunTask in the package crospi_interfaces.
typedef struct crospi_interfaces__action__RunTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  crospi_interfaces__action__RunTask_Feedback feedback;
} crospi_interfaces__action__RunTask_FeedbackMessage;

// Struct for a sequence of crospi_interfaces__action__RunTask_FeedbackMessage.
typedef struct crospi_interfaces__action__RunTask_FeedbackMessage__Sequence
{
  crospi_interfaces__action__RunTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__action__RunTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__ACTION__DETAIL__RUN_TASK__STRUCT_H_
