// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from learning_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "learning_interface/srv/detail/get_object_position__rosidl_typesupport_introspection_c.h"
#include "learning_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "learning_interface/srv/detail/get_object_position__functions.h"
#include "learning_interface/srv/detail/get_object_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learning_interface__srv__GetObjectPosition_Request__init(message_memory);
}

void learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_fini_function(void * message_memory)
{
  learning_interface__srv__GetObjectPosition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_member_array[1] = {
  {
    "get",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_interface__srv__GetObjectPosition_Request, get),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_members = {
  "learning_interface__srv",  // message namespace
  "GetObjectPosition_Request",  // message name
  1,  // number of fields
  sizeof(learning_interface__srv__GetObjectPosition_Request),
  false,  // has_any_key_member_
  learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_member_array,  // message members
  learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle = {
  0,
  &learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_members,
  get_message_typesupport_handle_function,
  &learning_interface__srv__GetObjectPosition_Request__get_type_hash,
  &learning_interface__srv__GetObjectPosition_Request__get_type_description,
  &learning_interface__srv__GetObjectPosition_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learning_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Request)() {
  if (!learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle.typesupport_identifier) {
    learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "learning_interface/srv/detail/get_object_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "learning_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "learning_interface/srv/detail/get_object_position__functions.h"
// already included above
// #include "learning_interface/srv/detail/get_object_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learning_interface__srv__GetObjectPosition_Response__init(message_memory);
}

void learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_fini_function(void * message_memory)
{
  learning_interface__srv__GetObjectPosition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_interface__srv__GetObjectPosition_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_interface__srv__GetObjectPosition_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_members = {
  "learning_interface__srv",  // message namespace
  "GetObjectPosition_Response",  // message name
  2,  // number of fields
  sizeof(learning_interface__srv__GetObjectPosition_Response),
  false,  // has_any_key_member_
  learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_member_array,  // message members
  learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle = {
  0,
  &learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_members,
  get_message_typesupport_handle_function,
  &learning_interface__srv__GetObjectPosition_Response__get_type_hash,
  &learning_interface__srv__GetObjectPosition_Response__get_type_description,
  &learning_interface__srv__GetObjectPosition_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learning_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Response)() {
  if (!learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle.typesupport_identifier) {
    learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "learning_interface/srv/detail/get_object_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "learning_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "learning_interface/srv/detail/get_object_position__functions.h"
// already included above
// #include "learning_interface/srv/detail/get_object_position__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "learning_interface/srv/get_object_position.h"
// Member `request`
// Member `response`
// already included above
// #include "learning_interface/srv/detail/get_object_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learning_interface__srv__GetObjectPosition_Event__init(message_memory);
}

void learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_fini_function(void * message_memory)
{
  learning_interface__srv__GetObjectPosition_Event__fini(message_memory);
}

size_t learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__size_function__GetObjectPosition_Event__request(
  const void * untyped_member)
{
  const learning_interface__srv__GetObjectPosition_Request__Sequence * member =
    (const learning_interface__srv__GetObjectPosition_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_const_function__GetObjectPosition_Event__request(
  const void * untyped_member, size_t index)
{
  const learning_interface__srv__GetObjectPosition_Request__Sequence * member =
    (const learning_interface__srv__GetObjectPosition_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_function__GetObjectPosition_Event__request(
  void * untyped_member, size_t index)
{
  learning_interface__srv__GetObjectPosition_Request__Sequence * member =
    (learning_interface__srv__GetObjectPosition_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__fetch_function__GetObjectPosition_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const learning_interface__srv__GetObjectPosition_Request * item =
    ((const learning_interface__srv__GetObjectPosition_Request *)
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_const_function__GetObjectPosition_Event__request(untyped_member, index));
  learning_interface__srv__GetObjectPosition_Request * value =
    (learning_interface__srv__GetObjectPosition_Request *)(untyped_value);
  *value = *item;
}

void learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__assign_function__GetObjectPosition_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  learning_interface__srv__GetObjectPosition_Request * item =
    ((learning_interface__srv__GetObjectPosition_Request *)
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_function__GetObjectPosition_Event__request(untyped_member, index));
  const learning_interface__srv__GetObjectPosition_Request * value =
    (const learning_interface__srv__GetObjectPosition_Request *)(untyped_value);
  *item = *value;
}

bool learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__resize_function__GetObjectPosition_Event__request(
  void * untyped_member, size_t size)
{
  learning_interface__srv__GetObjectPosition_Request__Sequence * member =
    (learning_interface__srv__GetObjectPosition_Request__Sequence *)(untyped_member);
  learning_interface__srv__GetObjectPosition_Request__Sequence__fini(member);
  return learning_interface__srv__GetObjectPosition_Request__Sequence__init(member, size);
}

size_t learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__size_function__GetObjectPosition_Event__response(
  const void * untyped_member)
{
  const learning_interface__srv__GetObjectPosition_Response__Sequence * member =
    (const learning_interface__srv__GetObjectPosition_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_const_function__GetObjectPosition_Event__response(
  const void * untyped_member, size_t index)
{
  const learning_interface__srv__GetObjectPosition_Response__Sequence * member =
    (const learning_interface__srv__GetObjectPosition_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_function__GetObjectPosition_Event__response(
  void * untyped_member, size_t index)
{
  learning_interface__srv__GetObjectPosition_Response__Sequence * member =
    (learning_interface__srv__GetObjectPosition_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__fetch_function__GetObjectPosition_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const learning_interface__srv__GetObjectPosition_Response * item =
    ((const learning_interface__srv__GetObjectPosition_Response *)
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_const_function__GetObjectPosition_Event__response(untyped_member, index));
  learning_interface__srv__GetObjectPosition_Response * value =
    (learning_interface__srv__GetObjectPosition_Response *)(untyped_value);
  *value = *item;
}

void learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__assign_function__GetObjectPosition_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  learning_interface__srv__GetObjectPosition_Response * item =
    ((learning_interface__srv__GetObjectPosition_Response *)
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_function__GetObjectPosition_Event__response(untyped_member, index));
  const learning_interface__srv__GetObjectPosition_Response * value =
    (const learning_interface__srv__GetObjectPosition_Response *)(untyped_value);
  *item = *value;
}

bool learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__resize_function__GetObjectPosition_Event__response(
  void * untyped_member, size_t size)
{
  learning_interface__srv__GetObjectPosition_Response__Sequence * member =
    (learning_interface__srv__GetObjectPosition_Response__Sequence *)(untyped_member);
  learning_interface__srv__GetObjectPosition_Response__Sequence__fini(member);
  return learning_interface__srv__GetObjectPosition_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learning_interface__srv__GetObjectPosition_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(learning_interface__srv__GetObjectPosition_Event, request),  // bytes offset in struct
    NULL,  // default value
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__size_function__GetObjectPosition_Event__request,  // size() function pointer
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_const_function__GetObjectPosition_Event__request,  // get_const(index) function pointer
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_function__GetObjectPosition_Event__request,  // get(index) function pointer
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__fetch_function__GetObjectPosition_Event__request,  // fetch(index, &value) function pointer
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__assign_function__GetObjectPosition_Event__request,  // assign(index, value) function pointer
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__resize_function__GetObjectPosition_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(learning_interface__srv__GetObjectPosition_Event, response),  // bytes offset in struct
    NULL,  // default value
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__size_function__GetObjectPosition_Event__response,  // size() function pointer
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_const_function__GetObjectPosition_Event__response,  // get_const(index) function pointer
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__get_function__GetObjectPosition_Event__response,  // get(index) function pointer
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__fetch_function__GetObjectPosition_Event__response,  // fetch(index, &value) function pointer
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__assign_function__GetObjectPosition_Event__response,  // assign(index, value) function pointer
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__resize_function__GetObjectPosition_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_members = {
  "learning_interface__srv",  // message namespace
  "GetObjectPosition_Event",  // message name
  3,  // number of fields
  sizeof(learning_interface__srv__GetObjectPosition_Event),
  false,  // has_any_key_member_
  learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_member_array,  // message members
  learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_type_support_handle = {
  0,
  &learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_members,
  get_message_typesupport_handle_function,
  &learning_interface__srv__GetObjectPosition_Event__get_type_hash,
  &learning_interface__srv__GetObjectPosition_Event__get_type_description,
  &learning_interface__srv__GetObjectPosition_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learning_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Event)() {
  learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Request)();
  learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Response)();
  if (!learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_type_support_handle.typesupport_identifier) {
    learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "learning_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "learning_interface/srv/detail/get_object_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_members = {
  "learning_interface__srv",  // service namespace
  "GetObjectPosition",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle,
  NULL,  // response message
  // learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle
  NULL  // event_message
  // learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle
};


static rosidl_service_type_support_t learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_type_support_handle = {
  0,
  &learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_members,
  get_service_typesupport_handle_function,
  &learning_interface__srv__GetObjectPosition_Request__rosidl_typesupport_introspection_c__GetObjectPosition_Request_message_type_support_handle,
  &learning_interface__srv__GetObjectPosition_Response__rosidl_typesupport_introspection_c__GetObjectPosition_Response_message_type_support_handle,
  &learning_interface__srv__GetObjectPosition_Event__rosidl_typesupport_introspection_c__GetObjectPosition_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    learning_interface,
    srv,
    GetObjectPosition
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    learning_interface,
    srv,
    GetObjectPosition
  ),
  &learning_interface__srv__GetObjectPosition__get_type_hash,
  &learning_interface__srv__GetObjectPosition__get_type_description,
  &learning_interface__srv__GetObjectPosition__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learning_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition)(void) {
  if (!learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_type_support_handle.typesupport_identifier) {
    learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learning_interface, srv, GetObjectPosition_Event)()->data;
  }

  return &learning_interface__srv__detail__get_object_position__rosidl_typesupport_introspection_c__GetObjectPosition_service_type_support_handle;
}
