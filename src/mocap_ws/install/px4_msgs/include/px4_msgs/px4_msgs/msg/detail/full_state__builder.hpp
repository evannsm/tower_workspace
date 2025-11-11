// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FullState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/full_state.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__FULL_STATE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FULL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/full_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FullState_angular_velocity
{
public:
  explicit Init_FullState_angular_velocity(::px4_msgs::msg::FullState & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FullState angular_velocity(::px4_msgs::msg::FullState::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FullState msg_;
};

class Init_FullState_q
{
public:
  explicit Init_FullState_q(::px4_msgs::msg::FullState & msg)
  : msg_(msg)
  {}
  Init_FullState_angular_velocity q(::px4_msgs::msg::FullState::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_FullState_angular_velocity(msg_);
  }

private:
  ::px4_msgs::msg::FullState msg_;
};

class Init_FullState_acceleration
{
public:
  explicit Init_FullState_acceleration(::px4_msgs::msg::FullState & msg)
  : msg_(msg)
  {}
  Init_FullState_q acceleration(::px4_msgs::msg::FullState::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_FullState_q(msg_);
  }

private:
  ::px4_msgs::msg::FullState msg_;
};

class Init_FullState_velocity
{
public:
  explicit Init_FullState_velocity(::px4_msgs::msg::FullState & msg)
  : msg_(msg)
  {}
  Init_FullState_acceleration velocity(::px4_msgs::msg::FullState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_FullState_acceleration(msg_);
  }

private:
  ::px4_msgs::msg::FullState msg_;
};

class Init_FullState_position
{
public:
  explicit Init_FullState_position(::px4_msgs::msg::FullState & msg)
  : msg_(msg)
  {}
  Init_FullState_velocity position(::px4_msgs::msg::FullState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_FullState_velocity(msg_);
  }

private:
  ::px4_msgs::msg::FullState msg_;
};

class Init_FullState_timestamp_sample
{
public:
  explicit Init_FullState_timestamp_sample(::px4_msgs::msg::FullState & msg)
  : msg_(msg)
  {}
  Init_FullState_position timestamp_sample(::px4_msgs::msg::FullState::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_FullState_position(msg_);
  }

private:
  ::px4_msgs::msg::FullState msg_;
};

class Init_FullState_timestamp
{
public:
  Init_FullState_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullState_timestamp_sample timestamp(::px4_msgs::msg::FullState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FullState_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::FullState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FullState>()
{
  return px4_msgs::msg::builder::Init_FullState_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FULL_STATE__BUILDER_HPP_
