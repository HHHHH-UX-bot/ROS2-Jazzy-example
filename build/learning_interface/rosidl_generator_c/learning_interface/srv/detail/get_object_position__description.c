// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from learning_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

#include "learning_interface/srv/detail/get_object_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_learning_interface
const rosidl_type_hash_t *
learning_interface__srv__GetObjectPosition__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0xb3, 0x98, 0xdd, 0xfa, 0x39, 0x36, 0x8f,
      0xbd, 0x7d, 0x58, 0x7e, 0x57, 0xc0, 0xc9, 0x3a,
      0x4f, 0xf5, 0x6f, 0x6c, 0xda, 0xa7, 0xe0, 0x80,
      0xb1, 0x60, 0xe8, 0xc5, 0x5c, 0x7b, 0x65, 0x19,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_learning_interface
const rosidl_type_hash_t *
learning_interface__srv__GetObjectPosition_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0x70, 0x88, 0x3a, 0xba, 0x83, 0x19, 0x42,
      0xbe, 0x75, 0xb5, 0x78, 0x03, 0xf0, 0x9b, 0x3e,
      0x78, 0x1b, 0x3d, 0xe1, 0xd8, 0xa0, 0xf2, 0x62,
      0x00, 0x9d, 0xb8, 0x33, 0xc8, 0x40, 0xbc, 0x8f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_learning_interface
const rosidl_type_hash_t *
learning_interface__srv__GetObjectPosition_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x56, 0xfb, 0x17, 0x9f, 0xb1, 0x8b, 0x9a, 0x48,
      0x3c, 0xd1, 0xb8, 0xaa, 0xc0, 0x92, 0x10, 0xdc,
      0x57, 0xc6, 0x2c, 0x22, 0x42, 0x21, 0x55, 0x1d,
      0xef, 0xce, 0x42, 0x4d, 0x13, 0x56, 0xd2, 0x21,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_learning_interface
const rosidl_type_hash_t *
learning_interface__srv__GetObjectPosition_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0x4c, 0x8b, 0x53, 0xeb, 0xe4, 0x60, 0xc0,
      0x88, 0x86, 0x2f, 0xad, 0x68, 0x05, 0xe6, 0x71,
      0x84, 0x14, 0xe4, 0xd3, 0x01, 0xcb, 0x85, 0x41,
      0x77, 0x2a, 0xf6, 0xb5, 0x69, 0xa1, 0xd0, 0x30,
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

