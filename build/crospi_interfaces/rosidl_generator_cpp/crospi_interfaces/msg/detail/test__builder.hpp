// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__TEST__BUILDER_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/msg/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace msg
{

namespace builder
{

class Init_Test_a
{
public:
  Init_Test_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crospi_interfaces::msg::Test a(::crospi_interfaces::msg::Test::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::msg::Test>()
{
  return crospi_interfaces::msg::builder::Init_Test_a();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__TEST__BUILDER_HPP_
