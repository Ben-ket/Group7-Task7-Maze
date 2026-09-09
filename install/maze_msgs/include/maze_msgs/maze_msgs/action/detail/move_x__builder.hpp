// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from maze_msgs:action/MoveX.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "maze_msgs/action/move_x.hpp"


#ifndef MAZE_MSGS__ACTION__DETAIL__MOVE_X__BUILDER_HPP_
#define MAZE_MSGS__ACTION__DETAIL__MOVE_X__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "maze_msgs/action/detail/move_x__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace maze_msgs
{

namespace action
{

namespace builder
{

class Init_MoveX_Goal_speed
{
public:
  explicit Init_MoveX_Goal_speed(::maze_msgs::action::MoveX_Goal & msg)
  : msg_(msg)
  {}
  ::maze_msgs::action::MoveX_Goal speed(::maze_msgs::action::MoveX_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_msgs::action::MoveX_Goal msg_;
};

class Init_MoveX_Goal_distance
{
public:
  Init_MoveX_Goal_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveX_Goal_speed distance(::maze_msgs::action::MoveX_Goal::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_MoveX_Goal_speed(msg_);
  }

private:
  ::maze_msgs::action::MoveX_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_msgs::action::MoveX_Goal>()
{
  return maze_msgs::action::builder::Init_MoveX_Goal_distance();
}

}  // namespace maze_msgs


namespace maze_msgs
{

namespace action
{

namespace builder
{

class Init_MoveX_Result_total_distance_traveled
{
public:
  explicit Init_MoveX_Result_total_distance_traveled(::maze_msgs::action::MoveX_Result & msg)
  : msg_(msg)
  {}
  ::maze_msgs::action::MoveX_Result total_distance_traveled(::maze_msgs::action::MoveX_Result::_total_distance_traveled_type arg)
  {
    msg_.total_distance_traveled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_msgs::action::MoveX_Result msg_;
};

class Init_MoveX_Result_success
{
public:
  Init_MoveX_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveX_Result_total_distance_traveled success(::maze_msgs::action::MoveX_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveX_Result_total_distance_traveled(msg_);
  }

private:
  ::maze_msgs::action::MoveX_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_msgs::action::MoveX_Result>()
{
  return maze_msgs::action::builder::Init_MoveX_Result_success();
}

}  // namespace maze_msgs


namespace maze_msgs
{

namespace action
{

namespace builder
{

class Init_MoveX_Feedback_current_distance
{
public:
  Init_MoveX_Feedback_current_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::maze_msgs::action::MoveX_Feedback current_distance(::maze_msgs::action::MoveX_Feedback::_current_distance_type arg)
  {
    msg_.current_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_msgs::action::MoveX_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_msgs::action::MoveX_Feedback>()
{
  return maze_msgs::action::builder::Init_MoveX_Feedback_current_distance();
}

}  // namespace maze_msgs


namespace maze_msgs
{

namespace action
{

namespace builder
{

class Init_MoveX_SendGoal_Request_goal
{
public:
  explicit Init_MoveX_SendGoal_Request_goal(::maze_msgs::action::MoveX_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::maze_msgs::action::MoveX_SendGoal_Request goal(::maze_msgs::action::MoveX_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_msgs::action::MoveX_SendGoal_Request msg_;
};

class Init_MoveX_SendGoal_Request_goal_id
{
public:
  Init_MoveX_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveX_SendGoal_Request_goal goal_id(::maze_msgs::action::MoveX_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveX_SendGoal_Request_goal(msg_);
  }

private:
  ::maze_msgs::action::MoveX_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_msgs::action::MoveX_SendGoal_Request>()
{
  return maze_msgs::action::builder::Init_MoveX_SendGoal_Request_goal_id();
}

}  // namespace maze_msgs


namespace maze_msgs
{

namespace action
{

namespace builder
{

class Init_MoveX_SendGoal_Response_stamp
{
public:
  explicit Init_MoveX_SendGoal_Response_stamp(::maze_msgs::action::MoveX_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::maze_msgs::action::MoveX_SendGoal_Response stamp(::maze_msgs::action::MoveX_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_msgs::action::MoveX_SendGoal_Response msg_;
};

class Init_MoveX_SendGoal_Response_accepted
{
public:
  Init_MoveX_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveX_SendGoal_Response_stamp accepted(::maze_msgs::action::MoveX_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveX_SendGoal_Response_stamp(msg_);
  }

private:
  ::maze_msgs::action::MoveX_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_msgs::action::MoveX_SendGoal_Response>()
{
  return maze_msgs::action::builder::Init_MoveX_SendGoal_Response_accepted();
}

}  // namespace maze_msgs


namespace maze_msgs
{

namespace action
{

namespace builder
{

class Init_MoveX_SendGoal_Event_response
{
public:
  explicit Init_MoveX_SendGoal_Event_response(::maze_msgs::action::MoveX_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::maze_msgs::action::MoveX_SendGoal_Event response(::maze_msgs::action::MoveX_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_msgs::action::MoveX_SendGoal_Event msg_;
};

class Init_MoveX_SendGoal_Event_request
{
public:
  explicit Init_MoveX_SendGoal_Event_request(::maze_msgs::action::MoveX_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MoveX_SendGoal_Event_response request(::maze_msgs::action::MoveX_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveX_SendGoal_Event_response(msg_);
  }

private:
  ::maze_msgs::action::MoveX_SendGoal_Event msg_;
};

class Init_MoveX_SendGoal_Event_info
{
public:
  Init_MoveX_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveX_SendGoal_Event_request info(::maze_msgs::action::MoveX_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveX_SendGoal_Event_request(msg_);
  }

private:
  ::maze_msgs::action::MoveX_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_msgs::action::MoveX_SendGoal_Event>()
{
  return maze_msgs::action::builder::Init_MoveX_SendGoal_Event_info();
}

}  // namespace maze_msgs


namespace maze_msgs
{

namespace action
{

namespace builder
{

class Init_MoveX_GetResult_Request_goal_id
{
public:
  Init_MoveX_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::maze_msgs::action::MoveX_GetResult_Request goal_id(::maze_msgs::action::MoveX_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_msgs::action::MoveX_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_msgs::action::MoveX_GetResult_Request>()
{
  return maze_msgs::action::builder::Init_MoveX_GetResult_Request_goal_id();
}

}  // namespace maze_msgs


namespace maze_msgs
{

namespace action
{

namespace builder
{

class Init_MoveX_GetResult_Response_result
{
public:
  explicit Init_MoveX_GetResult_Response_result(::maze_msgs::action::MoveX_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::maze_msgs::action::MoveX_GetResult_Response result(::maze_msgs::action::MoveX_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_msgs::action::MoveX_GetResult_Response msg_;
};

class Init_MoveX_GetResult_Response_status
{
public:
  Init_MoveX_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveX_GetResult_Response_result status(::maze_msgs::action::MoveX_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveX_GetResult_Response_result(msg_);
  }

private:
  ::maze_msgs::action::MoveX_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_msgs::action::MoveX_GetResult_Response>()
{
  return maze_msgs::action::builder::Init_MoveX_GetResult_Response_status();
}

}  // namespace maze_msgs


namespace maze_msgs
{

namespace action
{

namespace builder
{

class Init_MoveX_GetResult_Event_response
{
public:
  explicit Init_MoveX_GetResult_Event_response(::maze_msgs::action::MoveX_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::maze_msgs::action::MoveX_GetResult_Event response(::maze_msgs::action::MoveX_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_msgs::action::MoveX_GetResult_Event msg_;
};

class Init_MoveX_GetResult_Event_request
{
public:
  explicit Init_MoveX_GetResult_Event_request(::maze_msgs::action::MoveX_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MoveX_GetResult_Event_response request(::maze_msgs::action::MoveX_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveX_GetResult_Event_response(msg_);
  }

private:
  ::maze_msgs::action::MoveX_GetResult_Event msg_;
};

class Init_MoveX_GetResult_Event_info
{
public:
  Init_MoveX_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveX_GetResult_Event_request info(::maze_msgs::action::MoveX_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveX_GetResult_Event_request(msg_);
  }

private:
  ::maze_msgs::action::MoveX_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_msgs::action::MoveX_GetResult_Event>()
{
  return maze_msgs::action::builder::Init_MoveX_GetResult_Event_info();
}

}  // namespace maze_msgs


namespace maze_msgs
{

namespace action
{

namespace builder
{

class Init_MoveX_FeedbackMessage_feedback
{
public:
  explicit Init_MoveX_FeedbackMessage_feedback(::maze_msgs::action::MoveX_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::maze_msgs::action::MoveX_FeedbackMessage feedback(::maze_msgs::action::MoveX_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_msgs::action::MoveX_FeedbackMessage msg_;
};

class Init_MoveX_FeedbackMessage_goal_id
{
public:
  Init_MoveX_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveX_FeedbackMessage_feedback goal_id(::maze_msgs::action::MoveX_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveX_FeedbackMessage_feedback(msg_);
  }

private:
  ::maze_msgs::action::MoveX_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_msgs::action::MoveX_FeedbackMessage>()
{
  return maze_msgs::action::builder::Init_MoveX_FeedbackMessage_goal_id();
}

}  // namespace maze_msgs

#endif  // MAZE_MSGS__ACTION__DETAIL__MOVE_X__BUILDER_HPP_
