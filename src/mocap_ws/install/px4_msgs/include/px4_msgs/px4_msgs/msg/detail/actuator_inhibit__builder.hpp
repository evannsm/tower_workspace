// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorInhibit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/actuator_inhibit.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_INHIBIT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_INHIBIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/actuator_inhibit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorInhibit_toggle_hz
{
public:
  explicit Init_ActuatorInhibit_toggle_hz(::px4_msgs::msg::ActuatorInhibit & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorInhibit toggle_hz(::px4_msgs::msg::ActuatorInhibit::_toggle_hz_type arg)
  {
    msg_.toggle_hz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorInhibit msg_;
};

class Init_ActuatorInhibit_horizon_s
{
public:
  explicit Init_ActuatorInhibit_horizon_s(::px4_msgs::msg::ActuatorInhibit & msg)
  : msg_(msg)
  {}
  Init_ActuatorInhibit_toggle_hz horizon_s(::px4_msgs::msg::ActuatorInhibit::_horizon_s_type arg)
  {
    msg_.horizon_s = std::move(arg);
    return Init_ActuatorInhibit_toggle_hz(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorInhibit msg_;
};

class Init_ActuatorInhibit_inhibit_mask
{
public:
  explicit Init_ActuatorInhibit_inhibit_mask(::px4_msgs::msg::ActuatorInhibit & msg)
  : msg_(msg)
  {}
  Init_ActuatorInhibit_horizon_s inhibit_mask(::px4_msgs::msg::ActuatorInhibit::_inhibit_mask_type arg)
  {
    msg_.inhibit_mask = std::move(arg);
    return Init_ActuatorInhibit_horizon_s(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorInhibit msg_;
};

class Init_ActuatorInhibit_timestamp_sample
{
public:
  explicit Init_ActuatorInhibit_timestamp_sample(::px4_msgs::msg::ActuatorInhibit & msg)
  : msg_(msg)
  {}
  Init_ActuatorInhibit_inhibit_mask timestamp_sample(::px4_msgs::msg::ActuatorInhibit::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_ActuatorInhibit_inhibit_mask(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorInhibit msg_;
};

class Init_ActuatorInhibit_timestamp
{
public:
  Init_ActuatorInhibit_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorInhibit_timestamp_sample timestamp(::px4_msgs::msg::ActuatorInhibit::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorInhibit_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorInhibit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorInhibit>()
{
  return px4_msgs::msg::builder::Init_ActuatorInhibit_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_INHIBIT__BUILDER_HPP_
