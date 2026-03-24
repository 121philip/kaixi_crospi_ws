// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crospi_interfaces:action/RunTask.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__ACTION__DETAIL__RUN_TASK__TRAITS_HPP_
#define CROSPI_INTERFACES__ACTION__DETAIL__RUN_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crospi_interfaces/action/detail/run_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace crospi_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunTask_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: task
  {
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task: ";
    rosidl_generator_traits::value_to_yaml(msg.task, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunTask_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::action::RunTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::action::RunTask_Goal & msg)
{
  return crospi_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::action::RunTask_Goal>()
{
  return "crospi_interfaces::action::RunTask_Goal";
}

template<>
inline const char * name<crospi_interfaces::action::RunTask_Goal>()
{
  return "crospi_interfaces/action/RunTask_Goal";
}

template<>
struct has_fixed_size<crospi_interfaces::action::RunTask_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crospi_interfaces::action::RunTask_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crospi_interfaces::action::RunTask_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace crospi_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunTask_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: terminating_event
  {
    out << "terminating_event: ";
    rosidl_generator_traits::value_to_yaml(msg.terminating_event, out);
    out << ", ";
  }

  // member: event_argument
  {
    out << "event_argument: ";
    rosidl_generator_traits::value_to_yaml(msg.event_argument, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: terminating_event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terminating_event: ";
    rosidl_generator_traits::value_to_yaml(msg.terminating_event, out);
    out << "\n";
  }

  // member: event_argument
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_argument: ";
    rosidl_generator_traits::value_to_yaml(msg.event_argument, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunTask_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::action::RunTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::action::RunTask_Result & msg)
{
  return crospi_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::action::RunTask_Result>()
{
  return "crospi_interfaces::action::RunTask_Result";
}

template<>
inline const char * name<crospi_interfaces::action::RunTask_Result>()
{
  return "crospi_interfaces/action/RunTask_Result";
}

template<>
struct has_fixed_size<crospi_interfaces::action::RunTask_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crospi_interfaces::action::RunTask_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crospi_interfaces::action::RunTask_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace crospi_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunTask_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: event
  {
    out << "event: ";
    rosidl_generator_traits::value_to_yaml(msg.event, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event: ";
    rosidl_generator_traits::value_to_yaml(msg.event, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunTask_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::action::RunTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::action::RunTask_Feedback & msg)
{
  return crospi_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::action::RunTask_Feedback>()
{
  return "crospi_interfaces::action::RunTask_Feedback";
}

template<>
inline const char * name<crospi_interfaces::action::RunTask_Feedback>()
{
  return "crospi_interfaces/action/RunTask_Feedback";
}

template<>
struct has_fixed_size<crospi_interfaces::action::RunTask_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crospi_interfaces::action::RunTask_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crospi_interfaces::action::RunTask_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "crospi_interfaces/action/detail/run_task__traits.hpp"

namespace crospi_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunTask_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunTask_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::action::RunTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::action::RunTask_SendGoal_Request & msg)
{
  return crospi_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::action::RunTask_SendGoal_Request>()
{
  return "crospi_interfaces::action::RunTask_SendGoal_Request";
}

template<>
inline const char * name<crospi_interfaces::action::RunTask_SendGoal_Request>()
{
  return "crospi_interfaces/action/RunTask_SendGoal_Request";
}

template<>
struct has_fixed_size<crospi_interfaces::action::RunTask_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<crospi_interfaces::action::RunTask_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<crospi_interfaces::action::RunTask_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<crospi_interfaces::action::RunTask_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<crospi_interfaces::action::RunTask_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace crospi_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunTask_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunTask_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::action::RunTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::action::RunTask_SendGoal_Response & msg)
{
  return crospi_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::action::RunTask_SendGoal_Response>()
{
  return "crospi_interfaces::action::RunTask_SendGoal_Response";
}

template<>
inline const char * name<crospi_interfaces::action::RunTask_SendGoal_Response>()
{
  return "crospi_interfaces/action/RunTask_SendGoal_Response";
}

template<>
struct has_fixed_size<crospi_interfaces::action::RunTask_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<crospi_interfaces::action::RunTask_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<crospi_interfaces::action::RunTask_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crospi_interfaces::action::RunTask_SendGoal>()
{
  return "crospi_interfaces::action::RunTask_SendGoal";
}

template<>
inline const char * name<crospi_interfaces::action::RunTask_SendGoal>()
{
  return "crospi_interfaces/action/RunTask_SendGoal";
}

template<>
struct has_fixed_size<crospi_interfaces::action::RunTask_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<crospi_interfaces::action::RunTask_SendGoal_Request>::value &&
    has_fixed_size<crospi_interfaces::action::RunTask_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<crospi_interfaces::action::RunTask_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<crospi_interfaces::action::RunTask_SendGoal_Request>::value &&
    has_bounded_size<crospi_interfaces::action::RunTask_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<crospi_interfaces::action::RunTask_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<crospi_interfaces::action::RunTask_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crospi_interfaces::action::RunTask_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace crospi_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunTask_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunTask_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::action::RunTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::action::RunTask_GetResult_Request & msg)
{
  return crospi_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::action::RunTask_GetResult_Request>()
{
  return "crospi_interfaces::action::RunTask_GetResult_Request";
}

template<>
inline const char * name<crospi_interfaces::action::RunTask_GetResult_Request>()
{
  return "crospi_interfaces/action/RunTask_GetResult_Request";
}

template<>
struct has_fixed_size<crospi_interfaces::action::RunTask_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<crospi_interfaces::action::RunTask_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<crospi_interfaces::action::RunTask_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "crospi_interfaces/action/detail/run_task__traits.hpp"

namespace crospi_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunTask_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunTask_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::action::RunTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::action::RunTask_GetResult_Response & msg)
{
  return crospi_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::action::RunTask_GetResult_Response>()
{
  return "crospi_interfaces::action::RunTask_GetResult_Response";
}

template<>
inline const char * name<crospi_interfaces::action::RunTask_GetResult_Response>()
{
  return "crospi_interfaces/action/RunTask_GetResult_Response";
}

template<>
struct has_fixed_size<crospi_interfaces::action::RunTask_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<crospi_interfaces::action::RunTask_Result>::value> {};

template<>
struct has_bounded_size<crospi_interfaces::action::RunTask_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<crospi_interfaces::action::RunTask_Result>::value> {};

template<>
struct is_message<crospi_interfaces::action::RunTask_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crospi_interfaces::action::RunTask_GetResult>()
{
  return "crospi_interfaces::action::RunTask_GetResult";
}

template<>
inline const char * name<crospi_interfaces::action::RunTask_GetResult>()
{
  return "crospi_interfaces/action/RunTask_GetResult";
}

template<>
struct has_fixed_size<crospi_interfaces::action::RunTask_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<crospi_interfaces::action::RunTask_GetResult_Request>::value &&
    has_fixed_size<crospi_interfaces::action::RunTask_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<crospi_interfaces::action::RunTask_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<crospi_interfaces::action::RunTask_GetResult_Request>::value &&
    has_bounded_size<crospi_interfaces::action::RunTask_GetResult_Response>::value
  >
{
};

template<>
struct is_service<crospi_interfaces::action::RunTask_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<crospi_interfaces::action::RunTask_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crospi_interfaces::action::RunTask_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "crospi_interfaces/action/detail/run_task__traits.hpp"

namespace crospi_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const RunTask_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunTask_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::action::RunTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::action::RunTask_FeedbackMessage & msg)
{
  return crospi_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::action::RunTask_FeedbackMessage>()
{
  return "crospi_interfaces::action::RunTask_FeedbackMessage";
}

template<>
inline const char * name<crospi_interfaces::action::RunTask_FeedbackMessage>()
{
  return "crospi_interfaces/action/RunTask_FeedbackMessage";
}

template<>
struct has_fixed_size<crospi_interfaces::action::RunTask_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<crospi_interfaces::action::RunTask_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<crospi_interfaces::action::RunTask_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<crospi_interfaces::action::RunTask_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<crospi_interfaces::action::RunTask_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<crospi_interfaces::action::RunTask>
  : std::true_type
{
};

template<>
struct is_action_goal<crospi_interfaces::action::RunTask_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<crospi_interfaces::action::RunTask_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<crospi_interfaces::action::RunTask_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CROSPI_INTERFACES__ACTION__DETAIL__RUN_TASK__TRAITS_HPP_
