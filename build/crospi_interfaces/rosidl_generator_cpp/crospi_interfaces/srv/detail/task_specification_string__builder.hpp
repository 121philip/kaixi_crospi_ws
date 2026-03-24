// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:srv/TaskSpecificationString.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_STRING__BUILDER_HPP_
#define CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/srv/detail/task_specification_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace srv
{

namespace builder
{

class Init_TaskSpecificationString_Request_str
{
public:
  Init_TaskSpecificationString_Request_str()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crospi_interfaces::srv::TaskSpecificationString_Request str(::crospi_interfaces::srv::TaskSpecificationString_Request::_str_type arg)
  {
    msg_.str = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::srv::TaskSpecificationString_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::srv::TaskSpecificationString_Request>()
{
  return crospi_interfaces::srv::builder::Init_TaskSpecificationString_Request_str();
}

}  // namespace crospi_interfaces


namespace crospi_interfaces
{

namespace srv
{

namespace builder
{

class Init_TaskSpecificationString_Response_success
{
public:
  Init_TaskSpecificationString_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crospi_interfaces::srv::TaskSpecificationString_Response success(::crospi_interfaces::srv::TaskSpecificationString_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::srv::TaskSpecificationString_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::srv::TaskSpecificationString_Response>()
{
  return crospi_interfaces::srv::builder::Init_TaskSpecificationString_Response_success();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_STRING__BUILDER_HPP_
