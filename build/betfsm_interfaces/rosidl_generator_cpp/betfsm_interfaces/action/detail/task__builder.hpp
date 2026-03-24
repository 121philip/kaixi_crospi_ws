// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from betfsm_interfaces:action/Task.idl
// generated code does not contain a copyright notice

#ifndef BETFSM_INTERFACES__ACTION__DETAIL__TASK__BUILDER_HPP_
#define BETFSM_INTERFACES__ACTION__DETAIL__TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "betfsm_interfaces/action/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace betfsm_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_Goal_parameters
{
public:
  explicit Init_Task_Goal_parameters(::betfsm_interfaces::action::Task_Goal & msg)
  : msg_(msg)
  {}
  ::betfsm_interfaces::action::Task_Goal parameters(::betfsm_interfaces::action::Task_Goal::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_Goal msg_;
};

class Init_Task_Goal_task
{
public:
  Init_Task_Goal_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_Goal_parameters task(::betfsm_interfaces::action::Task_Goal::_task_type arg)
  {
    msg_.task = std::move(arg);
    return Init_Task_Goal_parameters(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::betfsm_interfaces::action::Task_Goal>()
{
  return betfsm_interfaces::action::builder::Init_Task_Goal_task();
}

}  // namespace betfsm_interfaces


namespace betfsm_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_Result_parameters
{
public:
  explicit Init_Task_Result_parameters(::betfsm_interfaces::action::Task_Result & msg)
  : msg_(msg)
  {}
  ::betfsm_interfaces::action::Task_Result parameters(::betfsm_interfaces::action::Task_Result::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_Result msg_;
};

class Init_Task_Result_outcome
{
public:
  Init_Task_Result_outcome()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_Result_parameters outcome(::betfsm_interfaces::action::Task_Result::_outcome_type arg)
  {
    msg_.outcome = std::move(arg);
    return Init_Task_Result_parameters(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::betfsm_interfaces::action::Task_Result>()
{
  return betfsm_interfaces::action::builder::Init_Task_Result_outcome();
}

}  // namespace betfsm_interfaces


namespace betfsm_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_Feedback_parameters
{
public:
  explicit Init_Task_Feedback_parameters(::betfsm_interfaces::action::Task_Feedback & msg)
  : msg_(msg)
  {}
  ::betfsm_interfaces::action::Task_Feedback parameters(::betfsm_interfaces::action::Task_Feedback::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_Feedback msg_;
};

class Init_Task_Feedback_state
{
public:
  Init_Task_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_Feedback_parameters state(::betfsm_interfaces::action::Task_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_Task_Feedback_parameters(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::betfsm_interfaces::action::Task_Feedback>()
{
  return betfsm_interfaces::action::builder::Init_Task_Feedback_state();
}

}  // namespace betfsm_interfaces


namespace betfsm_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_SendGoal_Request_goal
{
public:
  explicit Init_Task_SendGoal_Request_goal(::betfsm_interfaces::action::Task_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::betfsm_interfaces::action::Task_SendGoal_Request goal(::betfsm_interfaces::action::Task_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_SendGoal_Request msg_;
};

class Init_Task_SendGoal_Request_goal_id
{
public:
  Init_Task_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_SendGoal_Request_goal goal_id(::betfsm_interfaces::action::Task_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Task_SendGoal_Request_goal(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::betfsm_interfaces::action::Task_SendGoal_Request>()
{
  return betfsm_interfaces::action::builder::Init_Task_SendGoal_Request_goal_id();
}

}  // namespace betfsm_interfaces


namespace betfsm_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_SendGoal_Response_stamp
{
public:
  explicit Init_Task_SendGoal_Response_stamp(::betfsm_interfaces::action::Task_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::betfsm_interfaces::action::Task_SendGoal_Response stamp(::betfsm_interfaces::action::Task_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_SendGoal_Response msg_;
};

class Init_Task_SendGoal_Response_accepted
{
public:
  Init_Task_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_SendGoal_Response_stamp accepted(::betfsm_interfaces::action::Task_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Task_SendGoal_Response_stamp(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::betfsm_interfaces::action::Task_SendGoal_Response>()
{
  return betfsm_interfaces::action::builder::Init_Task_SendGoal_Response_accepted();
}

}  // namespace betfsm_interfaces


namespace betfsm_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_GetResult_Request_goal_id
{
public:
  Init_Task_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::betfsm_interfaces::action::Task_GetResult_Request goal_id(::betfsm_interfaces::action::Task_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::betfsm_interfaces::action::Task_GetResult_Request>()
{
  return betfsm_interfaces::action::builder::Init_Task_GetResult_Request_goal_id();
}

}  // namespace betfsm_interfaces


namespace betfsm_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_GetResult_Response_result
{
public:
  explicit Init_Task_GetResult_Response_result(::betfsm_interfaces::action::Task_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::betfsm_interfaces::action::Task_GetResult_Response result(::betfsm_interfaces::action::Task_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_GetResult_Response msg_;
};

class Init_Task_GetResult_Response_status
{
public:
  Init_Task_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_GetResult_Response_result status(::betfsm_interfaces::action::Task_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Task_GetResult_Response_result(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::betfsm_interfaces::action::Task_GetResult_Response>()
{
  return betfsm_interfaces::action::builder::Init_Task_GetResult_Response_status();
}

}  // namespace betfsm_interfaces


namespace betfsm_interfaces
{

namespace action
{

namespace builder
{

class Init_Task_FeedbackMessage_feedback
{
public:
  explicit Init_Task_FeedbackMessage_feedback(::betfsm_interfaces::action::Task_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::betfsm_interfaces::action::Task_FeedbackMessage feedback(::betfsm_interfaces::action::Task_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_FeedbackMessage msg_;
};

class Init_Task_FeedbackMessage_goal_id
{
public:
  Init_Task_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_FeedbackMessage_feedback goal_id(::betfsm_interfaces::action::Task_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Task_FeedbackMessage_feedback(msg_);
  }

private:
  ::betfsm_interfaces::action::Task_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::betfsm_interfaces::action::Task_FeedbackMessage>()
{
  return betfsm_interfaces::action::builder::Init_Task_FeedbackMessage_goal_id();
}

}  // namespace betfsm_interfaces

#endif  // BETFSM_INTERFACES__ACTION__DETAIL__TASK__BUILDER_HPP_
