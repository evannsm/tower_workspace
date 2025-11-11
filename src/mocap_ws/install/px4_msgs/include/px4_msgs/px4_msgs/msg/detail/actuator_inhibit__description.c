// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from px4_msgs:msg/ActuatorInhibit.idl
// generated code does not contain a copyright notice

#include "px4_msgs/msg/detail/actuator_inhibit__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
const rosidl_type_hash_t *
px4_msgs__msg__ActuatorInhibit__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0xc2, 0x54, 0x73, 0x19, 0x9a, 0x24, 0x77,
      0xf7, 0xd7, 0x07, 0x52, 0xf0, 0xd7, 0xd7, 0x3b,
      0xdd, 0x47, 0xf1, 0x07, 0xc0, 0xa9, 0xac, 0x6f,
      0xaf, 0x56, 0xb7, 0x0f, 0x45, 0x15, 0xc3, 0x75,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char px4_msgs__msg__ActuatorInhibit__TYPE_NAME[] = "px4_msgs/msg/ActuatorInhibit";

// Define type names, field names, and default values
static char px4_msgs__msg__ActuatorInhibit__FIELD_NAME__timestamp[] = "timestamp";
static char px4_msgs__msg__ActuatorInhibit__FIELD_NAME__timestamp_sample[] = "timestamp_sample";
static char px4_msgs__msg__ActuatorInhibit__FIELD_NAME__inhibit_mask[] = "inhibit_mask";
static char px4_msgs__msg__ActuatorInhibit__FIELD_NAME__horizon_s[] = "horizon_s";
static char px4_msgs__msg__ActuatorInhibit__FIELD_NAME__toggle_hz[] = "toggle_hz";

static rosidl_runtime_c__type_description__Field px4_msgs__msg__ActuatorInhibit__FIELDS[] = {
  {
    {px4_msgs__msg__ActuatorInhibit__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__ActuatorInhibit__FIELD_NAME__timestamp_sample, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__ActuatorInhibit__FIELD_NAME__inhibit_mask, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      12,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__ActuatorInhibit__FIELD_NAME__horizon_s, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      12,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {px4_msgs__msg__ActuatorInhibit__FIELD_NAME__toggle_hz, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      12,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
px4_msgs__msg__ActuatorInhibit__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {px4_msgs__msg__ActuatorInhibit__TYPE_NAME, 28, 28},
      {px4_msgs__msg__ActuatorInhibit__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Motor inhibition message\n"
  "uint64 timestamp\n"
  "uint64 timestamp_sample\n"
  "\n"
  "uint8[12] inhibit_mask        # 1=inhibit, 0=allow, rest unused if N<12\n"
  "float32[12] horizon_s    # per-motor; NaN/0 => indefinite\n"
  "float32[12] toggle_hz    # per-motor; 0 => steady";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
px4_msgs__msg__ActuatorInhibit__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {px4_msgs__msg__ActuatorInhibit__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 249, 249},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
px4_msgs__msg__ActuatorInhibit__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *px4_msgs__msg__ActuatorInhibit__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
