// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
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
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__struct.h"
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection_image__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "conti_ars430_ros2_msgs/msg/detail/radar_detection__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool conti_ars430_ros2_msgs__msg__radar_detection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * conti_ars430_ros2_msgs__msg__radar_detection__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool conti_ars430_ros2_msgs__msg__radar_detection_image__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("conti_ars430_ros2_msgs.msg._radar_detection_image.RadarDetectionImage", full_classname_dest, 69) == 0);
  }
  conti_ars430_ros2_msgs__msg__RadarDetectionImage * ros_message = _ros_message;
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
  {  // detect_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "detect_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->detect_type = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // utc_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_time = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // internal_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "internal_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->internal_time = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meas_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "meas_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meas_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cycle_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "cycle_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cycle_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_avail_detects
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_avail_detects");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_avail_detects = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vel_ambig
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_ambig");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_ambig = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_freq
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_freq");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_freq = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // detection_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "detection_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'detection_list'");
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
    if (!conti_ars430_ros2_msgs__msg__RadarDetection__Sequence__init(&(ros_message->detection_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create conti_ars430_ros2_msgs__msg__RadarDetection__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    conti_ars430_ros2_msgs__msg__RadarDetection * dest = ros_message->detection_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!conti_ars430_ros2_msgs__msg__radar_detection__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * conti_ars430_ros2_msgs__msg__radar_detection_image__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarDetectionImage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("conti_ars430_ros2_msgs.msg._radar_detection_image");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarDetectionImage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  conti_ars430_ros2_msgs__msg__RadarDetectionImage * ros_message = (conti_ars430_ros2_msgs__msg__RadarDetectionImage *)raw_ros_message;
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
  {  // detect_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->detect_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detect_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->utc_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // internal_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->internal_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "internal_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meas_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meas_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meas_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cycle_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cycle_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cycle_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_avail_detects
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_avail_detects);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_avail_detects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_ambig
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_ambig);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_ambig", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_freq
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_freq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_freq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detection_list
    PyObject * field = NULL;
    size_t size = ros_message->detection_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    conti_ars430_ros2_msgs__msg__RadarDetection * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->detection_list.data[i]);
      PyObject * pyitem = conti_ars430_ros2_msgs__msg__radar_detection__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "detection_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
