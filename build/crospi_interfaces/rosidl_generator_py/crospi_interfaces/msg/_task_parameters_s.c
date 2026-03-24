// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from crospi_interfaces:msg/TaskParameters.idl
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
#include "crospi_interfaces/msg/detail/task_parameters__struct.h"
#include "crospi_interfaces/msg/detail/task_parameters__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "crospi_interfaces/msg/detail/number_parameters__functions.h"
#include "crospi_interfaces/msg/detail/pose_parameters__functions.h"
#include "crospi_interfaces/msg/detail/vector3_parameters__functions.h"
// end nested array functions include
bool crospi_interfaces__msg__number_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * crospi_interfaces__msg__number_parameters__convert_to_py(void * raw_ros_message);
bool crospi_interfaces__msg__pose_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * crospi_interfaces__msg__pose_parameters__convert_to_py(void * raw_ros_message);
bool crospi_interfaces__msg__vector3_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * crospi_interfaces__msg__vector3_parameters__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool crospi_interfaces__msg__task_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("crospi_interfaces.msg._task_parameters.TaskParameters", full_classname_dest, 53) == 0);
  }
  crospi_interfaces__msg__TaskParameters * ros_message = _ros_message;
  {  // numbers
    PyObject * field = PyObject_GetAttrString(_pymsg, "numbers");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'numbers'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!crospi_interfaces__msg__NumberParameters__Sequence__init(&(ros_message->numbers), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create crospi_interfaces__msg__NumberParameters__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    crospi_interfaces__msg__NumberParameters * dest = ros_message->numbers.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!crospi_interfaces__msg__number_parameters__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // poses
    PyObject * field = PyObject_GetAttrString(_pymsg, "poses");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'poses'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!crospi_interfaces__msg__PoseParameters__Sequence__init(&(ros_message->poses), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create crospi_interfaces__msg__PoseParameters__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    crospi_interfaces__msg__PoseParameters * dest = ros_message->poses.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!crospi_interfaces__msg__pose_parameters__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // vector3s
    PyObject * field = PyObject_GetAttrString(_pymsg, "vector3s");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'vector3s'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!crospi_interfaces__msg__Vector3Parameters__Sequence__init(&(ros_message->vector3s), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create crospi_interfaces__msg__Vector3Parameters__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    crospi_interfaces__msg__Vector3Parameters * dest = ros_message->vector3s.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!crospi_interfaces__msg__vector3_parameters__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * crospi_interfaces__msg__task_parameters__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TaskParameters */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("crospi_interfaces.msg._task_parameters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TaskParameters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  crospi_interfaces__msg__TaskParameters * ros_message = (crospi_interfaces__msg__TaskParameters *)raw_ros_message;
  {  // numbers
    PyObject * field = NULL;
    size_t size = ros_message->numbers.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    crospi_interfaces__msg__NumberParameters * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->numbers.data[i]);
      PyObject * pyitem = crospi_interfaces__msg__number_parameters__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "numbers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poses
    PyObject * field = NULL;
    size_t size = ros_message->poses.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    crospi_interfaces__msg__PoseParameters * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->poses.data[i]);
      PyObject * pyitem = crospi_interfaces__msg__pose_parameters__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "poses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vector3s
    PyObject * field = NULL;
    size_t size = ros_message->vector3s.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    crospi_interfaces__msg__Vector3Parameters * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->vector3s.data[i]);
      PyObject * pyitem = crospi_interfaces__msg__vector3_parameters__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "vector3s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
