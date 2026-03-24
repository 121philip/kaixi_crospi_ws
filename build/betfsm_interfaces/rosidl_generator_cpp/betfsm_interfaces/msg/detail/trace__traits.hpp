// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from betfsm_interfaces:msg/Trace.idl
// generated code does not contain a copyright notice

#ifndef BETFSM_INTERFACES__MSG__DETAIL__TRACE__TRAITS_HPP_
#define BETFSM_INTERFACES__MSG__DETAIL__TRACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "betfsm_interfaces/msg/detail/trace__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace betfsm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Trace & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: active_states
  {
    if (msg.active_states.size() == 0) {
      out << "active_states: []";
    } else {
      out << "active_states: [";
      size_t pending_items = msg.active_states.size();
      for (auto item : msg.active_states) {
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
  const Trace & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: active_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_states.size() == 0) {
      out << "active_states: []\n";
    } else {
      out << "active_states:\n";
      for (auto item : msg.active_states) {
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

inline std::string to_yaml(const Trace & msg, bool use_flow_style = false)
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

}  // namespace betfsm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use betfsm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const betfsm_interfaces::msg::Trace & msg,
  std::ostream & out, size_t indentation = 0)
{
  betfsm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use betfsm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const betfsm_interfaces::msg::Trace & msg)
{
  return betfsm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<betfsm_interfaces::msg::Trace>()
{
  return "betfsm_interfaces::msg::Trace";
}

template<>
inline const char * name<betfsm_interfaces::msg::Trace>()
{
  return "betfsm_interfaces/msg/Trace";
}

template<>
struct has_fixed_size<betfsm_interfaces::msg::Trace>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<betfsm_interfaces::msg::Trace>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<betfsm_interfaces::msg::Trace>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BETFSM_INTERFACES__MSG__DETAIL__TRACE__TRAITS_HPP_
