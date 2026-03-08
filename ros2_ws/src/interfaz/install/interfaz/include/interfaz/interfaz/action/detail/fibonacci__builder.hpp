// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaz:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
#define INTERFAZ__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaz/action/detail/fibonacci__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Goal_orden
{
public:
  Init_Fibonacci_Goal_orden()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::Fibonacci_Goal orden(::interfaz::action::Fibonacci_Goal::_orden_type arg)
  {
    msg_.orden = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Fibonacci_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Fibonacci_Goal>()
{
  return interfaz::action::builder::Init_Fibonacci_Goal_orden();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Result_secuencia_final
{
public:
  Init_Fibonacci_Result_secuencia_final()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::Fibonacci_Result secuencia_final(::interfaz::action::Fibonacci_Result::_secuencia_final_type arg)
  {
    msg_.secuencia_final = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Fibonacci_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Fibonacci_Result>()
{
  return interfaz::action::builder::Init_Fibonacci_Result_secuencia_final();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Fibonacci_Feedback_secuencia_actual
{
public:
  Init_Fibonacci_Feedback_secuencia_actual()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::Fibonacci_Feedback secuencia_actual(::interfaz::action::Fibonacci_Feedback::_secuencia_actual_type arg)
  {
    msg_.secuencia_actual = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Fibonacci_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Fibonacci_Feedback>()
{
  return interfaz::action::builder::Init_Fibonacci_Feedback_secuencia_actual();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Request_goal
{
public:
  explicit Init_Fibonacci_SendGoal_Request_goal(::interfaz::action::Fibonacci_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaz::action::Fibonacci_SendGoal_Request goal(::interfaz::action::Fibonacci_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Fibonacci_SendGoal_Request msg_;
};

class Init_Fibonacci_SendGoal_Request_goal_id
{
public:
  Init_Fibonacci_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Request_goal goal_id(::interfaz::action::Fibonacci_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaz::action::Fibonacci_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Fibonacci_SendGoal_Request>()
{
  return interfaz::action::builder::Init_Fibonacci_SendGoal_Request_goal_id();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Fibonacci_SendGoal_Response_stamp
{
public:
  explicit Init_Fibonacci_SendGoal_Response_stamp(::interfaz::action::Fibonacci_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaz::action::Fibonacci_SendGoal_Response stamp(::interfaz::action::Fibonacci_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Fibonacci_SendGoal_Response msg_;
};

class Init_Fibonacci_SendGoal_Response_accepted
{
public:
  Init_Fibonacci_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_SendGoal_Response_stamp accepted(::interfaz::action::Fibonacci_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Fibonacci_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaz::action::Fibonacci_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Fibonacci_SendGoal_Response>()
{
  return interfaz::action::builder::Init_Fibonacci_SendGoal_Response_accepted();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Request_goal_id
{
public:
  Init_Fibonacci_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaz::action::Fibonacci_GetResult_Request goal_id(::interfaz::action::Fibonacci_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Fibonacci_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Fibonacci_GetResult_Request>()
{
  return interfaz::action::builder::Init_Fibonacci_GetResult_Request_goal_id();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Fibonacci_GetResult_Response_result
{
public:
  explicit Init_Fibonacci_GetResult_Response_result(::interfaz::action::Fibonacci_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaz::action::Fibonacci_GetResult_Response result(::interfaz::action::Fibonacci_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Fibonacci_GetResult_Response msg_;
};

class Init_Fibonacci_GetResult_Response_status
{
public:
  Init_Fibonacci_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_GetResult_Response_result status(::interfaz::action::Fibonacci_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Fibonacci_GetResult_Response_result(msg_);
  }

private:
  ::interfaz::action::Fibonacci_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Fibonacci_GetResult_Response>()
{
  return interfaz::action::builder::Init_Fibonacci_GetResult_Response_status();
}

}  // namespace interfaz


namespace interfaz
{

namespace action
{

namespace builder
{

class Init_Fibonacci_FeedbackMessage_feedback
{
public:
  explicit Init_Fibonacci_FeedbackMessage_feedback(::interfaz::action::Fibonacci_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaz::action::Fibonacci_FeedbackMessage feedback(::interfaz::action::Fibonacci_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::action::Fibonacci_FeedbackMessage msg_;
};

class Init_Fibonacci_FeedbackMessage_goal_id
{
public:
  Init_Fibonacci_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fibonacci_FeedbackMessage_feedback goal_id(::interfaz::action::Fibonacci_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Fibonacci_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaz::action::Fibonacci_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::action::Fibonacci_FeedbackMessage>()
{
  return interfaz::action::builder::Init_Fibonacci_FeedbackMessage_goal_id();
}

}  // namespace interfaz

#endif  // INTERFAZ__ACTION__DETAIL__FIBONACCI__BUILDER_HPP_
