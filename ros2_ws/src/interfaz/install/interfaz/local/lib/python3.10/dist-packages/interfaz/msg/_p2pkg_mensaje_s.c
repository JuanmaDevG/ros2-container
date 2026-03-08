// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaz:msg/P2pkgMensaje.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "interfaz/msg/detail/p2pkg_mensaje__struct.h"
#include "interfaz/msg/detail/p2pkg_mensaje__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaz__msg__p2pkg_mensaje__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interfaz.msg._p2pkg_mensaje.P2pkgMensaje", full_classname_dest, 40) == 0);
  }
  interfaz__msg__P2pkgMensaje * ros_message = _ros_message;
  {  // numero
    PyObject * field = PyObject_GetAttrString(_pymsg, "numero");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->numero = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // posicion
    PyObject * field = PyObject_GetAttrString(_pymsg, "posicion");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->posicion)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fecha
    PyObject * field = PyObject_GetAttrString(_pymsg, "fecha");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->fecha, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaz__msg__p2pkg_mensaje__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of P2pkgMensaje */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaz.msg._p2pkg_mensaje");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "P2pkgMensaje");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaz__msg__P2pkgMensaje * ros_message = (interfaz__msg__P2pkgMensaje *)raw_ros_message;
  {  // numero
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->numero);
    {
      int rc = PyObject_SetAttrString(_pymessage, "numero", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posicion
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->posicion);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "posicion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fecha
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->fecha.data,
      strlen(ros_message->fecha.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fecha", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
