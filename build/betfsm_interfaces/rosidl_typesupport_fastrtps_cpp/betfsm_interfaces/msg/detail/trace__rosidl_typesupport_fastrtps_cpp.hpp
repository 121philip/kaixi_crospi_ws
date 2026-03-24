// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from betfsm_interfaces:msg/Trace.idl
// generated code does not contain a copyright notice

#ifndef BETFSM_INTERFACES__MSG__DETAIL__TRACE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BETFSM_INTERFACES__MSG__DETAIL__TRACE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "betfsm_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "betfsm_interfaces/msg/detail/trace__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace betfsm_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_betfsm_interfaces
cdr_serialize(
  const betfsm_interfaces::msg::Trace & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_betfsm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  betfsm_interfaces::msg::Trace & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_betfsm_interfaces
get_serialized_size(
  const betfsm_interfaces::msg::Trace & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_betfsm_interfaces
max_serialized_size_Trace(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace betfsm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_betfsm_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, betfsm_interfaces, msg, Trace)();

#ifdef __cplusplus
}
#endif

#endif  // BETFSM_INTERFACES__MSG__DETAIL__TRACE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
