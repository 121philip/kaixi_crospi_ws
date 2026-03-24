// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:msg/PoseParameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__POSE_PARAMETERS__BUILDER_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__POSE_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/msg/detail/pose_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseParameters_poses
{
public:
  explicit Init_PoseParameters_poses(::crospi_interfaces::msg::PoseParameters & msg)
  : msg_(msg)
  {}
  ::crospi_interfaces::msg::PoseParameters poses(::crospi_interfaces::msg::PoseParameters::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::msg::PoseParameters msg_;
};

class Init_PoseParameters_name
{
public:
  Init_PoseParameters_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseParameters_poses name(::crospi_interfaces::msg::PoseParameters::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PoseParameters_poses(msg_);
  }

private:
  ::crospi_interfaces::msg::PoseParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::msg::PoseParameters>()
{
  return crospi_interfaces::msg::builder::Init_PoseParameters_name();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__POSE_PARAMETERS__BUILDER_HPP_
