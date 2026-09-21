// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
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
#include "dave_interfaces/msg/detail/stratified_current_database__struct.h"
#include "dave_interfaces/msg/detail/stratified_current_database__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/vector3__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dave_interfaces__msg__stratified_current_database__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("dave_interfaces.msg._stratified_current_database.StratifiedCurrentDatabase", full_classname_dest, 74) == 0);
  }
  dave_interfaces__msg__StratifiedCurrentDatabase * ros_message = _ros_message;
  {  // depths
    PyObject * field = PyObject_GetAttrString(_pymsg, "depths");
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
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->depths), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->depths.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'depths'");
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
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->depths), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->depths.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // velocities
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocities");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'velocities'");
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
    if (!geometry_msgs__msg__Vector3__Sequence__init(&(ros_message->velocities), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Vector3__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Vector3 * dest = ros_message->velocities.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__vector3__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // time_gmt_year
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_gmt_year");
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
      Py_ssize_t size = view.len / sizeof(int16_t);
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->time_gmt_year), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->time_gmt_year.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'time_gmt_year'");
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
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->time_gmt_year), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->time_gmt_year.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int16_t tmp = (int16_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // time_gmt_month
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_gmt_month");
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
      Py_ssize_t size = view.len / sizeof(int16_t);
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->time_gmt_month), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->time_gmt_month.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'time_gmt_month'");
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
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->time_gmt_month), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->time_gmt_month.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int16_t tmp = (int16_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // time_gmt_day
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_gmt_day");
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
      Py_ssize_t size = view.len / sizeof(int16_t);
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->time_gmt_day), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->time_gmt_day.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'time_gmt_day'");
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
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->time_gmt_day), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->time_gmt_day.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int16_t tmp = (int16_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // time_gmt_hour
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_gmt_hour");
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
      Py_ssize_t size = view.len / sizeof(int16_t);
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->time_gmt_hour), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->time_gmt_hour.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'time_gmt_hour'");
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
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->time_gmt_hour), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->time_gmt_hour.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int16_t tmp = (int16_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // time_gmt_minute
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_gmt_minute");
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
      Py_ssize_t size = view.len / sizeof(int16_t);
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->time_gmt_minute), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->time_gmt_minute.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'time_gmt_minute'");
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
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->time_gmt_minute), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->time_gmt_minute.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int16_t tmp = (int16_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // tidevelocities
    PyObject * field = PyObject_GetAttrString(_pymsg, "tidevelocities");
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
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->tidevelocities), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->tidevelocities.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tidevelocities'");
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
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->tidevelocities), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->tidevelocities.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // tideconstituents
    PyObject * field = PyObject_GetAttrString(_pymsg, "tideconstituents");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tideconstituents = (Py_True == field);
    Py_DECREF(field);
  }
  {  // m2_amp
    PyObject * field = PyObject_GetAttrString(_pymsg, "m2_amp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m2_amp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m2_phase
    PyObject * field = PyObject_GetAttrString(_pymsg, "m2_phase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m2_phase = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m2_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "m2_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m2_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s2_amp
    PyObject * field = PyObject_GetAttrString(_pymsg, "s2_amp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s2_amp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s2_phase
    PyObject * field = PyObject_GetAttrString(_pymsg, "s2_phase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s2_phase = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s2_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "s2_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s2_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // n2_amp
    PyObject * field = PyObject_GetAttrString(_pymsg, "n2_amp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->n2_amp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // n2_phase
    PyObject * field = PyObject_GetAttrString(_pymsg, "n2_phase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->n2_phase = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // n2_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "n2_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->n2_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ebb_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "ebb_direction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ebb_direction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flood_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "flood_direction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flood_direction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // world_start_time_year
    PyObject * field = PyObject_GetAttrString(_pymsg, "world_start_time_year");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->world_start_time_year = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // world_start_time_month
    PyObject * field = PyObject_GetAttrString(_pymsg, "world_start_time_month");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->world_start_time_month = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // world_start_time_day
    PyObject * field = PyObject_GetAttrString(_pymsg, "world_start_time_day");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->world_start_time_day = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // world_start_time_hour
    PyObject * field = PyObject_GetAttrString(_pymsg, "world_start_time_hour");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->world_start_time_hour = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // world_start_time_minute
    PyObject * field = PyObject_GetAttrString(_pymsg, "world_start_time_minute");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->world_start_time_minute = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dave_interfaces__msg__stratified_current_database__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StratifiedCurrentDatabase */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dave_interfaces.msg._stratified_current_database");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StratifiedCurrentDatabase");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dave_interfaces__msg__StratifiedCurrentDatabase * ros_message = (dave_interfaces__msg__StratifiedCurrentDatabase *)raw_ros_message;
  {  // depths
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "depths");
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
    if (itemsize != sizeof(float)) {
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
    if (ros_message->depths.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->depths.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->depths.size * sizeof(float));
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
  {  // velocities
    PyObject * field = NULL;
    size_t size = ros_message->velocities.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Vector3 * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->velocities.data[i]);
      PyObject * pyitem = geometry_msgs__msg__vector3__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "velocities", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_gmt_year
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "time_gmt_year");
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
    if (itemsize != sizeof(int16_t)) {
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
    if (ros_message->time_gmt_year.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int16_t * src = &(ros_message->time_gmt_year.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->time_gmt_year.size * sizeof(int16_t));
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
  {  // time_gmt_month
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "time_gmt_month");
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
    if (itemsize != sizeof(int16_t)) {
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
    if (ros_message->time_gmt_month.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int16_t * src = &(ros_message->time_gmt_month.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->time_gmt_month.size * sizeof(int16_t));
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
  {  // time_gmt_day
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "time_gmt_day");
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
    if (itemsize != sizeof(int16_t)) {
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
    if (ros_message->time_gmt_day.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int16_t * src = &(ros_message->time_gmt_day.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->time_gmt_day.size * sizeof(int16_t));
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
  {  // time_gmt_hour
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "time_gmt_hour");
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
    if (itemsize != sizeof(int16_t)) {
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
    if (ros_message->time_gmt_hour.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int16_t * src = &(ros_message->time_gmt_hour.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->time_gmt_hour.size * sizeof(int16_t));
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
  {  // time_gmt_minute
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "time_gmt_minute");
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
    if (itemsize != sizeof(int16_t)) {
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
    if (ros_message->time_gmt_minute.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int16_t * src = &(ros_message->time_gmt_minute.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->time_gmt_minute.size * sizeof(int16_t));
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
  {  // tidevelocities
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "tidevelocities");
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
    if (itemsize != sizeof(float)) {
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
    if (ros_message->tidevelocities.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->tidevelocities.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->tidevelocities.size * sizeof(float));
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
  {  // tideconstituents
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tideconstituents ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tideconstituents", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m2_amp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m2_amp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m2_amp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m2_phase
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m2_phase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m2_phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m2_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m2_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m2_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s2_amp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s2_amp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s2_amp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s2_phase
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s2_phase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s2_phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s2_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s2_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s2_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // n2_amp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->n2_amp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n2_amp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // n2_phase
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->n2_phase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n2_phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // n2_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->n2_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n2_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ebb_direction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ebb_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ebb_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flood_direction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flood_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flood_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // world_start_time_year
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->world_start_time_year);
    {
      int rc = PyObject_SetAttrString(_pymessage, "world_start_time_year", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // world_start_time_month
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->world_start_time_month);
    {
      int rc = PyObject_SetAttrString(_pymessage, "world_start_time_month", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // world_start_time_day
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->world_start_time_day);
    {
      int rc = PyObject_SetAttrString(_pymessage, "world_start_time_day", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // world_start_time_hour
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->world_start_time_hour);
    {
      int rc = PyObject_SetAttrString(_pymessage, "world_start_time_hour", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // world_start_time_minute
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->world_start_time_minute);
    {
      int rc = PyObject_SetAttrString(_pymessage, "world_start_time_minute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
