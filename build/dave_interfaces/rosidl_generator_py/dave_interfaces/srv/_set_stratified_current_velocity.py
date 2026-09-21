# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dave_interfaces:srv/SetStratifiedCurrentVelocity.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetStratifiedCurrentVelocity_Request(type):
    """Metaclass of message 'SetStratifiedCurrentVelocity_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dave_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dave_interfaces.srv.SetStratifiedCurrentVelocity_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_stratified_current_velocity__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_stratified_current_velocity__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_stratified_current_velocity__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_stratified_current_velocity__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_stratified_current_velocity__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetStratifiedCurrentVelocity_Request(metaclass=Metaclass_SetStratifiedCurrentVelocity_Request):
    """Message class 'SetStratifiedCurrentVelocity_Request'."""

    __slots__ = [
        '_layer',
        '_velocity',
        '_horizontal_angle',
        '_vertical_angle',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'layer': 'uint16',
        'velocity': 'double',
        'horizontal_angle': 'double',
        'vertical_angle': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.layer = kwargs.get('layer', int())
        self.velocity = kwargs.get('velocity', float())
        self.horizontal_angle = kwargs.get('horizontal_angle', float())
        self.vertical_angle = kwargs.get('vertical_angle', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.layer != other.layer:
            return False
        if self.velocity != other.velocity:
            return False
        if self.horizontal_angle != other.horizontal_angle:
            return False
        if self.vertical_angle != other.vertical_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def layer(self):
        """Message field 'layer'."""
        return self._layer

    @layer.setter
    def layer(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'layer' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'layer' field must be an unsigned integer in [0, 65535]"
        self._layer = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity = value

    @builtins.property
    def horizontal_angle(self):
        """Message field 'horizontal_angle'."""
        return self._horizontal_angle

    @horizontal_angle.setter
    def horizontal_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'horizontal_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'horizontal_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._horizontal_angle = value

    @builtins.property
    def vertical_angle(self):
        """Message field 'vertical_angle'."""
        return self._vertical_angle

    @vertical_angle.setter
    def vertical_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_angle = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetStratifiedCurrentVelocity_Response(type):
    """Metaclass of message 'SetStratifiedCurrentVelocity_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dave_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dave_interfaces.srv.SetStratifiedCurrentVelocity_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_stratified_current_velocity__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_stratified_current_velocity__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_stratified_current_velocity__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_stratified_current_velocity__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_stratified_current_velocity__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetStratifiedCurrentVelocity_Response(metaclass=Metaclass_SetStratifiedCurrentVelocity_Response):
    """Message class 'SetStratifiedCurrentVelocity_Response'."""

    __slots__ = [
        '_success',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetStratifiedCurrentVelocity_Event(type):
    """Metaclass of message 'SetStratifiedCurrentVelocity_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dave_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dave_interfaces.srv.SetStratifiedCurrentVelocity_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_stratified_current_velocity__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_stratified_current_velocity__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_stratified_current_velocity__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_stratified_current_velocity__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_stratified_current_velocity__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetStratifiedCurrentVelocity_Event(metaclass=Metaclass_SetStratifiedCurrentVelocity_Event):
    """Message class 'SetStratifiedCurrentVelocity_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<dave_interfaces/SetStratifiedCurrentVelocity_Request, 1>',
        'response': 'sequence<dave_interfaces/SetStratifiedCurrentVelocity_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['dave_interfaces', 'srv'], 'SetStratifiedCurrentVelocity_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['dave_interfaces', 'srv'], 'SetStratifiedCurrentVelocity_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from dave_interfaces.srv import SetStratifiedCurrentVelocity_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SetStratifiedCurrentVelocity_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetStratifiedCurrentVelocity_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from dave_interfaces.srv import SetStratifiedCurrentVelocity_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, SetStratifiedCurrentVelocity_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetStratifiedCurrentVelocity_Response'"
        self._response = value


class Metaclass_SetStratifiedCurrentVelocity(type):
    """Metaclass of service 'SetStratifiedCurrentVelocity'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dave_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dave_interfaces.srv.SetStratifiedCurrentVelocity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_stratified_current_velocity

            from dave_interfaces.srv import _set_stratified_current_velocity
            if _set_stratified_current_velocity.Metaclass_SetStratifiedCurrentVelocity_Request._TYPE_SUPPORT is None:
                _set_stratified_current_velocity.Metaclass_SetStratifiedCurrentVelocity_Request.__import_type_support__()
            if _set_stratified_current_velocity.Metaclass_SetStratifiedCurrentVelocity_Response._TYPE_SUPPORT is None:
                _set_stratified_current_velocity.Metaclass_SetStratifiedCurrentVelocity_Response.__import_type_support__()
            if _set_stratified_current_velocity.Metaclass_SetStratifiedCurrentVelocity_Event._TYPE_SUPPORT is None:
                _set_stratified_current_velocity.Metaclass_SetStratifiedCurrentVelocity_Event.__import_type_support__()


class SetStratifiedCurrentVelocity(metaclass=Metaclass_SetStratifiedCurrentVelocity):
    from dave_interfaces.srv._set_stratified_current_velocity import SetStratifiedCurrentVelocity_Request as Request
    from dave_interfaces.srv._set_stratified_current_velocity import SetStratifiedCurrentVelocity_Response as Response
    from dave_interfaces.srv._set_stratified_current_velocity import SetStratifiedCurrentVelocity_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
