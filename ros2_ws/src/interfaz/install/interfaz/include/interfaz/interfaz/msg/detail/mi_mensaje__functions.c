// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaz:msg/MiMensaje.idl
// generated code does not contain a copyright notice
#include "interfaz/msg/detail/mi_mensaje__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interfaz__msg__MiMensaje__init(interfaz__msg__MiMensaje * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
interfaz__msg__MiMensaje__fini(interfaz__msg__MiMensaje * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
interfaz__msg__MiMensaje__are_equal(const interfaz__msg__MiMensaje * lhs, const interfaz__msg__MiMensaje * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
interfaz__msg__MiMensaje__copy(
  const interfaz__msg__MiMensaje * input,
  interfaz__msg__MiMensaje * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

interfaz__msg__MiMensaje *
interfaz__msg__MiMensaje__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaz__msg__MiMensaje * msg = (interfaz__msg__MiMensaje *)allocator.allocate(sizeof(interfaz__msg__MiMensaje), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaz__msg__MiMensaje));
  bool success = interfaz__msg__MiMensaje__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaz__msg__MiMensaje__destroy(interfaz__msg__MiMensaje * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaz__msg__MiMensaje__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaz__msg__MiMensaje__Sequence__init(interfaz__msg__MiMensaje__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaz__msg__MiMensaje * data = NULL;

  if (size) {
    data = (interfaz__msg__MiMensaje *)allocator.zero_allocate(size, sizeof(interfaz__msg__MiMensaje), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaz__msg__MiMensaje__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaz__msg__MiMensaje__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaz__msg__MiMensaje__Sequence__fini(interfaz__msg__MiMensaje__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaz__msg__MiMensaje__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaz__msg__MiMensaje__Sequence *
interfaz__msg__MiMensaje__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaz__msg__MiMensaje__Sequence * array = (interfaz__msg__MiMensaje__Sequence *)allocator.allocate(sizeof(interfaz__msg__MiMensaje__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaz__msg__MiMensaje__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaz__msg__MiMensaje__Sequence__destroy(interfaz__msg__MiMensaje__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaz__msg__MiMensaje__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaz__msg__MiMensaje__Sequence__are_equal(const interfaz__msg__MiMensaje__Sequence * lhs, const interfaz__msg__MiMensaje__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaz__msg__MiMensaje__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaz__msg__MiMensaje__Sequence__copy(
  const interfaz__msg__MiMensaje__Sequence * input,
  interfaz__msg__MiMensaje__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaz__msg__MiMensaje);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaz__msg__MiMensaje * data =
      (interfaz__msg__MiMensaje *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaz__msg__MiMensaje__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaz__msg__MiMensaje__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaz__msg__MiMensaje__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
