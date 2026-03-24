// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:msg/ReturnValue.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__RETURN_VALUE__BUILDER_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__RETURN_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/msg/detail/return_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace msg
{

namespace builder
{

class Init_ReturnValue_description
{
public:
  explicit Init_ReturnValue_description(::crospi_interfaces::msg::ReturnValue & msg)
  : msg_(msg)
  {}
  ::crospi_interfaces::msg::ReturnValue description(::crospi_interfaces::msg::ReturnValue::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::msg::ReturnValue msg_;
};

class Init_ReturnValue_errorcode
{
public:
  Init_ReturnValue_errorcode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReturnValue_description errorcode(::crospi_interfaces::msg::ReturnValue::_errorcode_type arg)
  {
    msg_.errorcode = std::move(arg);
    return Init_ReturnValue_description(msg_);
  }

private:
  ::crospi_interfaces::msg::ReturnValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::msg::ReturnValue>()
{
  return crospi_interfaces::msg::builder::Init_ReturnValue_errorcode();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__RETURN_VALUE__BUILDER_HPP_
