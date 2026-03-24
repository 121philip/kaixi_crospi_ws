// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crospi_interfaces:srv/LuaCmd.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__TRAITS_HPP_
#define CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crospi_interfaces/srv/detail/lua_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace crospi_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LuaCmd_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd
  {
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LuaCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LuaCmd_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::srv::LuaCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::srv::LuaCmd_Request & msg)
{
  return crospi_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::srv::LuaCmd_Request>()
{
  return "crospi_interfaces::srv::LuaCmd_Request";
}

template<>
inline const char * name<crospi_interfaces::srv::LuaCmd_Request>()
{
  return "crospi_interfaces/srv/LuaCmd_Request";
}

template<>
struct has_fixed_size<crospi_interfaces::srv::LuaCmd_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crospi_interfaces::srv::LuaCmd_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crospi_interfaces::srv::LuaCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace crospi_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LuaCmd_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LuaCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LuaCmd_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::srv::LuaCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::srv::LuaCmd_Response & msg)
{
  return crospi_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::srv::LuaCmd_Response>()
{
  return "crospi_interfaces::srv::LuaCmd_Response";
}

template<>
inline const char * name<crospi_interfaces::srv::LuaCmd_Response>()
{
  return "crospi_interfaces/srv/LuaCmd_Response";
}

template<>
struct has_fixed_size<crospi_interfaces::srv::LuaCmd_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crospi_interfaces::srv::LuaCmd_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crospi_interfaces::srv::LuaCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crospi_interfaces::srv::LuaCmd>()
{
  return "crospi_interfaces::srv::LuaCmd";
}

template<>
inline const char * name<crospi_interfaces::srv::LuaCmd>()
{
  return "crospi_interfaces/srv/LuaCmd";
}

template<>
struct has_fixed_size<crospi_interfaces::srv::LuaCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<crospi_interfaces::srv::LuaCmd_Request>::value &&
    has_fixed_size<crospi_interfaces::srv::LuaCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<crospi_interfaces::srv::LuaCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<crospi_interfaces::srv::LuaCmd_Request>::value &&
    has_bounded_size<crospi_interfaces::srv::LuaCmd_Response>::value
  >
{
};

template<>
struct is_service<crospi_interfaces::srv::LuaCmd>
  : std::true_type
{
};

template<>
struct is_service_request<crospi_interfaces::srv::LuaCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crospi_interfaces::srv::LuaCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__TRAITS_HPP_
