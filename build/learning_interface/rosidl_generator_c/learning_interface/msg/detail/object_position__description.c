// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from learning_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#include "learning_interface/msg/detail/object_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_learning_interface
const rosidl_type_hash_t *
learning_interface__msg__ObjectPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0x91, 0x38, 0x81, 0x71, 0xed, 0x69, 0x87,
      0xe2, 0xfd, 0x97, 0x6b, 0x18, 0xf6, 0xa1, 0x65,
      0x27, 0x39, 0xc1, 0x1c, 0x8f, 0x3c, 0x8a, 0x5c,
      0xcb, 0x7e, 0xf2, 0x0a, 0x21, 0xa7, 0x76, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char learning_interface__msg__ObjectPosition__TYPE_NAME[] = "learning_interface/msg/ObjectPosition";

// Define type names, field names, and default values
static char learning_interface__msg__ObjectPosition__FIELD_NAME__x[] = "x";
static char learning_interface__msg__ObjectPosition__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field learning_interface__msg__ObjectPosition__FIELDS[] = {
  {
    {learning_interface__msg__ObjectPosition__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__msg__ObjectPosition__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
learning_interface__msg__ObjectPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {learning_interface__msg__ObjectPosition__TYPE_NAME, 37, 37},
      {learning_interface__msg__ObjectPosition__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 x      # \\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe7\\x9a\\x84X\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "int32 y      # \\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe7\\x9a\\x84Y\\xe5\\x9d\\x90\\xe6\\xa0\\x87";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
learning_interface__msg__ObjectPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {learning_interface__msg__ObjectPosition__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
learning_interface__msg__ObjectPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *learning_interface__msg__ObjectPosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