static char learning_interface__srv__GetObjectPosition__TYPE_NAME[] = "learning_interface/srv/GetObjectPosition";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char learning_interface__srv__GetObjectPosition_Event__TYPE_NAME[] = "learning_interface/srv/GetObjectPosition_Event";
static char learning_interface__srv__GetObjectPosition_Request__TYPE_NAME[] = "learning_interface/srv/GetObjectPosition_Request";
static char learning_interface__srv__GetObjectPosition_Response__TYPE_NAME[] = "learning_interface/srv/GetObjectPosition_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char learning_interface__srv__GetObjectPosition__FIELD_NAME__request_message[] = "request_message";
static char learning_interface__srv__GetObjectPosition__FIELD_NAME__response_message[] = "response_message";
static char learning_interface__srv__GetObjectPosition__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field learning_interface__srv__GetObjectPosition__FIELDS[] = {
  {
    {learning_interface__srv__GetObjectPosition__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {learning_interface__srv__GetObjectPosition_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__GetObjectPosition__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {learning_interface__srv__GetObjectPosition_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__GetObjectPosition__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {learning_interface__srv__GetObjectPosition_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription learning_interface__srv__GetObjectPosition__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__GetObjectPosition_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__GetObjectPosition_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__GetObjectPosition_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
learning_interface__srv__GetObjectPosition__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {learning_interface__srv__GetObjectPosition__TYPE_NAME, 40, 40},
      {learning_interface__srv__GetObjectPosition__FIELDS, 3, 3},
    },
    {learning_interface__srv__GetObjectPosition__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = learning_interface__srv__GetObjectPosition_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = learning_interface__srv__GetObjectPosition_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = learning_interface__srv__GetObjectPosition_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char learning_interface__srv__GetObjectPosition_Request__FIELD_NAME__get[] = "get";

static rosidl_runtime_c__type_description__Field learning_interface__srv__GetObjectPosition_Request__FIELDS[] = {
  {
    {learning_interface__srv__GetObjectPosition_Request__FIELD_NAME__get, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
learning_interface__srv__GetObjectPosition_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {learning_interface__srv__GetObjectPosition_Request__TYPE_NAME, 48, 48},
      {learning_interface__srv__GetObjectPosition_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char learning_interface__srv__GetObjectPosition_Response__FIELD_NAME__x[] = "x";
static char learning_interface__srv__GetObjectPosition_Response__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field learning_interface__srv__GetObjectPosition_Response__FIELDS[] = {
  {
    {learning_interface__srv__GetObjectPosition_Response__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__GetObjectPosition_Response__FIELD_NAME__y, 1, 1},
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
learning_interface__srv__GetObjectPosition_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {learning_interface__srv__GetObjectPosition_Response__TYPE_NAME, 49, 49},
      {learning_interface__srv__GetObjectPosition_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char learning_interface__srv__GetObjectPosition_Event__FIELD_NAME__info[] = "info";
static char learning_interface__srv__GetObjectPosition_Event__FIELD_NAME__request[] = "request";
static char learning_interface__srv__GetObjectPosition_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field learning_interface__srv__GetObjectPosition_Event__FIELDS[] = {
  {
    {learning_interface__srv__GetObjectPosition_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__GetObjectPosition_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {learning_interface__srv__GetObjectPosition_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__GetObjectPosition_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {learning_interface__srv__GetObjectPosition_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription learning_interface__srv__GetObjectPosition_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__GetObjectPosition_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {learning_interface__srv__GetObjectPosition_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
learning_interface__srv__GetObjectPosition_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {learning_interface__srv__GetObjectPosition_Event__TYPE_NAME, 46, 46},
      {learning_interface__srv__GetObjectPosition_Event__FIELDS, 3, 3},
    },
    {learning_interface__srv__GetObjectPosition_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = learning_interface__srv__GetObjectPosition_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = learning_interface__srv__GetObjectPosition_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool get      # \\xe8\\x8e\\xb7\\xe5\\x8f\\x96\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe7\\x9a\\x84\\xe6\\x8c\\x87\\xe4\\xbb\\xa4\n"
  "---\n"
  "int32 x       # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe7\\x9a\\x84X\\xe5\\x9d\\x90\\xe6\\xa0\\x87\n"
  "int32 y       # \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe7\\x9a\\x84Y\\xe5\\x9d\\x90\\xe6\\xa0\\x87";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
learning_interface__srv__GetObjectPosition__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {learning_interface__srv__GetObjectPosition__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 76, 76},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
learning_interface__srv__GetObjectPosition_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {learning_interface__srv__GetObjectPosition_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
learning_interface__srv__GetObjectPosition_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {learning_interface__srv__GetObjectPosition_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
learning_interface__srv__GetObjectPosition_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {learning_interface__srv__GetObjectPosition_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
learning_interface__srv__GetObjectPosition__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *learning_interface__srv__GetObjectPosition__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *learning_interface__srv__GetObjectPosition_Event__get_individual_type_description_source(NULL);
    sources[3] = *learning_interface__srv__GetObjectPosition_Request__get_individual_type_description_source(NULL);
    sources[4] = *learning_interface__srv__GetObjectPosition_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
learning_interface__srv__GetObjectPosition_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *learning_interface__srv__GetObjectPosition_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
learning_interface__srv__GetObjectPosition_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *learning_interface__srv__GetObjectPosition_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
learning_interface__srv__GetObjectPosition_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *learning_interface__srv__GetObjectPosition_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *learning_interface__srv__GetObjectPosition_Request__get_individual_type_description_source(NULL);
    sources[3] = *learning_interface__srv__GetObjectPosition_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
