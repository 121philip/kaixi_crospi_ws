// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from betfsm_interfaces:msg/Trace.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "betfsm_interfaces/msg/detail/trace__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace betfsm_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Trace_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) betfsm_interfaces::msg::Trace(_init);
}

void Trace_fini_function(void * message_memory)
{
  auto typed_message = static_cast<betfsm_interfaces::msg::Trace *>(message_memory);
  typed_message->~Trace();
}

size_t size_function__Trace__active_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Trace__active_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Trace__active_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Trace__active_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Trace__active_states(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Trace__active_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Trace__active_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Trace__active_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Trace_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(betfsm_interfaces::msg::Trace, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "active_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(betfsm_interfaces::msg::Trace, active_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__Trace__active_states,  // size() function pointer
    get_const_function__Trace__active_states,  // get_const(index) function pointer
    get_function__Trace__active_states,  // get(index) function pointer
    fetch_function__Trace__active_states,  // fetch(index, &value) function pointer
    assign_function__Trace__active_states,  // assign(index, value) function pointer
    resize_function__Trace__active_states  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Trace_message_members = {
  "betfsm_interfaces::msg",  // message namespace
  "Trace",  // message name
  2,  // number of fields
  sizeof(betfsm_interfaces::msg::Trace),
  Trace_message_member_array,  // message members
  Trace_init_function,  // function to initialize message memory (memory has to be allocated)
  Trace_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Trace_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Trace_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace betfsm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<betfsm_interfaces::msg::Trace>()
{
  return &::betfsm_interfaces::msg::rosidl_typesupport_introspection_cpp::Trace_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, betfsm_interfaces, msg, Trace)() {
  return &::betfsm_interfaces::msg::rosidl_typesupport_introspection_cpp::Trace_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
