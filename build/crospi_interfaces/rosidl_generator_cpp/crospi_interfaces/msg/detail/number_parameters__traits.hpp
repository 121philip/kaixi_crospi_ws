// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crospi_interfaces:msg/NumberParameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__NUMBER_PARAMETERS__TRAITS_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__NUMBER_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crospi_interfaces/msg/detail/number_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace crospi_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NumberParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NumberParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NumberParameters & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace crospi_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use crospi_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const crospi_interfaces::msg::NumberParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::msg::NumberParameters & msg)
{
  return crospi_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::msg::NumberParameters>()
{
  return "crospi_interfaces::msg::NumberParameters";
}

template<>
inline const char * name<crospi_interfaces::msg::NumberParameters>()
{
  return "crospi_interfaces/msg/NumberParameters";
}

template<>
struct has_fixed_size<crospi_interfaces::msg::NumberParameters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crospi_interfaces::msg::NumberParameters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crospi_interfaces::msg::NumberParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CROSPI_INTERFACES__MSG__DETAIL__NUMBER_PARAMETERS__TRAITS_HPP_
