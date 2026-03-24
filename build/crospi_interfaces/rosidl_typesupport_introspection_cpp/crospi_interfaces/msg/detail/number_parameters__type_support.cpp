// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from crospi_interfaces:msg/NumberParameters.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "crospi_interfaces/msg/detail/number_parameters__struct.hpp"
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

void NumberParameters_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) crospi_interfaces::msg::NumberParameters(_init);
}

void NumberParameters_fini_function(void * message_memory)
{
  auto typed_message = static_cast<crospi_interfaces::msg::NumberParameters *>(message_memory);
  typed_message->~NumberParameters();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NumberParameters_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces::msg::NumberParameters, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces::msg::NumberParameters, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NumberParameters_message_members = {
  "crospi_interfaces::msg",  // message namespace
  "NumberParameters",  // message name
  2,  // number of fields
  sizeof(crospi_interfaces::msg::NumberParameters),
  NumberParameters_message_member_array,  // message members
  NumberParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  NumberParameters_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NumberParameters_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NumberParameters_message_members,
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
get_message_type_support_handle<crospi_interfaces::msg::NumberParameters>()
{
  return &::crospi_interfaces::msg::rosidl_typesupport_introspection_cpp::NumberParameters_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crospi_interfaces, msg, NumberParameters)() {
  return &::crospi_interfaces::msg::rosidl_typesupport_introspection_cpp::NumberParameters_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
