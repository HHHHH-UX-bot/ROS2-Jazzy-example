// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from learning_interface:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#include "learning_interface/srv/detail/add_two_ints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_learning_interface
const rosidl_type_hash_t *
learning_interface__srv__AddTwoInts__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0xe5, 0x17, 0x95, 0x21, 0xc9, 0x23, 0x61,
      0xf3, 0x39, 0x8d, 0x6b, 0xed, 0x30, 0x11, 0xb9,
      0x90, 0xd8, 0x1a, 0x20, 0x4c, 0x78, 0xc2, 0x85,
      0x0f, 0xb3, 0x3f, 0x84, 0x4e, 0xae, 0xdb, 0x39,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_learning_interface
const rosidl_type_hash_t *
learning_interface__srv__AddTwoInts_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x31, 0x04, 0x37, 0x9e, 0x8b, 0x9b, 0x4e,
      0xe4, 0xb5, 0x40, 0x25, 0x4d, 0xb5, 0x12, 0x54,
      0xa0, 0x6f, 0x92, 0x1b, 0xa4, 0x59, 0x78, 0x7d,
      0x87, 0x8e, 0xef, 0x33, 0x0f, 0xf7, 0x3b, 0x55,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_learning_interface
const rosidl_type_hash_t *
learning_interface__srv__AddTwoInts_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x10, 0x41, 0x97, 0x32, 0xfb, 0x9c, 0x9e, 0x21,
      0x99, 0x0b, 0x91, 0xb9, 0x7d, 0xf8, 0x25, 0x15,
      0xc1, 0xac, 0x86, 0xa7, 0x20, 0x91, 0x89, 0x6d,
      0x3c, 0xd0, 0xf1, 0x5e, 0x6d, 0xa9, 0x63, 0x2c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_learning_interface
const rosidl_type_hash_t *
learning_interface__srv__AddTwoInts_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0xde, 0x63, 0x9a, 0x26, 0x1b, 0x97, 0xd0,
      0x3b, 0x6b, 0x03, 0xe4, 0xdf, 0x5f, 0xf0, 0x2d,
      0x6f, 0xe4, 0x7f, 0x1e, 0x44, 0x2a, 0x04, 0x82,
      0xfd, 0xa3, 0x3c, 0xca, 0x43, 0xe3, 0x3c, 0xb0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char learning_interface__srv__AddTwoInts__TYPE_NAME[] = "learning_interface/srv/AddTwoInts";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char learning_interface__srv__AddTwoInts_Event__TYPE_NAME[] = "learning_interface/srv/AddTwoInts_Event";
