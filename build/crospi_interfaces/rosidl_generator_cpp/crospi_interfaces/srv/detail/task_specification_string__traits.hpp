// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crospi_interfaces:srv/TaskSpecificationString.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_STRING__TRAITS_HPP_
#define CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_STRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crospi_interfaces/srv/detail/task_specification_string__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace crospi_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskSpecificationString_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: str
  {
    out << "str: ";
    rosidl_generator_traits::value_to_yaml(msg.str, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskSpecificationString_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: str
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "str: ";
    rosidl_generator_traits::value_to_yaml(msg.str, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskSpecificationString_Request & msg, bool use_flow_style = false)
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
  const crospi_interfaces::srv::TaskSpecificationString_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::srv::TaskSpecificationString_Request & msg)
{
  return crospi_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::srv::TaskSpecificationString_Request>()
{
  return "crospi_interfaces::srv::TaskSpecificationString_Request";
}

template<>
inline const char * name<crospi_interfaces::srv::TaskSpecificationString_Request>()
{
  return "crospi_interfaces/srv/TaskSpecificationString_Request";
}

template<>
struct has_fixed_size<crospi_interfaces::srv::TaskSpecificationString_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crospi_interfaces::srv::TaskSpecificationString_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crospi_interfaces::srv::TaskSpecificationString_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace crospi_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TaskSpecificationString_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskSpecificationString_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskSpecificationString_Response & msg, bool use_flow_style = false)
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
  const crospi_interfaces::srv::TaskSpecificationString_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::srv::TaskSpecificationString_Response & msg)
{
  return crospi_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::srv::TaskSpecificationString_Response>()
{
  return "crospi_interfaces::srv::TaskSpecificationString_Response";
}

template<>
inline const char * name<crospi_interfaces::srv::TaskSpecificationString_Response>()
{
  return "crospi_interfaces/srv/TaskSpecificationString_Response";
}

template<>
struct has_fixed_size<crospi_interfaces::srv::TaskSpecificationString_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<crospi_interfaces::srv::TaskSpecificationString_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<crospi_interfaces::srv::TaskSpecificationString_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<crospi_interfaces::srv::TaskSpecificationString>()
{
  return "crospi_interfaces::srv::TaskSpecificationString";
}

template<>
inline const char * name<crospi_interfaces::srv::TaskSpecificationString>()
{
  return "crospi_interfaces/srv/TaskSpecificationString";
}

template<>
struct has_fixed_size<crospi_interfaces::srv::TaskSpecificationString>
  : std::integral_constant<
    bool,
    has_fixed_size<crospi_interfaces::srv::TaskSpecificationString_Request>::value &&
    has_fixed_size<crospi_interfaces::srv::TaskSpecificationString_Response>::value
  >
{
};

template<>
struct has_bounded_size<crospi_interfaces::srv::TaskSpecificationString>
  : std::integral_constant<
    bool,
    has_bounded_size<crospi_interfaces::srv::TaskSpecificationString_Request>::value &&
    has_bounded_size<crospi_interfaces::srv::TaskSpecificationString_Response>::value
  >
{
};

template<>
struct is_service<crospi_interfaces::srv::TaskSpecificationString>
  : std::true_type
{
};

template<>
struct is_service_request<crospi_interfaces::srv::TaskSpecificationString_Request>
  : std::true_type
{
};

template<>
struct is_service_response<crospi_interfaces::srv::TaskSpecificationString_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_STRING__TRAITS_HPP_
