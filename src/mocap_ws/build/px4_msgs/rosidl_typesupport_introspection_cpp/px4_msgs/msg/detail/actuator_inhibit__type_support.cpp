// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/ActuatorInhibit.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/actuator_inhibit__functions.h"
#include "px4_msgs/msg/detail/actuator_inhibit__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ActuatorInhibit_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::ActuatorInhibit(_init);
}

void ActuatorInhibit_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::ActuatorInhibit *>(message_memory);
  typed_message->~ActuatorInhibit();
}

size_t size_function__ActuatorInhibit__inhibit_mask(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__ActuatorInhibit__inhibit_mask(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorInhibit__inhibit_mask(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorInhibit__inhibit_mask(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__ActuatorInhibit__inhibit_mask(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__ActuatorInhibit__inhibit_mask(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__ActuatorInhibit__inhibit_mask(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__ActuatorInhibit__horizon_s(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__ActuatorInhibit__horizon_s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorInhibit__horizon_s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorInhibit__horizon_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ActuatorInhibit__horizon_s(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ActuatorInhibit__horizon_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ActuatorInhibit__horizon_s(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__ActuatorInhibit__toggle_hz(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__ActuatorInhibit__toggle_hz(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorInhibit__toggle_hz(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorInhibit__toggle_hz(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ActuatorInhibit__toggle_hz(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ActuatorInhibit__toggle_hz(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ActuatorInhibit__toggle_hz(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActuatorInhibit_message_member_array[5] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ActuatorInhibit, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ActuatorInhibit, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "inhibit_mask",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ActuatorInhibit, inhibit_mask),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorInhibit__inhibit_mask,  // size() function pointer
    get_const_function__ActuatorInhibit__inhibit_mask,  // get_const(index) function pointer
    get_function__ActuatorInhibit__inhibit_mask,  // get(index) function pointer
    fetch_function__ActuatorInhibit__inhibit_mask,  // fetch(index, &value) function pointer
    assign_function__ActuatorInhibit__inhibit_mask,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "horizon_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ActuatorInhibit, horizon_s),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorInhibit__horizon_s,  // size() function pointer
    get_const_function__ActuatorInhibit__horizon_s,  // get_const(index) function pointer
    get_function__ActuatorInhibit__horizon_s,  // get(index) function pointer
    fetch_function__ActuatorInhibit__horizon_s,  // fetch(index, &value) function pointer
    assign_function__ActuatorInhibit__horizon_s,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "toggle_hz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ActuatorInhibit, toggle_hz),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorInhibit__toggle_hz,  // size() function pointer
    get_const_function__ActuatorInhibit__toggle_hz,  // get_const(index) function pointer
    get_function__ActuatorInhibit__toggle_hz,  // get(index) function pointer
    fetch_function__ActuatorInhibit__toggle_hz,  // fetch(index, &value) function pointer
    assign_function__ActuatorInhibit__toggle_hz,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActuatorInhibit_message_members = {
  "px4_msgs::msg",  // message namespace
  "ActuatorInhibit",  // message name
  5,  // number of fields
  sizeof(px4_msgs::msg::ActuatorInhibit),
  false,  // has_any_key_member_
  ActuatorInhibit_message_member_array,  // message members
  ActuatorInhibit_init_function,  // function to initialize message memory (memory has to be allocated)
  ActuatorInhibit_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActuatorInhibit_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActuatorInhibit_message_members,
  get_message_typesupport_handle_function,
  &px4_msgs__msg__ActuatorInhibit__get_type_hash,
  &px4_msgs__msg__ActuatorInhibit__get_type_description,
  &px4_msgs__msg__ActuatorInhibit__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::ActuatorInhibit>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::ActuatorInhibit_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, ActuatorInhibit)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::ActuatorInhibit_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
