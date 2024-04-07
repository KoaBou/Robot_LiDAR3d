// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lio_sam:srv/SaveMap.idl
// generated code does not contain a copyright notice
#include "lio_sam/srv/detail/save_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lio_sam/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lio_sam/srv/detail/save_map__struct.h"
#include "lio_sam/srv/detail/save_map__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // destination
#include "rosidl_runtime_c/string_functions.h"  // destination

// forward declare type support functions


using _SaveMap_Request__ros_msg_type = lio_sam__srv__SaveMap_Request;

static bool _SaveMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveMap_Request__ros_msg_type * ros_message = static_cast<const _SaveMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: resolution
  {
    cdr << ros_message->resolution;
  }

  // Field name: destination
  {
    const rosidl_runtime_c__String * str = &ros_message->destination;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SaveMap_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveMap_Request__ros_msg_type * ros_message = static_cast<_SaveMap_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: resolution
  {
    cdr >> ros_message->resolution;
  }

  // Field name: destination
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->destination.data) {
      rosidl_runtime_c__String__init(&ros_message->destination);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->destination,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'destination'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
size_t get_serialized_size_lio_sam__srv__SaveMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveMap_Request__ros_msg_type * ros_message = static_cast<const _SaveMap_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name resolution
  {
    size_t item_size = sizeof(ros_message->resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name destination
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->destination.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SaveMap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lio_sam__srv__SaveMap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
size_t max_serialized_size_lio_sam__srv__SaveMap_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: resolution
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: destination
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveMap_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_lio_sam__srv__SaveMap_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveMap_Request = {
  "lio_sam::srv",
  "SaveMap_Request",
  _SaveMap_Request__cdr_serialize,
  _SaveMap_Request__cdr_deserialize,
  _SaveMap_Request__get_serialized_size,
  _SaveMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _SaveMap_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveMap_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lio_sam, srv, SaveMap_Request)() {
  return &_SaveMap_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "lio_sam/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "lio_sam/srv/detail/save_map__struct.h"
// already included above
// #include "lio_sam/srv/detail/save_map__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SaveMap_Response__ros_msg_type = lio_sam__srv__SaveMap_Response;

static bool _SaveMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveMap_Response__ros_msg_type * ros_message = static_cast<const _SaveMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SaveMap_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveMap_Response__ros_msg_type * ros_message = static_cast<_SaveMap_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
size_t get_serialized_size_lio_sam__srv__SaveMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveMap_Response__ros_msg_type * ros_message = static_cast<const _SaveMap_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveMap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lio_sam__srv__SaveMap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lio_sam
size_t max_serialized_size_lio_sam__srv__SaveMap_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveMap_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_lio_sam__srv__SaveMap_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveMap_Response = {
  "lio_sam::srv",
  "SaveMap_Response",
  _SaveMap_Response__cdr_serialize,
  _SaveMap_Response__cdr_deserialize,
  _SaveMap_Response__get_serialized_size,
  _SaveMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _SaveMap_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveMap_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lio_sam, srv, SaveMap_Response)() {
  return &_SaveMap_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "lio_sam/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lio_sam/srv/save_map.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SaveMap__callbacks = {
  "lio_sam::srv",
  "SaveMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lio_sam, srv, SaveMap_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lio_sam, srv, SaveMap_Response)(),
};

static rosidl_service_type_support_t SaveMap__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SaveMap__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lio_sam, srv, SaveMap)() {
  return &SaveMap__handle;
}

#if defined(__cplusplus)
}
#endif
