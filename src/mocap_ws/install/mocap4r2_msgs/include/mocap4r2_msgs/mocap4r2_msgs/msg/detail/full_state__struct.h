// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap4r2_msgs:msg/FullState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mocap4r2_msgs/msg/full_state.h"


#ifndef MOCAP4R2_MSGS__MSG__DETAIL__FULL_STATE__STRUCT_H_
#define MOCAP4R2_MSGS__MSG__DETAIL__FULL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/FullState in the package mocap4r2_msgs.
typedef struct mocap4r2_msgs__msg__FullState
{
  /// Position in meters.               Frame of reference defined by local_frame.
  float position[3];
  /// Linear velocity in meters/second. Frame of reference defined by local_frame.
  float velocity[3];
  /// Linear accel in meters/second^2.  Frame of reference defined by local_frame.
  float acceleration[3];
  /// Quaternion rotation from FRD body frame to reference frame.
  float q[4];
  /// Angular velocity in radians/second. Frame of reference defined by local_frame.
  float angular_velocity[3];
} mocap4r2_msgs__msg__FullState;

// Struct for a sequence of mocap4r2_msgs__msg__FullState.
typedef struct mocap4r2_msgs__msg__FullState__Sequence
{
  mocap4r2_msgs__msg__FullState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap4r2_msgs__msg__FullState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP4R2_MSGS__MSG__DETAIL__FULL_STATE__STRUCT_H_
