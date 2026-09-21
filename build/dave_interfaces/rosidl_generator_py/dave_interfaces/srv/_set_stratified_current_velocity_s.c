// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dave_interfaces:srv/SetStratifiedCurrentVelocity.idl
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
#include "dave_interfaces/srv/detail/set_stratified_current_velocity__struct.h"
#include "dave_interfaces/srv/detail/set_stratified_current_velocity__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dave_interfaces__srv__set_stratified_current_velocity__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[90];
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
    assert(strncmp("dave_interfaces.srv._set_stratified_current_velocity.SetStratifiedCurrentVelocity_Request", full_classname_dest, 89) == 0);
  }
  dave_interfaces__srv__SetStratifiedCurrentVelocity_Request * ros_message = _ros_message;
  {  // layer
    PyObject * field = PyObject_GetAttrString(_pymsg, "layer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->layer = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dave_interfaces__srv__set_stratified_current_velocity__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetStratifiedCurrentVelocity_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dave_interfaces.srv._set_stratified_current_velocity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetStratifiedCurrentVelocity_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dave_interfaces__srv__SetStratifiedCurrentVelocity_Request * ros_message = (dave_interfaces__srv__SetStratifiedCurrentVelocity_Request *)raw_ros_message;
  {  // layer
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->layer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "layer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "dave_interfaces/srv/detail/set_stratified_current_velocity__struct.h"
// already included above
// #include "dave_interfaces/srv/detail/set_stratified_current_velocity__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dave_interfaces__srv__set_stratified_current_velocity__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[91];
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
    assert(strncmp("dave_interfaces.srv._set_stratified_current_velocity.SetStratifiedCurrentVelocity_Response", full_classname_dest, 90) == 0);
  }
  dave_interfaces__srv__SetStratifiedCurrentVelocity_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dave_interfaces__srv__set_stratified_current_velocity__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetStratifiedCurrentVelocity_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dave_interfaces.srv._set_stratified_current_velocity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetStratifiedCurrentVelocity_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dave_interfaces__srv__SetStratifiedCurrentVelocity_Response * ros_message = (dave_interfaces__srv__SetStratifiedCurrentVelocity_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "dave_interfaces/srv/detail/set_stratified_current_velocity__struct.h"
// already included above
// #include "dave_interfaces/srv/detail/set_stratified_current_velocity__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool dave_interfaces__srv__set_stratified_current_velocity__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dave_interfaces__srv__set_stratified_current_velocity__request__convert_to_py(void * raw_ros_message);
bool dave_interfaces__srv__set_stratified_current_velocity__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * dave_interfaces__srv__set_stratified_current_velocity__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dave_interfaces__srv__set_stratified_current_velocity__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[88];
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
    assert(strncmp("dave_interfaces.srv._set_stratified_current_velocity.SetStratifiedCurrentVelocity_Event", full_classname_dest, 87) == 0);
  }
  dave_interfaces__srv__SetStratifiedCurrentVelocity_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
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
    if (!dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create dave_interfaces__srv__SetStratifiedCurrentVelocity_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    dave_interfaces__srv__SetStratifiedCurrentVelocity_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!dave_interfaces__srv__set_stratified_current_velocity__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
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
    if (!dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create dave_interfaces__srv__SetStratifiedCurrentVelocity_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    dave_interfaces__srv__SetStratifiedCurrentVelocity_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!dave_interfaces__srv__set_stratified_current_velocity__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * dave_interfaces__srv__set_stratified_current_velocity__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetStratifiedCurrentVelocity_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dave_interfaces.srv._set_stratified_current_velocity");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetStratifiedCurrentVelocity_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dave_interfaces__srv__SetStratifiedCurrentVelocity_Event * ros_message = (dave_interfaces__srv__SetStratifiedCurrentVelocity_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    dave_interfaces__srv__SetStratifiedCurrentVelocity_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = dave_interfaces__srv__set_stratified_current_velocity__request__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    dave_interfaces__srv__SetStratifiedCurrentVelocity_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = dave_interfaces__srv__set_stratified_current_velocity__response__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
