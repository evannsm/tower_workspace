// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap4r2_msgs:msg/FullState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_msgs/msg/full_state.hpp"


#ifndef MOCAP4R2_MSGS__MSG__DETAIL__FULL_STATE__BUILDER_HPP_
#define MOCAP4R2_MSGS__MSG__DETAIL__FULL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mocap4r2_msgs/msg/detail/full_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mocap4r2_msgs
{

namespace msg
{

namespace builder
{

class Init_FullState_angular_velocity
{
public:
  explicit Init_FullState_angular_velocity(::mocap4r2_msgs::msg::FullState & msg)
  : msg_(msg)
  {}
  ::mocap4r2_msgs::msg::FullState angular_velocity(::mocap4r2_msgs::msg::FullState::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap4r2_msgs::msg::FullState msg_;
};

class Init_FullState_q
{
public:
  explicit Init_FullState_q(::mocap4r2_msgs::msg::FullState & msg)
  : msg_(msg)
  {}
  Init_FullState_angular_velocity q(::mocap4r2_msgs::msg::FullState::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_FullState_angular_velocity(msg_);
  }

private:
  ::mocap4r2_msgs::msg::FullState msg_;
};

class Init_FullState_acceleration
{
public:
  explicit Init_FullState_acceleration(::mocap4r2_msgs::msg::FullState & msg)
  : msg_(msg)
  {}
  Init_FullState_q acceleration(::mocap4r2_msgs::msg::FullState::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_FullState_q(msg_);
  }

private:
  ::mocap4r2_msgs::msg::FullState msg_;
};

class Init_FullState_velocity
{
public:
  explicit Init_FullState_velocity(::mocap4r2_msgs::msg::FullState & msg)
  : msg_(msg)
  {}
  Init_FullState_acceleration velocity(::mocap4r2_msgs::msg::FullState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_FullState_acceleration(msg_);
  }

private:
  ::mocap4r2_msgs::msg::FullState msg_;
};

class Init_FullState_position
{
public:
  Init_FullState_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullState_velocity position(::mocap4r2_msgs::msg::FullState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_FullState_velocity(msg_);
  }

private:
  ::mocap4r2_msgs::msg::FullState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap4r2_msgs::msg::FullState>()
{
  return mocap4r2_msgs::msg::builder::Init_FullState_position();
}

}  // namespace mocap4r2_msgs

#endif  // MOCAP4R2_MSGS__MSG__DETAIL__FULL_STATE__BUILDER_HPP_
