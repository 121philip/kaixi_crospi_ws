// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trossen_widowx_interfaces:srv/JointModes.idl
// generated code does not contain a copyright notice

#ifndef TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__JOINT_MODES__BUILDER_HPP_
#define TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__JOINT_MODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "trossen_widowx_interfaces/srv/detail/joint_modes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace trossen_widowx_interfaces
{

namespace srv
{

namespace builder
{

class Init_JointModes_Request_joint_mode
{
public:
  Init_JointModes_Request_joint_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::trossen_widowx_interfaces::srv::JointModes_Request joint_mode(::trossen_widowx_interfaces::srv::JointModes_Request::_joint_mode_type arg)
  {
    msg_.joint_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trossen_widowx_interfaces::srv::JointModes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trossen_widowx_interfaces::srv::JointModes_Request>()
{
  return trossen_widowx_interfaces::srv::builder::Init_JointModes_Request_joint_mode();
}

}  // namespace trossen_widowx_interfaces


namespace trossen_widowx_interfaces
{

namespace srv
{

namespace builder
{

class Init_JointModes_Response_success
{
public:
  Init_JointModes_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::trossen_widowx_interfaces::srv::JointModes_Response success(::trossen_widowx_interfaces::srv::JointModes_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trossen_widowx_interfaces::srv::JointModes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trossen_widowx_interfaces::srv::JointModes_Response>()
{
  return trossen_widowx_interfaces::srv::builder::Init_JointModes_Response_success();
}

}  // namespace trossen_widowx_interfaces

#endif  // TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__JOINT_MODES__BUILDER_HPP_
