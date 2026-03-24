// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crospi_interfaces:srv/LuaCmd.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__BUILDER_HPP_
#define CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crospi_interfaces/srv/detail/lua_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crospi_interfaces
{

namespace srv
{

namespace builder
{

class Init_LuaCmd_Request_cmd
{
public:
  Init_LuaCmd_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crospi_interfaces::srv::LuaCmd_Request cmd(::crospi_interfaces::srv::LuaCmd_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::srv::LuaCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::srv::LuaCmd_Request>()
{
  return crospi_interfaces::srv::builder::Init_LuaCmd_Request_cmd();
}

}  // namespace crospi_interfaces


namespace crospi_interfaces
{

namespace srv
{

namespace builder
{

class Init_LuaCmd_Response_response
{
public:
  Init_LuaCmd_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crospi_interfaces::srv::LuaCmd_Response response(::crospi_interfaces::srv::LuaCmd_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crospi_interfaces::srv::LuaCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crospi_interfaces::srv::LuaCmd_Response>()
{
  return crospi_interfaces::srv::builder::Init_LuaCmd_Response_response();
}

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__BUILDER_HPP_
