// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from betfsm_interfaces:msg/Trace.idl
// generated code does not contain a copyright notice

#ifndef BETFSM_INTERFACES__MSG__DETAIL__TRACE__BUILDER_HPP_
#define BETFSM_INTERFACES__MSG__DETAIL__TRACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "betfsm_interfaces/msg/detail/trace__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace betfsm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Trace_active_states
{
public:
  explicit Init_Trace_active_states(::betfsm_interfaces::msg::Trace & msg)
  : msg_(msg)
  {}
  ::betfsm_interfaces::msg::Trace active_states(::betfsm_interfaces::msg::Trace::_active_states_type arg)
  {
    msg_.active_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::betfsm_interfaces::msg::Trace msg_;
};

class Init_Trace_stamp
{
public:
  Init_Trace_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trace_active_states stamp(::betfsm_interfaces::msg::Trace::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Trace_active_states(msg_);
  }

private:
  ::betfsm_interfaces::msg::Trace msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::betfsm_interfaces::msg::Trace>()
{
  return betfsm_interfaces::msg::builder::Init_Trace_stamp();
}

}  // namespace betfsm_interfaces

#endif  // BETFSM_INTERFACES__MSG__DETAIL__TRACE__BUILDER_HPP_
