// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:msg/TaskParameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__BUILDER_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/msg/detail/task_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace msg
{

namespace builder
{

class Init_TaskParameters_vector3s
{
public:
  explicit Init_TaskParameters_vector3s(::crospi_interfaces::msg::TaskParameters & msg)
  : msg_(msg)
  {}
  ::crospi_interfaces::msg::TaskParameters vector3s(::crospi_interfaces::msg::TaskParameters::_vector3s_type arg)
  {
    msg_.vector3s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::msg::TaskParameters msg_;
};

class Init_TaskParameters_poses
{
public:
  explicit Init_TaskParameters_poses(::crospi_interfaces::msg::TaskParameters & msg)
  : msg_(msg)
  {}
  Init_TaskParameters_vector3s poses(::crospi_interfaces::msg::TaskParameters::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_TaskParameters_vector3s(msg_);
  }

private:
  ::crospi_interfaces::msg::TaskParameters msg_;
};

class Init_TaskParameters_numbers
{
public:
  Init_TaskParameters_numbers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskParameters_poses numbers(::crospi_interfaces::msg::TaskParameters::_numbers_type arg)
  {
    msg_.numbers = std::move(arg);
    return Init_TaskParameters_poses(msg_);
  }

private:
  ::crospi_interfaces::msg::TaskParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::msg::TaskParameters>()
{
  return crospi_interfaces::msg::builder::Init_TaskParameters_numbers();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__BUILDER_HPP_
