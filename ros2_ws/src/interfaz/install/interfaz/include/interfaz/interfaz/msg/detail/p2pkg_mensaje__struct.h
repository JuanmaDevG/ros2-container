// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaz:msg/P2pkgMensaje.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__STRUCT_H_
#define INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'posicion'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'fecha'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/P2pkgMensaje in the package interfaz.
typedef struct interfaz__msg__P2pkgMensaje
{
  int32_t numero;
  geometry_msgs__msg__Pose posicion;
  rosidl_runtime_c__String fecha;
} interfaz__msg__P2pkgMensaje;

// Struct for a sequence of interfaz__msg__P2pkgMensaje.
typedef struct interfaz__msg__P2pkgMensaje__Sequence
{
  interfaz__msg__P2pkgMensaje * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__msg__P2pkgMensaje__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__STRUCT_H_
