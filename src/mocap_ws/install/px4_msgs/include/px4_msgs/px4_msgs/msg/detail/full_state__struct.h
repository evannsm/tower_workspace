// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FullState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/full_state.h"


#ifndef PX4_MSGS__MSG__DETAIL__FULL_STATE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FULL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
enum
{
  px4_msgs__msg__FullState__MESSAGE_VERSION = 0ul
};

/// Struct defined in msg/FullState in the package px4_msgs.
/**
  * Vehicle full state information data for ROS2-based control loops
 */
typedef struct px4_msgs__msg__FullState
{
  /// hrt_absolute_time()
  uint64_t timestamp;
  /// same timing as odometry: imu_sample.time_us
  uint64_t timestamp_sample;
  /// local frame is NED (same as vehicle_odometry/vehicle_local_position)
  /// (x,y,z) in meters, NED
  float position[3];
  /// (vx,vy,vz) in m/s, NED
  float velocity[3];
  /// (ax,ay,az) in m/s^2, NED (linear accel)
  float acceleration[3];
  /// quaternion (w,x,y,z): FRD body -> NED
  float q[4];
  /// (p,q,r) in rad/s, body frame (FRD)
  float angular_velocity[3];
} px4_msgs__msg__FullState;

// Struct for a sequence of px4_msgs__msg__FullState.
typedef struct px4_msgs__msg__FullState__Sequence
{
  px4_msgs__msg__FullState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FullState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FULL_STATE__STRUCT_H_
