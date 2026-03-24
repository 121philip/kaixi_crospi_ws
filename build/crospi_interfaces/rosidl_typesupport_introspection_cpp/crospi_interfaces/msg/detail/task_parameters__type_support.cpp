// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crospi_interfaces:msg/TaskParameters.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crospi_interfaces/msg/detail/task_parameters__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace crospi_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TaskParameters_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) crospi_interfaces::msg::TaskParameters(_init);
}

void TaskParameters_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crospi_interfaces::msg::TaskParameters *>(message_memory);
  typed_message->~TaskParameters();
}

size_t size_function__TaskParameters__numbers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<crospi_interfaces::msg::NumberParameters> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskParameters__numbers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<crospi_interfaces::msg::NumberParameters> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskParameters__numbers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<crospi_interfaces::msg::NumberParameters> *>(untyped_member);
  return &member[index];
}

void fetch_function__TaskParameters__numbers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const crospi_interfaces::msg::NumberParameters *>(
    get_const_function__TaskParameters__numbers(untyped_member, index));
  auto & value = *reinterpret_cast<crospi_interfaces::msg::NumberParameters *>(untyped_value);
  value = item;
}

void assign_function__TaskParameters__numbers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<crospi_interfaces::msg::NumberParameters *>(
    get_function__TaskParameters__numbers(untyped_member, index));
  const auto & value = *reinterpret_cast<const crospi_interfaces::msg::NumberParameters *>(untyped_value);
  item = value;
}

void resize_function__TaskParameters__numbers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<crospi_interfaces::msg::NumberParameters> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TaskParameters__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<crospi_interfaces::msg::PoseParameters> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskParameters__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<crospi_interfaces::msg::PoseParameters> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskParameters__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<crospi_interfaces::msg::PoseParameters> *>(untyped_member);
  return &member[index];
}

void fetch_function__TaskParameters__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const crospi_interfaces::msg::PoseParameters *>(
    get_const_function__TaskParameters__poses(untyped_member, index));
  auto & value = *reinterpret_cast<crospi_interfaces::msg::PoseParameters *>(untyped_value);
  value = item;
}

void assign_function__TaskParameters__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<crospi_interfaces::msg::PoseParameters *>(
    get_function__TaskParameters__poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const crospi_interfaces::msg::PoseParameters *>(untyped_value);
  item = value;
}

void resize_function__TaskParameters__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<crospi_interfaces::msg::PoseParameters> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TaskParameters__vector3s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<crospi_interfaces::msg::Vector3Parameters> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskParameters__vector3s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<crospi_interfaces::msg::Vector3Parameters> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskParameters__vector3s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<crospi_interfaces::msg::Vector3Parameters> *>(untyped_member);
  return &member[index];
}

void fetch_function__TaskParameters__vector3s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const crospi_interfaces::msg::Vector3Parameters *>(
    get_const_function__TaskParameters__vector3s(untyped_member, index));
  auto & value = *reinterpret_cast<crospi_interfaces::msg::Vector3Parameters *>(untyped_value);
  value = item;
}

void assign_function__TaskParameters__vector3s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<crospi_interfaces::msg::Vector3Parameters *>(
    get_function__TaskParameters__vector3s(untyped_member, index));
  const auto & value = *reinterpret_cast<const crospi_interfaces::msg::Vector3Parameters *>(untyped_value);
  item = value;
}

void resize_function__TaskParameters__vector3s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<crospi_interfaces::msg::Vector3Parameters> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TaskParameters_message_member_array[3] = {
  {
    "numbers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<crospi_interfaces::msg::NumberParameters>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces::msg::TaskParameters, numbers),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskParameters__numbers,  // size() function pointer
    get_const_function__TaskParameters__numbers,  // get_const(index) function pointer
    get_function__TaskParameters__numbers,  // get(index) function pointer
    fetch_function__TaskParameters__numbers,  // fetch(index, &value) function pointer
    assign_function__TaskParameters__numbers,  // assign(index, value) function pointer
    resize_function__TaskParameters__numbers  // resize(index) function pointer
  },
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<crospi_interfaces::msg::PoseParameters>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces::msg::TaskParameters, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskParameters__poses,  // size() function pointer
    get_const_function__TaskParameters__poses,  // get_const(index) function pointer
    get_function__TaskParameters__poses,  // get(index) function pointer
    fetch_function__TaskParameters__poses,  // fetch(index, &value) function pointer
    assign_function__TaskParameters__poses,  // assign(index, value) function pointer
    resize_function__TaskParameters__poses  // resize(index) function pointer
  },
  {
    "vector3s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<crospi_interfaces::msg::Vector3Parameters>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces::msg::TaskParameters, vector3s),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskParameters__vector3s,  // size() function pointer
    get_const_function__TaskParameters__vector3s,  // get_const(index) function pointer
    get_function__TaskParameters__vector3s,  // get(index) function pointer
    fetch_function__TaskParameters__vector3s,  // fetch(index, &value) function pointer
    assign_function__TaskParameters__vector3s,  // assign(index, value) function pointer
    resize_function__TaskParameters__vector3s  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TaskParameters_message_members = {
  "crospi_interfaces::msg",  // message namespace
  "TaskParameters",  // message name
  3,  // number of fields
  sizeof(crospi_interfaces::msg::TaskParameters),
  TaskParameters_message_member_array,  // message members
  TaskParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskParameters_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TaskParameters_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TaskParameters_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace crospi_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crospi_interfaces::msg::TaskParameters>()
{
  return &::crospi_interfaces::msg::rosidl_typesupport_introspection_cpp::TaskParameters_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crospi_interfaces, msg, TaskParameters)() {
  return &::crospi_interfaces::msg::rosidl_typesupport_introspection_cpp::TaskParameters_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
