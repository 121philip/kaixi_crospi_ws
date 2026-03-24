// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__INPUT__BUILDER_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/msg/detail/input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace msg
{

namespace builder
{

class Init_Input_data
{
public:
  explicit Init_Input_data(::crospi_interfaces::msg::Input & msg)
  : msg_(msg)
  {}
  ::crospi_interfaces::msg::Input data(::crospi_interfaces::msg::Input::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::msg::Input msg_;
};

class Init_Input_names
{
public:
  Init_Input_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Input_data names(::crospi_interfaces::msg::Input::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_Input_data(msg_);
  }

private:
  ::crospi_interfaces::msg::Input msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::msg::Input>()
{
  return crospi_interfaces::msg::builder::Init_Input_names();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__INPUT__BUILDER_HPP_
