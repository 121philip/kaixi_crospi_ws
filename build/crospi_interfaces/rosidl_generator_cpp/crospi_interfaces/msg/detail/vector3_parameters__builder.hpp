// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:msg/Vector3Parameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__BUILDER_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/msg/detail/vector3_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace msg
{

namespace builder
{

class Init_Vector3Parameters_value
{
public:
  explicit Init_Vector3Parameters_value(::crospi_interfaces::msg::Vector3Parameters & msg)
  : msg_(msg)
  {}
  ::crospi_interfaces::msg::Vector3Parameters value(::crospi_interfaces::msg::Vector3Parameters::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::msg::Vector3Parameters msg_;
};

class Init_Vector3Parameters_name
{
public:
  Init_Vector3Parameters_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector3Parameters_value name(::crospi_interfaces::msg::Vector3Parameters::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Vector3Parameters_value(msg_);
  }

private:
  ::crospi_interfaces::msg::Vector3Parameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::msg::Vector3Parameters>()
{
  return crospi_interfaces::msg::builder::Init_Vector3Parameters_name();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__VECTOR3_PARAMETERS__BUILDER_HPP_
