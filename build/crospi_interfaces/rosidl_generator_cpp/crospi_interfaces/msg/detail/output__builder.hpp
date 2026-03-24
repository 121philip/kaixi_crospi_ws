// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:msg/Output.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__OUTPUT__BUILDER_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/msg/detail/output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace msg
{

namespace builder
{

class Init_Output_is_declared
{
public:
  explicit Init_Output_is_declared(::crospi_interfaces::msg::Output & msg)
  : msg_(msg)
  {}
  ::crospi_interfaces::msg::Output is_declared(::crospi_interfaces::msg::Output::_is_declared_type arg)
  {
    msg_.is_declared = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::msg::Output msg_;
};

class Init_Output_data
{
public:
  explicit Init_Output_data(::crospi_interfaces::msg::Output & msg)
  : msg_(msg)
  {}
  Init_Output_is_declared data(::crospi_interfaces::msg::Output::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Output_is_declared(msg_);
  }

private:
  ::crospi_interfaces::msg::Output msg_;
};

class Init_Output_names
{
public:
  Init_Output_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Output_data names(::crospi_interfaces::msg::Output::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_Output_data(msg_);
  }

private:
  ::crospi_interfaces::msg::Output msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::msg::Output>()
{
  return crospi_interfaces::msg::builder::Init_Output_names();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__OUTPUT__BUILDER_HPP_
