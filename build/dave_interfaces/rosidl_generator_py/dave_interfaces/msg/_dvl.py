# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dave_interfaces:msg/DVL.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DVL(type):
    """Metaclass of message 'DVL'."""

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
                'dave_interfaces.msg.DVL')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dvl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dvl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dvl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dvl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dvl

            from dave_interfaces.msg import DVLBeam
            if DVLBeam.__class__._TYPE_SUPPORT is None:
                DVLBeam.__class__.__import_type_support__()

            from dave_interfaces.msg import DVLTarget
            if DVLTarget.__class__._TYPE_SUPPORT is None:
                DVLTarget.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistWithCovariance
            if TwistWithCovariance.__class__._TYPE_SUPPORT is None:
                TwistWithCovariance.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DVL(metaclass=Metaclass_DVL):
    """Message class 'DVL'."""

    __slots__ = [
        '_header',
        '_type',
        '_target',
        '_velocity',
        '_beams',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'type': 'string',
        'target': 'dave_interfaces/DVLTarget',
        'velocity': 'geometry_msgs/TwistWithCovariance',
        'beams': 'sequence<dave_interfaces/DVLBeam>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dave_interfaces', 'msg'], 'DVLTarget'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['dave_interfaces', 'msg'], 'DVLBeam')),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.type = kwargs.get('type', str())
        from dave_interfaces.msg import DVLTarget
        self.target = kwargs.get('target', DVLTarget())
        from geometry_msgs.msg import TwistWithCovariance
        self.velocity = kwargs.get('velocity', TwistWithCovariance())
        self.beams = kwargs.get('beams', [])

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
        if self.header != other.header:
            return False
        if self.type != other.type:
            return False
        if self.target != other.target:
            return False
        if self.velocity != other.velocity:
            return False
        if self.beams != other.beams:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if self._check_fields:
            from dave_interfaces.msg import DVLTarget
            assert \
                isinstance(value, DVLTarget), \
                "The 'target' field must be a sub message of type 'DVLTarget'"
        self._target = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if self._check_fields:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'velocity' field must be a sub message of type 'TwistWithCovariance'"
        self._velocity = value

    @builtins.property
    def beams(self):
        """Message field 'beams'."""
        return self._beams

    @beams.setter
    def beams(self, value):
        if self._check_fields:
            from dave_interfaces.msg import DVLBeam
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
                 all(isinstance(v, DVLBeam) for v in value) and
                 True), \
                "The 'beams' field must be a set or sequence and each value of type 'DVLBeam'"
        self._beams = value
