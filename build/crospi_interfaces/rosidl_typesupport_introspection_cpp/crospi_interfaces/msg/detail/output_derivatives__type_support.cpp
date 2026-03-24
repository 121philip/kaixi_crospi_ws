// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crospi_interfaces:msg/OutputDerivatives.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crospi_interfaces/msg/detail/output_derivatives__struct.hpp"
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

void OutputDerivatives_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) crospi_interfaces::msg::OutputDerivatives(_init);
}

void OutputDerivatives_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crospi_interfaces::msg::OutputDerivatives *>(message_memory);
  typed_message->~OutputDerivatives();
}

size_t size_function__OutputDerivatives__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OutputDerivatives__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__OutputDerivatives__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__OutputDerivatives__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__OutputDerivatives__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__OutputDerivatives__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__OutputDerivatives__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__OutputDerivatives__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OutputDerivatives__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OutputDerivatives__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__OutputDerivatives__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__OutputDerivatives__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__OutputDerivatives__data(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__OutputDerivatives__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__OutputDerivatives__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__OutputDerivatives__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OutputDerivatives__is_declared(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__OutputDerivatives__is_declared(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__OutputDerivatives__is_declared(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__OutputDerivatives__is_declared(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OutputDerivatives_message_member_array[3] = {
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces::msg::OutputDerivatives, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__OutputDerivatives__names,  // size() function pointer
    get_const_function__OutputDerivatives__names,  // get_const(index) function pointer
    get_function__OutputDerivatives__names,  // get(index) function pointer
    fetch_function__OutputDerivatives__names,  // fetch(index, &value) function pointer
    assign_function__OutputDerivatives__names,  // assign(index, value) function pointer
    resize_function__OutputDerivatives__names  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces::msg::OutputDerivatives, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__OutputDerivatives__data,  // size() function pointer
    get_const_function__OutputDerivatives__data,  // get_const(index) function pointer
    get_function__OutputDerivatives__data,  // get(index) function pointer
    fetch_function__OutputDerivatives__data,  // fetch(index, &value) function pointer
    assign_function__OutputDerivatives__data,  // assign(index, value) function pointer
    resize_function__OutputDerivatives__data  // resize(index) function pointer
  },
  {
    "is_declared",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces::msg::OutputDerivatives, is_declared),  // bytes offset in struct
    nullptr,  // default value
    size_function__OutputDerivatives__is_declared,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__OutputDerivatives__is_declared,  // fetch(index, &value) function pointer
    assign_function__OutputDerivatives__is_declared,  // assign(index, value) function pointer
    resize_function__OutputDerivatives__is_declared  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OutputDerivatives_message_members = {
  "crospi_interfaces::msg",  // message namespace
  "OutputDerivatives",  // message name
  3,  // number of fields
  sizeof(crospi_interfaces::msg::OutputDerivatives),
  OutputDerivatives_message_member_array,  // message members
  OutputDerivatives_init_function,  // function to initialize message memory (memory has to be allocated)
  OutputDerivatives_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OutputDerivatives_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OutputDerivatives_message_members,
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
get_message_type_support_handle<crospi_interfaces::msg::OutputDerivatives>()
{
  return &::crospi_interfaces::msg::rosidl_typesupport_introspection_cpp::OutputDerivatives_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crospi_interfaces, msg, OutputDerivatives)() {
  return &::crospi_interfaces::msg::rosidl_typesupport_introspection_cpp::OutputDerivatives_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
