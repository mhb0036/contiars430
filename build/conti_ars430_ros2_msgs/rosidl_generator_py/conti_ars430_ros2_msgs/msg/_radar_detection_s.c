// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetection.idl
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
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__struct.h"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool conti_ars430_ros2_msgs__msg__radar_detection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("conti_ars430_ros2_msgs.msg._radar_detection.RadarDetection", full_classname_dest, 58) == 0);
  }
  conti_ars430_ros2_msgs__msg__RadarDetection * ros_message = _ros_message;
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_rel_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_rel_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_rel_rad = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // az_ang0
    PyObject * field = PyObject_GetAttrString(_pymsg, "az_ang0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->az_ang0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // az_ang1
    PyObject * field = PyObject_GetAttrString(_pymsg, "az_ang1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->az_ang1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // el_ang
    PyObject * field = PyObject_GetAttrString(_pymsg, "el_ang");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->el_ang = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rcs0
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcs0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rcs0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rcs1
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcs1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rcs1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // prob0
    PyObject * field = PyObject_GetAttrString(_pymsg, "prob0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->prob0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // prob1
    PyObject * field = PyObject_GetAttrString(_pymsg, "prob1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->prob1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // range_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_rel_rad_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_rel_rad_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_rel_rad_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // az_ang0_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "az_ang0_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->az_ang0_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // az_ang1_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "az_ang1_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->az_ang1_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // el_ang_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "el_ang_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->el_ang_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // prob_false_alarm
    PyObject * field = PyObject_GetAttrString(_pymsg, "prob_false_alarm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->prob_false_alarm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // snr
    PyObject * field = PyObject_GetAttrString(_pymsg, "snr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->snr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * conti_ars430_ros2_msgs__msg__radar_detection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarDetection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("conti_ars430_ros2_msgs.msg._radar_detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarDetection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  conti_ars430_ros2_msgs__msg__RadarDetection * ros_message = (conti_ars430_ros2_msgs__msg__RadarDetection *)raw_ros_message;
  {  // range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_rel_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_rel_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_rel_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // az_ang0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->az_ang0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "az_ang0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // az_ang1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->az_ang1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "az_ang1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // el_ang
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->el_ang);
    {
      int rc = PyObject_SetAttrString(_pymessage, "el_ang", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcs0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rcs0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcs0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcs1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rcs1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcs1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prob0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->prob0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prob0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prob1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->prob1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prob1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_rel_rad_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_rel_rad_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_rel_rad_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // az_ang0_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->az_ang0_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "az_ang0_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // az_ang1_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->az_ang1_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "az_ang1_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // el_ang_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->el_ang_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "el_ang_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prob_false_alarm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->prob_false_alarm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prob_false_alarm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // snr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->snr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "snr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
