// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from betfsm_interfaces:action/Task.idl
// generated code does not contain a copyright notice

#ifndef BETFSM_INTERFACES__ACTION__DETAIL__TASK__STRUCT_H_
#define BETFSM_INTERFACES__ACTION__DETAIL__TASK__STRUCT_H_

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
// Member 'parameters'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Task in the package betfsm_interfaces.
typedef struct betfsm_interfaces__action__Task_Goal
{
  rosidl_runtime_c__String task;
  rosidl_runtime_c__String parameters;
} betfsm_interfaces__action__Task_Goal;

// Struct for a sequence of betfsm_interfaces__action__Task_Goal.
typedef struct betfsm_interfaces__action__Task_Goal__Sequence
{
  betfsm_interfaces__action__Task_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} betfsm_interfaces__action__Task_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'outcome'
// Member 'parameters'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Task in the package betfsm_interfaces.
typedef struct betfsm_interfaces__action__Task_Result
{
  rosidl_runtime_c__String outcome;
  rosidl_runtime_c__String parameters;
} betfsm_interfaces__action__Task_Result;

// Struct for a sequence of betfsm_interfaces__action__Task_Result.
typedef struct betfsm_interfaces__action__Task_Result__Sequence
{
  betfsm_interfaces__action__Task_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} betfsm_interfaces__action__Task_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'parameters'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Task in the package betfsm_interfaces.
typedef struct betfsm_interfaces__action__Task_Feedback
{
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String parameters;
} betfsm_interfaces__action__Task_Feedback;

// Struct for a sequence of betfsm_interfaces__action__Task_Feedback.
typedef struct betfsm_interfaces__action__Task_Feedback__Sequence
{
  betfsm_interfaces__action__Task_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} betfsm_interfaces__action__Task_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "betfsm_interfaces/action/detail/task__struct.h"

/// Struct defined in action/Task in the package betfsm_interfaces.
typedef struct betfsm_interfaces__action__Task_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  betfsm_interfaces__action__Task_Goal goal;
} betfsm_interfaces__action__Task_SendGoal_Request;

// Struct for a sequence of betfsm_interfaces__action__Task_SendGoal_Request.
typedef struct betfsm_interfaces__action__Task_SendGoal_Request__Sequence
{
  betfsm_interfaces__action__Task_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} betfsm_interfaces__action__Task_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Task in the package betfsm_interfaces.
typedef struct betfsm_interfaces__action__Task_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} betfsm_interfaces__action__Task_SendGoal_Response;

// Struct for a sequence of betfsm_interfaces__action__Task_SendGoal_Response.
typedef struct betfsm_interfaces__action__Task_SendGoal_Response__Sequence
{
  betfsm_interfaces__action__Task_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} betfsm_interfaces__action__Task_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Task in the package betfsm_interfaces.
typedef struct betfsm_interfaces__action__Task_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} betfsm_interfaces__action__Task_GetResult_Request;

// Struct for a sequence of betfsm_interfaces__action__Task_GetResult_Request.
typedef struct betfsm_interfaces__action__Task_GetResult_Request__Sequence
{
  betfsm_interfaces__action__Task_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} betfsm_interfaces__action__Task_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "betfsm_interfaces/action/detail/task__struct.h"

/// Struct defined in action/Task in the package betfsm_interfaces.
typedef struct betfsm_interfaces__action__Task_GetResult_Response
{
  int8_t status;
  betfsm_interfaces__action__Task_Result result;
} betfsm_interfaces__action__Task_GetResult_Response;

// Struct for a sequence of betfsm_interfaces__action__Task_GetResult_Response.
typedef struct betfsm_interfaces__action__Task_GetResult_Response__Sequence
{
  betfsm_interfaces__action__Task_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} betfsm_interfaces__action__Task_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "betfsm_interfaces/action/detail/task__struct.h"

/// Struct defined in action/Task in the package betfsm_interfaces.
typedef struct betfsm_interfaces__action__Task_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  betfsm_interfaces__action__Task_Feedback feedback;
} betfsm_interfaces__action__Task_FeedbackMessage;

// Struct for a sequence of betfsm_interfaces__action__Task_FeedbackMessage.
typedef struct betfsm_interfaces__action__Task_FeedbackMessage__Sequence
{
  betfsm_interfaces__action__Task_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} betfsm_interfaces__action__Task_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BETFSM_INTERFACES__ACTION__DETAIL__TASK__STRUCT_H_
