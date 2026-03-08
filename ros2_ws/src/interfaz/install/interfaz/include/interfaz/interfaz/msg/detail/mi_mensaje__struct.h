// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaz:msg/MiMensaje.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__MSG__DETAIL__MI_MENSAJE__STRUCT_H_
#define INTERFAZ__MSG__DETAIL__MI_MENSAJE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOMBRE'.
static const char * const interfaz__msg__MiMensaje__NOMBRE = "JuanManuel";

/// Struct defined in msg/MiMensaje in the package interfaz.
typedef struct interfaz__msg__MiMensaje
{
  int32_t x;
  int32_t y;
} interfaz__msg__MiMensaje;

// Struct for a sequence of interfaz__msg__MiMensaje.
typedef struct interfaz__msg__MiMensaje__Sequence
{
  interfaz__msg__MiMensaje * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaz__msg__MiMensaje__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFAZ__MSG__DETAIL__MI_MENSAJE__STRUCT_H_
