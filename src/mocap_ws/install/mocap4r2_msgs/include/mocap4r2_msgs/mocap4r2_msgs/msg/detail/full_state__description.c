// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mocap4r2_msgs:msg/FullState.idl
// generated code does not contain a copyright notice

#include "mocap4r2_msgs/msg/detail/full_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mocap4r2_msgs
const rosidl_type_hash_t *
mocap4r2_msgs__msg__FullState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x7a, 0x07, 0xc5, 0x2c, 0xbe, 0xfc, 0x19,
      0x5d, 0xcc, 0x97, 0x09, 0x5c, 0xf5, 0x95, 0xa8,
      0xfe, 0x4f, 0x67, 0x80, 0xee, 0xef, 0x65, 0x79,
      0xb9, 0x0b, 0x21, 0x62, 0x1d, 0xaa, 0x79, 0xb7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mocap4r2_msgs__msg__FullState__TYPE_NAME[] = "mocap4r2_msgs/msg/FullState";

// Define type names, field names, and default values
static char mocap4r2_msgs__msg__FullState__FIELD_NAME__position[] = "position";
static char mocap4r2_msgs__msg__FullState__FIELD_NAME__velocity[] = "velocity";
static char mocap4r2_msgs__msg__FullState__FIELD_NAME__acceleration[] = "acceleration";
static char mocap4r2_msgs__msg__FullState__FIELD_NAME__q[] = "q";
static char mocap4r2_msgs__msg__FullState__FIELD_NAME__angular_velocity[] = "angular_velocity";

static rosidl_runtime_c__type_description__Field mocap4r2_msgs__msg__FullState__FIELDS[] = {
  {
    {mocap4r2_msgs__msg__FullState__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__FullState__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__FullState__FIELD_NAME__acceleration, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__FullState__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mocap4r2_msgs__msg__FullState__FIELD_NAME__angular_velocity, 16, 16},
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
mocap4r2_msgs__msg__FullState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mocap4r2_msgs__msg__FullState__TYPE_NAME, 27, 27},
      {mocap4r2_msgs__msg__FullState__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[3] position         # Position in meters.               Frame of reference defined by local_frame.\n"
  "float32[3] velocity                # Linear velocity in meters/second. Frame of reference defined by local_frame.\n"
  "float32[3] acceleration                # Linear accel in meters/second^2.  Frame of reference defined by local_frame.\n"
  "float32[4] q                # Quaternion rotation from FRD body frame to reference frame.\n"
  "float32[3] angular_velocity                # Angular velocity in radians/second. Frame of reference defined by local_frame.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mocap4r2_msgs__msg__FullState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mocap4r2_msgs__msg__FullState__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 552, 552},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mocap4r2_msgs__msg__FullState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mocap4r2_msgs__msg__FullState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
