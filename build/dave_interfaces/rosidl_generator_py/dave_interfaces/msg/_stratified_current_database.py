# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dave_interfaces:msg/StratifiedCurrentDatabase.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'depths'
# Member 'time_gmt_year'
# Member 'time_gmt_month'
# Member 'time_gmt_day'
# Member 'time_gmt_hour'
# Member 'time_gmt_minute'
# Member 'tidevelocities'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StratifiedCurrentDatabase(type):
    """Metaclass of message 'StratifiedCurrentDatabase'."""

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
                'dave_interfaces.msg.StratifiedCurrentDatabase')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stratified_current_database
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stratified_current_database
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stratified_current_database
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stratified_current_database
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stratified_current_database

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StratifiedCurrentDatabase(metaclass=Metaclass_StratifiedCurrentDatabase):
    """Message class 'StratifiedCurrentDatabase'."""

    __slots__ = [
        '_depths',
        '_velocities',
        '_time_gmt_year',
        '_time_gmt_month',
        '_time_gmt_day',
        '_time_gmt_hour',
        '_time_gmt_minute',
        '_tidevelocities',
        '_tideconstituents',
        '_m2_amp',
        '_m2_phase',
        '_m2_speed',
        '_s2_amp',
        '_s2_phase',
        '_s2_speed',
        '_n2_amp',
        '_n2_phase',
        '_n2_speed',
        '_ebb_direction',
        '_flood_direction',
        '_world_start_time_year',
        '_world_start_time_month',
        '_world_start_time_day',
        '_world_start_time_hour',
        '_world_start_time_minute',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'depths': 'sequence<float>',
        'velocities': 'sequence<geometry_msgs/Vector3>',
        'time_gmt_year': 'sequence<int16>',
        'time_gmt_month': 'sequence<int16>',
        'time_gmt_day': 'sequence<int16>',
        'time_gmt_hour': 'sequence<int16>',
        'time_gmt_minute': 'sequence<int16>',
        'tidevelocities': 'sequence<float>',
        'tideconstituents': 'boolean',
        'm2_amp': 'float',
        'm2_phase': 'float',
        'm2_speed': 'float',
        's2_amp': 'float',
        's2_phase': 'float',
        's2_speed': 'float',
        'n2_amp': 'float',
        'n2_phase': 'float',
        'n2_speed': 'float',
        'ebb_direction': 'float',
        'flood_direction': 'float',
        'world_start_time_year': 'int16',
        'world_start_time_month': 'int16',
        'world_start_time_day': 'int16',
        'world_start_time_hour': 'int16',
        'world_start_time_minute': 'int16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
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
        self.depths = array.array('f', kwargs.get('depths', []))
        self.velocities = kwargs.get('velocities', [])
        self.time_gmt_year = array.array('h', kwargs.get('time_gmt_year', []))
        self.time_gmt_month = array.array('h', kwargs.get('time_gmt_month', []))
        self.time_gmt_day = array.array('h', kwargs.get('time_gmt_day', []))
        self.time_gmt_hour = array.array('h', kwargs.get('time_gmt_hour', []))
        self.time_gmt_minute = array.array('h', kwargs.get('time_gmt_minute', []))
        self.tidevelocities = array.array('f', kwargs.get('tidevelocities', []))
        self.tideconstituents = kwargs.get('tideconstituents', bool())
        self.m2_amp = kwargs.get('m2_amp', float())
        self.m2_phase = kwargs.get('m2_phase', float())
        self.m2_speed = kwargs.get('m2_speed', float())
        self.s2_amp = kwargs.get('s2_amp', float())
        self.s2_phase = kwargs.get('s2_phase', float())
        self.s2_speed = kwargs.get('s2_speed', float())
        self.n2_amp = kwargs.get('n2_amp', float())
        self.n2_phase = kwargs.get('n2_phase', float())
        self.n2_speed = kwargs.get('n2_speed', float())
        self.ebb_direction = kwargs.get('ebb_direction', float())
        self.flood_direction = kwargs.get('flood_direction', float())
        self.world_start_time_year = kwargs.get('world_start_time_year', int())
        self.world_start_time_month = kwargs.get('world_start_time_month', int())
        self.world_start_time_day = kwargs.get('world_start_time_day', int())
        self.world_start_time_hour = kwargs.get('world_start_time_hour', int())
        self.world_start_time_minute = kwargs.get('world_start_time_minute', int())

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
        if self.depths != other.depths:
            return False
        if self.velocities != other.velocities:
            return False
        if self.time_gmt_year != other.time_gmt_year:
            return False
        if self.time_gmt_month != other.time_gmt_month:
            return False
        if self.time_gmt_day != other.time_gmt_day:
            return False
        if self.time_gmt_hour != other.time_gmt_hour:
            return False
        if self.time_gmt_minute != other.time_gmt_minute:
            return False
        if self.tidevelocities != other.tidevelocities:
            return False
        if self.tideconstituents != other.tideconstituents:
            return False
        if self.m2_amp != other.m2_amp:
            return False
        if self.m2_phase != other.m2_phase:
            return False
        if self.m2_speed != other.m2_speed:
            return False
        if self.s2_amp != other.s2_amp:
            return False
        if self.s2_phase != other.s2_phase:
            return False
        if self.s2_speed != other.s2_speed:
            return False
        if self.n2_amp != other.n2_amp:
            return False
        if self.n2_phase != other.n2_phase:
            return False
        if self.n2_speed != other.n2_speed:
            return False
        if self.ebb_direction != other.ebb_direction:
            return False
        if self.flood_direction != other.flood_direction:
            return False
        if self.world_start_time_year != other.world_start_time_year:
            return False
        if self.world_start_time_month != other.world_start_time_month:
            return False
        if self.world_start_time_day != other.world_start_time_day:
            return False
        if self.world_start_time_hour != other.world_start_time_hour:
            return False
        if self.world_start_time_minute != other.world_start_time_minute:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def depths(self):
        """Message field 'depths'."""
        return self._depths

    @depths.setter
    def depths(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'depths' array.array() must have the type code of 'f'"
                self._depths = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'depths' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._depths = array.array('f', value)

    @builtins.property
    def velocities(self):
        """Message field 'velocities'."""
        return self._velocities

    @velocities.setter
    def velocities(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'velocities' field must be a set or sequence and each value of type 'Vector3'"
        self._velocities = value

    @builtins.property
    def time_gmt_year(self):
        """Message field 'time_gmt_year'."""
        return self._time_gmt_year

    @time_gmt_year.setter
    def time_gmt_year(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'h', \
                    "The 'time_gmt_year' array.array() must have the type code of 'h'"
                self._time_gmt_year = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'time_gmt_year' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._time_gmt_year = array.array('h', value)

    @builtins.property
    def time_gmt_month(self):
        """Message field 'time_gmt_month'."""
        return self._time_gmt_month

    @time_gmt_month.setter
    def time_gmt_month(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'h', \
                    "The 'time_gmt_month' array.array() must have the type code of 'h'"
                self._time_gmt_month = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'time_gmt_month' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._time_gmt_month = array.array('h', value)

    @builtins.property
    def time_gmt_day(self):
        """Message field 'time_gmt_day'."""
        return self._time_gmt_day

    @time_gmt_day.setter
    def time_gmt_day(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'h', \
                    "The 'time_gmt_day' array.array() must have the type code of 'h'"
                self._time_gmt_day = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'time_gmt_day' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._time_gmt_day = array.array('h', value)

    @builtins.property
    def time_gmt_hour(self):
        """Message field 'time_gmt_hour'."""
        return self._time_gmt_hour

    @time_gmt_hour.setter
    def time_gmt_hour(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'h', \
                    "The 'time_gmt_hour' array.array() must have the type code of 'h'"
                self._time_gmt_hour = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'time_gmt_hour' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._time_gmt_hour = array.array('h', value)

    @builtins.property
    def time_gmt_minute(self):
        """Message field 'time_gmt_minute'."""
        return self._time_gmt_minute

    @time_gmt_minute.setter
    def time_gmt_minute(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'h', \
                    "The 'time_gmt_minute' array.array() must have the type code of 'h'"
                self._time_gmt_minute = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'time_gmt_minute' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._time_gmt_minute = array.array('h', value)

    @builtins.property
    def tidevelocities(self):
        """Message field 'tidevelocities'."""
        return self._tidevelocities

    @tidevelocities.setter
    def tidevelocities(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'tidevelocities' array.array() must have the type code of 'f'"
                self._tidevelocities = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'tidevelocities' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._tidevelocities = array.array('f', value)

    @builtins.property
    def tideconstituents(self):
        """Message field 'tideconstituents'."""
        return self._tideconstituents

    @tideconstituents.setter
    def tideconstituents(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'tideconstituents' field must be of type 'bool'"
        self._tideconstituents = value

    @builtins.property
    def m2_amp(self):
        """Message field 'm2_amp'."""
        return self._m2_amp

    @m2_amp.setter
    def m2_amp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'm2_amp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'm2_amp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._m2_amp = value

    @builtins.property
    def m2_phase(self):
        """Message field 'm2_phase'."""
        return self._m2_phase

    @m2_phase.setter
    def m2_phase(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'm2_phase' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'm2_phase' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._m2_phase = value

    @builtins.property
    def m2_speed(self):
        """Message field 'm2_speed'."""
        return self._m2_speed

    @m2_speed.setter
    def m2_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'm2_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'm2_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._m2_speed = value

    @builtins.property
    def s2_amp(self):
        """Message field 's2_amp'."""
        return self._s2_amp

    @s2_amp.setter
    def s2_amp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 's2_amp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's2_amp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s2_amp = value

    @builtins.property
    def s2_phase(self):
        """Message field 's2_phase'."""
        return self._s2_phase

    @s2_phase.setter
    def s2_phase(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 's2_phase' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's2_phase' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s2_phase = value

    @builtins.property
    def s2_speed(self):
        """Message field 's2_speed'."""
        return self._s2_speed

    @s2_speed.setter
    def s2_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 's2_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's2_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s2_speed = value

    @builtins.property
    def n2_amp(self):
        """Message field 'n2_amp'."""
        return self._n2_amp

    @n2_amp.setter
    def n2_amp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'n2_amp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'n2_amp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._n2_amp = value

    @builtins.property
    def n2_phase(self):
        """Message field 'n2_phase'."""
        return self._n2_phase

    @n2_phase.setter
    def n2_phase(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'n2_phase' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'n2_phase' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._n2_phase = value

    @builtins.property
    def n2_speed(self):
        """Message field 'n2_speed'."""
        return self._n2_speed

    @n2_speed.setter
    def n2_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'n2_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'n2_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._n2_speed = value

    @builtins.property
    def ebb_direction(self):
        """Message field 'ebb_direction'."""
        return self._ebb_direction

    @ebb_direction.setter
    def ebb_direction(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ebb_direction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ebb_direction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ebb_direction = value

    @builtins.property
    def flood_direction(self):
        """Message field 'flood_direction'."""
        return self._flood_direction

    @flood_direction.setter
    def flood_direction(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'flood_direction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'flood_direction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._flood_direction = value

    @builtins.property
    def world_start_time_year(self):
        """Message field 'world_start_time_year'."""
        return self._world_start_time_year

    @world_start_time_year.setter
    def world_start_time_year(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'world_start_time_year' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'world_start_time_year' field must be an integer in [-32768, 32767]"
        self._world_start_time_year = value

    @builtins.property
    def world_start_time_month(self):
        """Message field 'world_start_time_month'."""
        return self._world_start_time_month

    @world_start_time_month.setter
    def world_start_time_month(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'world_start_time_month' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'world_start_time_month' field must be an integer in [-32768, 32767]"
        self._world_start_time_month = value

    @builtins.property
    def world_start_time_day(self):
        """Message field 'world_start_time_day'."""
        return self._world_start_time_day

    @world_start_time_day.setter
    def world_start_time_day(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'world_start_time_day' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'world_start_time_day' field must be an integer in [-32768, 32767]"
        self._world_start_time_day = value

    @builtins.property
    def world_start_time_hour(self):
        """Message field 'world_start_time_hour'."""
        return self._world_start_time_hour

    @world_start_time_hour.setter
    def world_start_time_hour(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'world_start_time_hour' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'world_start_time_hour' field must be an integer in [-32768, 32767]"
        self._world_start_time_hour = value

    @builtins.property
    def world_start_time_minute(self):
        """Message field 'world_start_time_minute'."""
        return self._world_start_time_minute

    @world_start_time_minute.setter
    def world_start_time_minute(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'world_start_time_minute' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'world_start_time_minute' field must be an integer in [-32768, 32767]"
        self._world_start_time_minute = value
