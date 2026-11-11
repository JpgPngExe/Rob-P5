// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from candle_ros2:msg/IsolatedConverterData.idl
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
#include "candle_ros2/msg/detail/isolated_converter_data__struct.h"
#include "candle_ros2/msg/detail/isolated_converter_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool candle_ros2__msg__isolated_converter_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("candle_ros2.msg._isolated_converter_data.IsolatedConverterData", full_classname_dest, 62) == 0);
  }
  candle_ros2__msg__IsolatedConverterData * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // output_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->output_voltage = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // load_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->load_current = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // power
    PyObject * field = PyObject_GetAttrString(_pymsg, "power");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // energy
    PyObject * field = PyObject_GetAttrString(_pymsg, "energy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->energy = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ocd_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "ocd_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ocd_level = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ocd_delay
    PyObject * field = PyObject_GetAttrString(_pymsg, "ocd_delay");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ocd_delay = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_limit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * candle_ros2__msg__isolated_converter_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IsolatedConverterData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("candle_ros2.msg._isolated_converter_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IsolatedConverterData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  candle_ros2__msg__IsolatedConverterData * ros_message = (candle_ros2__msg__IsolatedConverterData *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->output_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_current
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->load_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // energy
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->energy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ocd_level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ocd_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ocd_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ocd_delay
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ocd_delay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ocd_delay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
