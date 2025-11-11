// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/FullState.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/full_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__FullState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x3b, 0x1b, 0x8d, 0xa6, 0x0c, 0xb5, 0xe0,
      0xa5, 0x11, 0x1f, 0xc8, 0x15, 0x3c, 0xcf, 0x40,
      0xec, 0x31, 0xad, 0x4e, 0xef, 0x10, 0x1a, 0xd7,
      0xeb, 0x0c, 0x25, 0xe9, 0x15, 0x9d, 0xe0, 0x28,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__FullState__TYPE_NAME[] = "px4_msgs/msg/FullState";

// Define type names, field names, and default values
static char px4_msgs__msg__FullState__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__FullState__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__FullState__FIELD_NAME__position[] = "position";
static char px4_msgs__msg__FullState__FIELD_NAME__velocity[] = "velocity";
static char px4_msgs__msg__FullState__FIELD_NAME__acceleration[] = "acceleration";
static char px4_msgs__msg__FullState__FIELD_NAME__q[] = "q";
static char px4_msgs__msg__FullState__FIELD_NAME__angular_velocity[] = "angular_velocity";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__FullState__FIELDS[] = {
  {
    {px4_msgs__msg__FullState__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FullState__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FullState__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FullState__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FullState__FIELD_NAME__acceleration, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FullState__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__FullState__FIELD_NAME__angular_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__FullState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__FullState__TYPE_NAME, 22, 22},
      {px4_msgs__msg__FullState__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Vehicle full state information data for ROS2-based control loops\n"
  "uint32 MESSAGE_VERSION = 0\n"
  "\n"
  "uint64 timestamp              # hrt_absolute_time()\n"
  "uint64 timestamp_sample       # same timing as odometry: imu_sample.time_us\n"
  "\n"
  "# local frame is NED (same as vehicle_odometry/vehicle_local_position)\n"
  "float32[3] position           # (x,y,z) in meters, NED\n"
  "float32[3] velocity           # (vx,vy,vz) in m/s, NED\n"
  "float32[3] acceleration       # (ax,ay,az) in m/s^2, NED (linear accel)\n"
  "float32[4] q                  # quaternion (w,x,y,z): FRD body -> NED\n"
  "float32[3] angular_velocity   # (p,q,r) in rad/s, body frame (FRD)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__FullState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__FullState__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 613, 613},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__FullState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__FullState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
