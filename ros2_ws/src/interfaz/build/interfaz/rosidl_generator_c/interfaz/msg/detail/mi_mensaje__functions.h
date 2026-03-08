// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interfaz:msg/MiMensaje.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__MSG__DETAIL__MI_MENSAJE__FUNCTIONS_H_
#define INTERFAZ__MSG__DETAIL__MI_MENSAJE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interfaz/msg/rosidl_generator_c__visibility_control.h"

#include "interfaz/msg/detail/mi_mensaje__struct.h"

/// Initialize msg/MiMensaje message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaz__msg__MiMensaje
 * )) before or use
 * interfaz__msg__MiMensaje__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__msg__MiMensaje__init(interfaz__msg__MiMensaje * msg);

/// Finalize msg/MiMensaje message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__msg__MiMensaje__fini(interfaz__msg__MiMensaje * msg);

/// Create msg/MiMensaje message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaz__msg__MiMensaje__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
interfaz__msg__MiMensaje *
interfaz__msg__MiMensaje__create();

/// Destroy msg/MiMensaje message.
/**
 * It calls
 * interfaz__msg__MiMensaje__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__msg__MiMensaje__destroy(interfaz__msg__MiMensaje * msg);

/// Check for msg/MiMensaje message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__msg__MiMensaje__are_equal(const interfaz__msg__MiMensaje * lhs, const interfaz__msg__MiMensaje * rhs);

/// Copy a msg/MiMensaje message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__msg__MiMensaje__copy(
  const interfaz__msg__MiMensaje * input,
  interfaz__msg__MiMensaje * output);

/// Initialize array of msg/MiMensaje messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaz__msg__MiMensaje__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__msg__MiMensaje__Sequence__init(interfaz__msg__MiMensaje__Sequence * array, size_t size);

/// Finalize array of msg/MiMensaje messages.
/**
 * It calls
 * interfaz__msg__MiMensaje__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__msg__MiMensaje__Sequence__fini(interfaz__msg__MiMensaje__Sequence * array);

/// Create array of msg/MiMensaje messages.
/**
 * It allocates the memory for the array and calls
 * interfaz__msg__MiMensaje__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
interfaz__msg__MiMensaje__Sequence *
interfaz__msg__MiMensaje__Sequence__create(size_t size);

/// Destroy array of msg/MiMensaje messages.
/**
 * It calls
 * interfaz__msg__MiMensaje__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
void
interfaz__msg__MiMensaje__Sequence__destroy(interfaz__msg__MiMensaje__Sequence * array);

/// Check for msg/MiMensaje message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__msg__MiMensaje__Sequence__are_equal(const interfaz__msg__MiMensaje__Sequence * lhs, const interfaz__msg__MiMensaje__Sequence * rhs);

/// Copy an array of msg/MiMensaje messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaz
bool
interfaz__msg__MiMensaje__Sequence__copy(
  const interfaz__msg__MiMensaje__Sequence * input,
  interfaz__msg__MiMensaje__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERFAZ__MSG__DETAIL__MI_MENSAJE__FUNCTIONS_H_
