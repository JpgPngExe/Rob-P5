// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from candle_ros2:msg/ControlModuleData.idl
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
#include "candle_ros2/msg/detail/control_module_data__struct.h"
#include "candle_ros2/msg/detail/control_module_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool candle_ros2__msg__control_module_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("candle_ros2.msg._control_module_data.ControlModuleData", full_classname_dest, 54) == 0);
  }
  candle_ros2__msg__ControlModuleData * ros_message = _ros_message;
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
  {  // bus_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bus_voltage = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // battery_voltage_level_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage_level_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_voltage_level_1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // battery_voltage_level_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage_level_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_voltage_level_2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brake_trigger_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_trigger_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_trigger_voltage = PyLong_AsUnsignedLong(field);
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
PyObject * candle_ros2__msg__control_module_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlModuleData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("candle_ros2.msg._control_module_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlModuleData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  candle_ros2__msg__ControlModuleData * ros_message = (candle_ros2__msg__ControlModuleData *)raw_ros_message;
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
  {  // bus_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bus_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage_level_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery_voltage_level_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage_level_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage_level_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery_voltage_level_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage_level_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_trigger_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brake_trigger_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_trigger_voltage", field);
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
