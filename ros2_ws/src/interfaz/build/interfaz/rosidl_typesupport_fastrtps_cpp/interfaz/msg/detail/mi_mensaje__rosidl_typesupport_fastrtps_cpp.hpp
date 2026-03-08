// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from interfaz:msg/MiMensaje.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__MSG__DETAIL__MI_MENSAJE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define INTERFAZ__MSG__DETAIL__MI_MENSAJE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaz/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "interfaz/msg/detail/mi_mensaje__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace interfaz
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaz
cdr_serialize(
  const interfaz::msg::MiMensaje & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaz
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaz::msg::MiMensaje & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaz
get_serialized_size(
  const interfaz::msg::MiMensaje & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaz
max_serialized_size_MiMensaje(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaz

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaz
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaz, msg, MiMensaje)();

#ifdef __cplusplus
}
#endif

#endif  // INTERFAZ__MSG__DETAIL__MI_MENSAJE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
