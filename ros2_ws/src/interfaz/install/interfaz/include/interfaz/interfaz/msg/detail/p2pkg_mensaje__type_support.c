// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaz:msg/P2pkgMensaje.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaz/msg/detail/p2pkg_mensaje__rosidl_typesupport_introspection_c.h"
#include "interfaz/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaz/msg/detail/p2pkg_mensaje__functions.h"
#include "interfaz/msg/detail/p2pkg_mensaje__struct.h"


// Include directives for member types
// Member `posicion`
#include "geometry_msgs/msg/pose.h"
// Member `posicion`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `fecha`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaz__msg__P2pkgMensaje__init(message_memory);
}

void interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_fini_function(void * message_memory)
{
  interfaz__msg__P2pkgMensaje__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_message_member_array[3] = {
  {
    "numero",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaz__msg__P2pkgMensaje, numero),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posicion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaz__msg__P2pkgMensaje, posicion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fecha",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaz__msg__P2pkgMensaje, fecha),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_message_members = {
  "interfaz__msg",  // message namespace
  "P2pkgMensaje",  // message name
  3,  // number of fields
  sizeof(interfaz__msg__P2pkgMensaje),
  interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_message_member_array,  // message members
  interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_message_type_support_handle = {
  0,
  &interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaz
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaz, msg, P2pkgMensaje)() {
  interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_message_type_support_handle.typesupport_identifier) {
    interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaz__msg__P2pkgMensaje__rosidl_typesupport_introspection_c__P2pkgMensaje_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
