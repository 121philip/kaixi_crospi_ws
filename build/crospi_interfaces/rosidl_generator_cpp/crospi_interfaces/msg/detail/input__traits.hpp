// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crospi_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__INPUT__TRAITS_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crospi_interfaces/msg/detail/input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace crospi_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Input & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Input & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Input & msg, bool use_flow_style = false)
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
  const crospi_interfaces::msg::Input & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::msg::Input & msg)
{
  return crospi_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::msg::Input>()
{
  return "crospi_interfaces::msg::Input";
}

template<>
inline const char * name<crospi_interfaces::msg::Input>()
{
  return "crospi_interfaces/msg/Input";
}

template<>
struct has_fixed_size<crospi_interfaces::msg::Input>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crospi_interfaces::msg::Input>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crospi_interfaces::msg::Input>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CROSPI_INTERFACES__MSG__DETAIL__INPUT__TRAITS_HPP_
