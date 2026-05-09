// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learning_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "learning_interface/srv/get_object_position.hpp"


#ifndef LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__TRAITS_HPP_
#define LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "learning_interface/srv/detail/get_object_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace learning_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObjectPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: get
  {
    out << "get: ";
    rosidl_generator_traits::value_to_yaml(msg.get, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObjectPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: get
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "get: ";
    rosidl_generator_traits::value_to_yaml(msg.get, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObjectPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace learning_interface

namespace rosidl_generator_traits
{

[[deprecated("use learning_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const learning_interface::srv::GetObjectPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  learning_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learning_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learning_interface::srv::GetObjectPosition_Request & msg)
{
  return learning_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learning_interface::srv::GetObjectPosition_Request>()
{
  return "learning_interface::srv::GetObjectPosition_Request";
}

template<>
inline const char * name<learning_interface::srv::GetObjectPosition_Request>()
{
  return "learning_interface/srv/GetObjectPosition_Request";
}

template<>
struct has_fixed_size<learning_interface::srv::GetObjectPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learning_interface::srv::GetObjectPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learning_interface::srv::GetObjectPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace learning_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObjectPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObjectPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObjectPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace learning_interface

namespace rosidl_generator_traits
{

[[deprecated("use learning_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const learning_interface::srv::GetObjectPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  learning_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learning_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learning_interface::srv::GetObjectPosition_Response & msg)
{
  return learning_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learning_interface::srv::GetObjectPosition_Response>()
{
  return "learning_interface::srv::GetObjectPosition_Response";
}

template<>
inline const char * name<learning_interface::srv::GetObjectPosition_Response>()
{
  return "learning_interface/srv/GetObjectPosition_Response";
}

template<>
struct has_fixed_size<learning_interface::srv::GetObjectPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learning_interface::srv::GetObjectPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learning_interface::srv::GetObjectPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace learning_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObjectPosition_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObjectPosition_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObjectPosition_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace learning_interface

namespace rosidl_generator_traits
{

[[deprecated("use learning_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const learning_interface::srv::GetObjectPosition_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  learning_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learning_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learning_interface::srv::GetObjectPosition_Event & msg)
{
  return learning_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learning_interface::srv::GetObjectPosition_Event>()
{
  return "learning_interface::srv::GetObjectPosition_Event";
}

template<>
inline const char * name<learning_interface::srv::GetObjectPosition_Event>()
{
  return "learning_interface/srv/GetObjectPosition_Event";
}

template<>
struct has_fixed_size<learning_interface::srv::GetObjectPosition_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<learning_interface::srv::GetObjectPosition_Event>
  : std::integral_constant<bool, has_bounded_size<learning_interface::srv::GetObjectPosition_Request>::value && has_bounded_size<learning_interface::srv::GetObjectPosition_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<learning_interface::srv::GetObjectPosition_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learning_interface::srv::GetObjectPosition>()
{
  return "learning_interface::srv::GetObjectPosition";
}

template<>
inline const char * name<learning_interface::srv::GetObjectPosition>()
{
  return "learning_interface/srv/GetObjectPosition";
}

template<>
struct has_fixed_size<learning_interface::srv::GetObjectPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<learning_interface::srv::GetObjectPosition_Request>::value &&
    has_fixed_size<learning_interface::srv::GetObjectPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<learning_interface::srv::GetObjectPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<learning_interface::srv::GetObjectPosition_Request>::value &&
    has_bounded_size<learning_interface::srv::GetObjectPosition_Response>::value
  >
{
};

template<>
struct is_service<learning_interface::srv::GetObjectPosition>
  : std::true_type
{
};

template<>
struct is_service_request<learning_interface::srv::GetObjectPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<learning_interface::srv::GetObjectPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEARNING_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__TRAITS_HPP_
