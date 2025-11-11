// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ActuatorInhibit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/actuator_inhibit.h"


#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_INHIBIT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_INHIBIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ActuatorInhibit in the package px4_msgs.
/**
  * Motor inhibition message
 */
typedef struct px4_msgs__msg__ActuatorInhibit
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// 1=inhibit, 0=allow, rest unused if N<12
  uint8_t inhibit_mask[12];
  /// per-motor; NaN/0 => indefinite
  float horizon_s[12];
  /// per-motor; 0 => steady
  float toggle_hz[12];
} px4_msgs__msg__ActuatorInhibit;

// Struct for a sequence of px4_msgs__msg__ActuatorInhibit.
typedef struct px4_msgs__msg__ActuatorInhibit__Sequence
{
  px4_msgs__msg__ActuatorInhibit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ActuatorInhibit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_INHIBIT__STRUCT_H_
