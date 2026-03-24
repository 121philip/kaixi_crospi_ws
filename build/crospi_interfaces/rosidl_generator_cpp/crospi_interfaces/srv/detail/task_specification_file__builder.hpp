// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:srv/TaskSpecificationFile.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_FILE__BUILDER_HPP_
#define CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_FILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/srv/detail/task_specification_file__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace srv
{

namespace builder
{

class Init_TaskSpecificationFile_Request_file_path
{
public:
  Init_TaskSpecificationFile_Request_file_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crospi_interfaces::srv::TaskSpecificationFile_Request file_path(::crospi_interfaces::srv::TaskSpecificationFile_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::srv::TaskSpecificationFile_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::srv::TaskSpecificationFile_Request>()
{
  return crospi_interfaces::srv::builder::Init_TaskSpecificationFile_Request_file_path();
}

}  // namespace crospi_interfaces


namespace crospi_interfaces
{

namespace srv
{

namespace builder
{

class Init_TaskSpecificationFile_Response_success
{
public:
  Init_TaskSpecificationFile_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crospi_interfaces::srv::TaskSpecificationFile_Response success(::crospi_interfaces::srv::TaskSpecificationFile_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::srv::TaskSpecificationFile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::srv::TaskSpecificationFile_Response>()
{
  return crospi_interfaces::srv::builder::Init_TaskSpecificationFile_Response_success();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_FILE__BUILDER_HPP_
