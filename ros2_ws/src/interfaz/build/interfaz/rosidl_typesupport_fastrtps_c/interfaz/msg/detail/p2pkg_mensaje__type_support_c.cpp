// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaz:msg/P2pkgMensaje.idl
// generated code does not contain a copyright notice
#include "interfaz/msg/detail/p2pkg_mensaje__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaz/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaz/msg/detail/p2pkg_mensaje__struct.h"
#include "interfaz/msg/detail/p2pkg_mensaje__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // posicion
#include "rosidl_runtime_c/string.h"  // fecha
#include "rosidl_runtime_c/string_functions.h"  // fecha

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaz
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaz
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_interfaz
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _P2pkgMensaje__ros_msg_type = interfaz__msg__P2pkgMensaje;

static bool _P2pkgMensaje__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _P2pkgMensaje__ros_msg_type * ros_message = static_cast<const _P2pkgMensaje__ros_msg_type *>(untyped_ros_message);
  // Field name: numero
  {
    cdr << ros_message->numero;
  }

  // Field name: posicion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->posicion, cdr))
    {
      return false;
    }
  }

  // Field name: fecha
  {
    const rosidl_runtime_c__String * str = &ros_message->fecha;
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

static bool _P2pkgMensaje__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _P2pkgMensaje__ros_msg_type * ros_message = static_cast<_P2pkgMensaje__ros_msg_type *>(untyped_ros_message);
  // Field name: numero
  {
    cdr >> ros_message->numero;
  }

  // Field name: posicion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->posicion))
    {
      return false;
    }
  }

  // Field name: fecha
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->fecha.data) {
      rosidl_runtime_c__String__init(&ros_message->fecha);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->fecha,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'fecha'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaz
size_t get_serialized_size_interfaz__msg__P2pkgMensaje(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _P2pkgMensaje__ros_msg_type * ros_message = static_cast<const _P2pkgMensaje__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name numero
  {
    size_t item_size = sizeof(ros_message->numero);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posicion

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->posicion), current_alignment);
  // field.name fecha
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->fecha.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _P2pkgMensaje__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaz__msg__P2pkgMensaje(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaz
size_t max_serialized_size_interfaz__msg__P2pkgMensaje(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: numero
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: posicion
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fecha
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaz__msg__P2pkgMensaje;
    is_plain =
      (
      offsetof(DataType, fecha) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _P2pkgMensaje__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaz__msg__P2pkgMensaje(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_P2pkgMensaje = {
  "interfaz::msg",
  "P2pkgMensaje",
  _P2pkgMensaje__cdr_serialize,
  _P2pkgMensaje__cdr_deserialize,
  _P2pkgMensaje__get_serialized_size,
  _P2pkgMensaje__max_serialized_size
};

static rosidl_message_type_support_t _P2pkgMensaje__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_P2pkgMensaje,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaz, msg, P2pkgMensaje)() {
  return &_P2pkgMensaje__type_support;
}

#if defined(__cplusplus)
}
#endif