static char learning_interface__srv__AddTwoInts_Request__TYPE_NAME[] = "learning_interface/srv/AddTwoInts_Request";
static char learning_interface__srv__AddTwoInts_Response__TYPE_NAME[] = "learning_interface/srv/AddTwoInts_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char learning_interface__srv__AddTwoInts__FIELD_NAME__request_message[] = "request_message";
static char learning_interface__srv__AddTwoInts__FIELD_NAME__response_message[] = "response_message";
static char learning_interface__srv__AddTwoInts__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field learning_interface__srv__AddTwoInts__FIELDS[] = {
  {
    {learning_interface__srv__AddTwoInts__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {learning_interface__srv__AddTwoInts_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__AddTwoInts__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {learning_interface__srv__AddTwoInts_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__AddTwoInts__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {learning_interface__srv__AddTwoInts_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription learning_interface__srv__AddTwoInts__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__AddTwoInts_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__AddTwoInts_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__AddTwoInts_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
learning_interface__srv__AddTwoInts__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {learning_interface__srv__AddTwoInts__TYPE_NAME, 33, 33},
      {learning_interface__srv__AddTwoInts__FIELDS, 3, 3},
    },
    {learning_interface__srv__AddTwoInts__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = learning_interface__srv__AddTwoInts_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = learning_interface__srv__AddTwoInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = learning_interface__srv__AddTwoInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char learning_interface__srv__AddTwoInts_Request__FIELD_NAME__a[] = "a";
static char learning_interface__srv__AddTwoInts_Request__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field learning_interface__srv__AddTwoInts_Request__FIELDS[] = {
  {
    {learning_interface__srv__AddTwoInts_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__AddTwoInts_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
learning_interface__srv__AddTwoInts_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {learning_interface__srv__AddTwoInts_Request__TYPE_NAME, 41, 41},
      {learning_interface__srv__AddTwoInts_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char learning_interface__srv__AddTwoInts_Response__FIELD_NAME__sum[] = "sum";

static rosidl_runtime_c__type_description__Field learning_interface__srv__AddTwoInts_Response__FIELDS[] = {
  {
    {learning_interface__srv__AddTwoInts_Response__FIELD_NAME__sum, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
learning_interface__srv__AddTwoInts_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {learning_interface__srv__AddTwoInts_Response__TYPE_NAME, 42, 42},
      {learning_interface__srv__AddTwoInts_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char learning_interface__srv__AddTwoInts_Event__FIELD_NAME__info[] = "info";
static char learning_interface__srv__AddTwoInts_Event__FIELD_NAME__request[] = "request";
static char learning_interface__srv__AddTwoInts_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field learning_interface__srv__AddTwoInts_Event__FIELDS[] = {
  {
    {learning_interface__srv__AddTwoInts_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__AddTwoInts_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {learning_interface__srv__AddTwoInts_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__AddTwoInts_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {learning_interface__srv__AddTwoInts_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription learning_interface__srv__AddTwoInts_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__AddTwoInts_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__AddTwoInts_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
learning_interface__srv__AddTwoInts_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {learning_interface__srv__AddTwoInts_Event__TYPE_NAME, 39, 39},
      {learning_interface__srv__AddTwoInts_Event__FIELDS, 3, 3},
    },
    {learning_interface__srv__AddTwoInts_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = learning_interface__srv__AddTwoInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = learning_interface__srv__AddTwoInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 a        # \\xe7\\xac\\xac\\xe4\\xb8\\x80\\xe4\\xb8\\xaa\\xe5\\x8a\\xa0\\xe6\\x95\\xb0\n"
  "int64 b        # \\xe7\\xac\\xac\\xe4\\xba\\x8c\\xe4\\xb8\\xaa\\xe5\\x8a\\xa0\\xe6\\x95\\xb0\n"
  "---\n"
  "int64 sum      # \\xe6\\xb1\\x82\\xe5\\x92\\x8c\\xe7\\xbb\\x93\\xe6\\x9e\\x9c";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
learning_interface__srv__AddTwoInts__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {learning_interface__srv__AddTwoInts__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 72, 72},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
learning_interface__srv__AddTwoInts_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {learning_interface__srv__AddTwoInts_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
learning_interface__srv__AddTwoInts_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {learning_interface__srv__AddTwoInts_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
learning_interface__srv__AddTwoInts_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {learning_interface__srv__AddTwoInts_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
learning_interface__srv__AddTwoInts__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *learning_interface__srv__AddTwoInts__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *learning_interface__srv__AddTwoInts_Event__get_individual_type_description_source(NULL);
    sources[3] = *learning_interface__srv__AddTwoInts_Request__get_individual_type_description_source(NULL);
    sources[4] = *learning_interface__srv__AddTwoInts_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
learning_interface__srv__AddTwoInts_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *learning_interface__srv__AddTwoInts_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
learning_interface__srv__AddTwoInts_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *learning_interface__srv__AddTwoInts_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
learning_interface__srv__AddTwoInts_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *learning_interface__srv__AddTwoInts_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *learning_interface__srv__AddTwoInts_Request__get_individual_type_description_source(NULL);
    sources[3] = *learning_interface__srv__AddTwoInts_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
