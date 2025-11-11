// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mocap4r2_msgs:msg/FullState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mocap4r2_msgs/msg/detail/full_state__rosidl_typesupport_introspection_c.h"
#include "mocap4r2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mocap4r2_msgs/msg/detail/full_state__functions.h"
#include "mocap4r2_msgs/msg/detail/full_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap4r2_msgs__msg__FullState__init(message_memory);
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_fini_function(void * message_memory)
{
  mocap4r2_msgs__msg__FullState__fini(message_memory);
}

size_t mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__size_function__FullState__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__fetch_function__FullState__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__assign_function__FullState__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__size_function__FullState__velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__fetch_function__FullState__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__assign_function__FullState__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__size_function__FullState__acceleration(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__acceleration(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__acceleration(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__fetch_function__FullState__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__acceleration(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__assign_function__FullState__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__acceleration(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__size_function__FullState__q(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__q(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__q(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__fetch_function__FullState__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__q(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__assign_function__FullState__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__q(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__size_function__FullState__angular_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__angular_velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__angular_velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__fetch_function__FullState__angular_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__angular_velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__assign_function__FullState__angular_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__angular_velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_message_member_array[5] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__FullState, position),  // bytes offset in struct
    NULL,  // default value
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__size_function__FullState__position,  // size() function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__position,  // get_const(index) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__position,  // get(index) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__fetch_function__FullState__position,  // fetch(index, &value) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__assign_function__FullState__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__FullState, velocity),  // bytes offset in struct
    NULL,  // default value
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__size_function__FullState__velocity,  // size() function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__velocity,  // get_const(index) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__velocity,  // get(index) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__fetch_function__FullState__velocity,  // fetch(index, &value) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__assign_function__FullState__velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__FullState, acceleration),  // bytes offset in struct
    NULL,  // default value
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__size_function__FullState__acceleration,  // size() function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__acceleration,  // get_const(index) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__acceleration,  // get(index) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__fetch_function__FullState__acceleration,  // fetch(index, &value) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__assign_function__FullState__acceleration,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__FullState, q),  // bytes offset in struct
    NULL,  // default value
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__size_function__FullState__q,  // size() function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__q,  // get_const(index) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__q,  // get(index) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__fetch_function__FullState__q,  // fetch(index, &value) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__assign_function__FullState__q,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(mocap4r2_msgs__msg__FullState, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__size_function__FullState__angular_velocity,  // size() function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_const_function__FullState__angular_velocity,  // get_const(index) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__get_function__FullState__angular_velocity,  // get(index) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__fetch_function__FullState__angular_velocity,  // fetch(index, &value) function pointer
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__assign_function__FullState__angular_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_message_members = {
  "mocap4r2_msgs__msg",  // message namespace
  "FullState",  // message name
  5,  // number of fields
  sizeof(mocap4r2_msgs__msg__FullState),
  false,  // has_any_key_member_
  mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_message_member_array,  // message members
  mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_init_function,  // function to initialize message memory (memory has to be allocated)
  mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_message_type_support_handle = {
  0,
  &mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_message_members,
  get_message_typesupport_handle_function,
  &mocap4r2_msgs__msg__FullState__get_type_hash,
  &mocap4r2_msgs__msg__FullState__get_type_description,
  &mocap4r2_msgs__msg__FullState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap4r2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap4r2_msgs, msg, FullState)() {
  if (!mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_message_type_support_handle.typesupport_identifier) {
    mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mocap4r2_msgs__msg__FullState__rosidl_typesupport_introspection_c__FullState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
