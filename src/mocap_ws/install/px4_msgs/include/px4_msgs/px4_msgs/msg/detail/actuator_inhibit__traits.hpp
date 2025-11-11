// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ActuatorInhibit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/actuator_inhibit.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_INHIBIT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_INHIBIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/actuator_inhibit__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActuatorInhibit & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_sample
  {
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << ", ";
  }

  // member: inhibit_mask
  {
    if (msg.inhibit_mask.size() == 0) {
      out << "inhibit_mask: []";
    } else {
      out << "inhibit_mask: [";
      size_t pending_items = msg.inhibit_mask.size();
      for (auto item : msg.inhibit_mask) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: horizon_s
  {
    if (msg.horizon_s.size() == 0) {
      out << "horizon_s: []";
    } else {
      out << "horizon_s: [";
      size_t pending_items = msg.horizon_s.size();
      for (auto item : msg.horizon_s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: toggle_hz
  {
    if (msg.toggle_hz.size() == 0) {
      out << "toggle_hz: []";
    } else {
      out << "toggle_hz: [";
      size_t pending_items = msg.toggle_hz.size();
      for (auto item : msg.toggle_hz) {
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
  const ActuatorInhibit & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: inhibit_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inhibit_mask.size() == 0) {
      out << "inhibit_mask: []\n";
    } else {
      out << "inhibit_mask:\n";
      for (auto item : msg.inhibit_mask) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: horizon_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.horizon_s.size() == 0) {
      out << "horizon_s: []\n";
    } else {
      out << "horizon_s:\n";
      for (auto item : msg.horizon_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: toggle_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.toggle_hz.size() == 0) {
      out << "toggle_hz: []\n";
    } else {
      out << "toggle_hz:\n";
      for (auto item : msg.toggle_hz) {
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

inline std::string to_yaml(const ActuatorInhibit & msg, bool use_flow_style = false)
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

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::ActuatorInhibit & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::ActuatorInhibit & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::ActuatorInhibit>()
{
  return "px4_msgs::msg::ActuatorInhibit";
}

template<>
inline const char * name<px4_msgs::msg::ActuatorInhibit>()
{
  return "px4_msgs/msg/ActuatorInhibit";
}

template<>
struct has_fixed_size<px4_msgs::msg::ActuatorInhibit>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ActuatorInhibit>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ActuatorInhibit>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_INHIBIT__TRAITS_HPP_
