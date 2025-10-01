// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from conti_ars430_ros2_msgs:msg/SensorStatus.idl
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
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__struct.h"
#include "conti_ars430_ros2_msgs/msg/detail/sensor_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool conti_ars430_ros2_msgs__msg__sensor_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("conti_ars430_ros2_msgs.msg._sensor_status.SensorStatus", full_classname_dest, 54) == 0);
  }
  conti_ars430_ros2_msgs__msg__SensorStatus * ros_message = _ros_message;
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
  {  // part_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "part_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->part_num = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // assembly_part_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "assembly_part_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->assembly_part_num = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // sw_part_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "sw_part_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sw_part_num = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // serial_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_num");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->serial_num), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->serial_num.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'serial_num'");
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
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->serial_num), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->serial_num.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // bl_ver
    PyObject * field = PyObject_GetAttrString(_pymsg, "bl_ver");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bl_ver = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bl_crc
    PyObject * field = PyObject_GetAttrString(_pymsg, "bl_crc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bl_crc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sw_ver
    PyObject * field = PyObject_GetAttrString(_pymsg, "sw_ver");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sw_ver = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sw_crc
    PyObject * field = PyObject_GetAttrString(_pymsg, "sw_crc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sw_crc = PyLong_AsUnsignedLong(field);
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
  {  // cur_damping
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_damping");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cur_damping = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // op_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "op_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->op_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cur_far_center_freq
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_far_center_freq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_far_center_freq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cur_near_center_freq
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_near_center_freq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_near_center_freq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // defective
    PyObject * field = PyObject_GetAttrString(_pymsg, "defective");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->defective = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_volt_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_volt_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_volt_limit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sensor_off_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_off_temp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_off_temp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gm_missing
    PyObject * field = PyObject_GetAttrString(_pymsg, "gm_missing");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gm_missing = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tx_out_reduced
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_out_reduced");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_out_reduced = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_range_far
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_range_far");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_range_far = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_range_near
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_range_near");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_range_near = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * conti_ars430_ros2_msgs__msg__sensor_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("conti_ars430_ros2_msgs.msg._sensor_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  conti_ars430_ros2_msgs__msg__SensorStatus * ros_message = (conti_ars430_ros2_msgs__msg__SensorStatus *)raw_ros_message;
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
  {  // part_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->part_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "part_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // assembly_part_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->assembly_part_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "assembly_part_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sw_part_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->sw_part_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sw_part_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serial_num
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "serial_num");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint8_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->serial_num.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->serial_num.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->serial_num.size * sizeof(uint8_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // bl_ver
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bl_ver);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bl_ver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bl_crc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bl_crc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bl_crc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sw_ver
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sw_ver);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sw_ver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sw_crc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sw_crc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sw_crc", field);
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
  {  // cur_damping
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cur_damping);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_damping", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // op_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->op_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "op_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_far_center_freq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_far_center_freq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_far_center_freq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_near_center_freq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_near_center_freq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_near_center_freq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // defective
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->defective);
    {
      int rc = PyObject_SetAttrString(_pymessage, "defective", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_volt_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_volt_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_volt_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_off_temp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_off_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_off_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gm_missing
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gm_missing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gm_missing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_out_reduced
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tx_out_reduced);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_out_reduced", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_range_far
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_range_far);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_range_far", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_range_near
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_range_near);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_range_near", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
