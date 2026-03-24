// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from crospi_interfaces:msg/TaskParameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__TRAITS_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "crospi_interfaces/msg/detail/task_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'numbers'
#include "crospi_interfaces/msg/detail/number_parameters__traits.hpp"
// Member 'poses'
#include "crospi_interfaces/msg/detail/pose_parameters__traits.hpp"
// Member 'vector3s'
#include "crospi_interfaces/msg/detail/vector3_parameters__traits.hpp"

namespace crospi_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: numbers
  {
    if (msg.numbers.size() == 0) {
      out << "numbers: []";
    } else {
      out << "numbers: [";
      size_t pending_items = msg.numbers.size();
      for (auto item : msg.numbers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vector3s
  {
    if (msg.vector3s.size() == 0) {
      out << "vector3s: []";
    } else {
      out << "vector3s: [";
      size_t pending_items = msg.vector3s.size();
      for (auto item : msg.vector3s) {
        to_flow_style_yaml(item, out);
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
  const TaskParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: numbers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.numbers.size() == 0) {
      out << "numbers: []\n";
    } else {
      out << "numbers:\n";
      for (auto item : msg.numbers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: vector3s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vector3s.size() == 0) {
      out << "vector3s: []\n";
    } else {
      out << "vector3s:\n";
      for (auto item : msg.vector3s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskParameters & msg, bool use_flow_style = false)
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
  const crospi_interfaces::msg::TaskParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  crospi_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use crospi_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const crospi_interfaces::msg::TaskParameters & msg)
{
  return crospi_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<crospi_interfaces::msg::TaskParameters>()
{
  return "crospi_interfaces::msg::TaskParameters";
}

template<>
inline const char * name<crospi_interfaces::msg::TaskParameters>()
{
  return "crospi_interfaces/msg/TaskParameters";
}

template<>
struct has_fixed_size<crospi_interfaces::msg::TaskParameters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<crospi_interfaces::msg::TaskParameters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<crospi_interfaces::msg::TaskParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__TRAITS_HPP_
