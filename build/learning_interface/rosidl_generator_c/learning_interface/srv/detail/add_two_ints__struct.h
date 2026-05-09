// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from learning_interface:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "learning_interface/srv/add_two_ints.h"


#ifndef LEARNING_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define LEARNING_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package learning_interface.
typedef struct learning_interface__srv__AddTwoInts_Request
{
  /// 第一个加数
  int64_t a;
  /// 第二个加数
  int64_t b;
} learning_interface__srv__AddTwoInts_Request;

// Struct for a sequence of learning_interface__srv__AddTwoInts_Request.
typedef struct learning_interface__srv__AddTwoInts_Request__Sequence
{
  learning_interface__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__srv__AddTwoInts_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package learning_interface.
typedef struct learning_interface__srv__AddTwoInts_Response
{
  /// 求和结果
  int64_t sum;
} learning_interface__srv__AddTwoInts_Response;

// Struct for a sequence of learning_interface__srv__AddTwoInts_Response.
typedef struct learning_interface__srv__AddTwoInts_Response__Sequence
{
  learning_interface__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__srv__AddTwoInts_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  learning_interface__srv__AddTwoInts_Event__request__MAX_SIZE = 1
};
// response
enum
{
  learning_interface__srv__AddTwoInts_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddTwoInts in the package learning_interface.
typedef struct learning_interface__srv__AddTwoInts_Event
{
  service_msgs__msg__ServiceEventInfo info;
  learning_interface__srv__AddTwoInts_Request__Sequence request;
  learning_interface__srv__AddTwoInts_Response__Sequence response;
} learning_interface__srv__AddTwoInts_Event;

// Struct for a sequence of learning_interface__srv__AddTwoInts_Event.
typedef struct learning_interface__srv__AddTwoInts_Event__Sequence
{
  learning_interface__srv__AddTwoInts_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} learning_interface__srv__AddTwoInts_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEARNING_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
