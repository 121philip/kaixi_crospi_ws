// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trossen_widowx_interfaces:srv/ControlGripper.idl
// generated code does not contain a copyright notice

#ifndef TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__CONTROL_GRIPPER__BUILDER_HPP_
#define TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__CONTROL_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "trossen_widowx_interfaces/srv/detail/control_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace trossen_widowx_interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlGripper_Request_time
{
public:
  explicit Init_ControlGripper_Request_time(::trossen_widowx_interfaces::srv::ControlGripper_Request & msg)
  : msg_(msg)
  {}
  ::trossen_widowx_interfaces::srv::ControlGripper_Request time(::trossen_widowx_interfaces::srv::ControlGripper_Request::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trossen_widowx_interfaces::srv::ControlGripper_Request msg_;
};

class Init_ControlGripper_Request_position
{
public:
  Init_ControlGripper_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlGripper_Request_time position(::trossen_widowx_interfaces::srv::ControlGripper_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ControlGripper_Request_time(msg_);
  }

private:
  ::trossen_widowx_interfaces::srv::ControlGripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trossen_widowx_interfaces::srv::ControlGripper_Request>()
{
  return trossen_widowx_interfaces::srv::builder::Init_ControlGripper_Request_position();
}

}  // namespace trossen_widowx_interfaces


namespace trossen_widowx_interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlGripper_Response_success
{
public:
  Init_ControlGripper_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::trossen_widowx_interfaces::srv::ControlGripper_Response success(::trossen_widowx_interfaces::srv::ControlGripper_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trossen_widowx_interfaces::srv::ControlGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trossen_widowx_interfaces::srv::ControlGripper_Response>()
{
  return trossen_widowx_interfaces::srv::builder::Init_ControlGripper_Response_success();
}

}  // namespace trossen_widowx_interfaces

#endif  // TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__CONTROL_GRIPPER__BUILDER_HPP_
