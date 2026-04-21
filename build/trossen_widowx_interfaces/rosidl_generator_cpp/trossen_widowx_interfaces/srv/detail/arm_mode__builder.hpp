// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trossen_widowx_interfaces:srv/ArmMode.idl
// generated code does not contain a copyright notice

#ifndef TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__ARM_MODE__BUILDER_HPP_
#define TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__ARM_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "trossen_widowx_interfaces/srv/detail/arm_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace trossen_widowx_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArmMode_Request_arm_mode
{
public:
  Init_ArmMode_Request_arm_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::trossen_widowx_interfaces::srv::ArmMode_Request arm_mode(::trossen_widowx_interfaces::srv::ArmMode_Request::_arm_mode_type arg)
  {
    msg_.arm_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trossen_widowx_interfaces::srv::ArmMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trossen_widowx_interfaces::srv::ArmMode_Request>()
{
  return trossen_widowx_interfaces::srv::builder::Init_ArmMode_Request_arm_mode();
}

}  // namespace trossen_widowx_interfaces


namespace trossen_widowx_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArmMode_Response_success
{
public:
  Init_ArmMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::trossen_widowx_interfaces::srv::ArmMode_Response success(::trossen_widowx_interfaces::srv::ArmMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trossen_widowx_interfaces::srv::ArmMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trossen_widowx_interfaces::srv::ArmMode_Response>()
{
  return trossen_widowx_interfaces::srv::builder::Init_ArmMode_Response_success();
}

}  // namespace trossen_widowx_interfaces

#endif  // TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__ARM_MODE__BUILDER_HPP_
