// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:msg/NumberParameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__NUMBER_PARAMETERS__BUILDER_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__NUMBER_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/msg/detail/number_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace msg
{

namespace builder
{

class Init_NumberParameters_value
{
public:
  explicit Init_NumberParameters_value(::crospi_interfaces::msg::NumberParameters & msg)
  : msg_(msg)
  {}
  ::crospi_interfaces::msg::NumberParameters value(::crospi_interfaces::msg::NumberParameters::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::msg::NumberParameters msg_;
};

class Init_NumberParameters_name
{
public:
  Init_NumberParameters_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NumberParameters_value name(::crospi_interfaces::msg::NumberParameters::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_NumberParameters_value(msg_);
  }

private:
  ::crospi_interfaces::msg::NumberParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::msg::NumberParameters>()
{
  return crospi_interfaces::msg::builder::Init_NumberParameters_name();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__NUMBER_PARAMETERS__BUILDER_HPP_
