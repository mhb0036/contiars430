# generated from rosidl_generator_py/resource/_idl.py.em
# with input from conti_ars430_ros2_msgs:msg/RadarDetectionImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarDetectionImage(type):
    """Metaclass of message 'RadarDetectionImage'."""

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
            module = import_type_support('conti_ars430_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'conti_ars430_ros2_msgs.msg.RadarDetectionImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_detection_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_detection_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_detection_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_detection_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_detection_image

            from conti_ars430_ros2_msgs.msg import RadarDetection
            if RadarDetection.__class__._TYPE_SUPPORT is None:
                RadarDetection.__class__.__import_type_support__()

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


class RadarDetectionImage(metaclass=Metaclass_RadarDetectionImage):
    """Message class 'RadarDetectionImage'."""

    __slots__ = [
        '_header',
        '_detect_type',
        '_utc_time',
        '_internal_time',
        '_meas_count',
        '_cycle_count',
        '_num_avail_detects',
        '_vel_ambig',
        '_center_freq',
        '_detection_list',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'detect_type': 'uint16',
        'utc_time': 'uint64',
        'internal_time': 'uint32',
        'meas_count': 'uint32',
        'cycle_count': 'uint32',
        'num_avail_detects': 'uint16',
        'vel_ambig': 'double',
        'center_freq': 'float',
        'detection_list': 'sequence<conti_ars430_ros2_msgs/RadarDetection>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['conti_ars430_ros2_msgs', 'msg'], 'RadarDetection')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.detect_type = kwargs.get('detect_type', int())
        self.utc_time = kwargs.get('utc_time', int())
        self.internal_time = kwargs.get('internal_time', int())
        self.meas_count = kwargs.get('meas_count', int())
        self.cycle_count = kwargs.get('cycle_count', int())
        self.num_avail_detects = kwargs.get('num_avail_detects', int())
        self.vel_ambig = kwargs.get('vel_ambig', float())
        self.center_freq = kwargs.get('center_freq', float())
        self.detection_list = kwargs.get('detection_list', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.detect_type != other.detect_type:
            return False
        if self.utc_time != other.utc_time:
            return False
        if self.internal_time != other.internal_time:
            return False
        if self.meas_count != other.meas_count:
            return False
        if self.cycle_count != other.cycle_count:
            return False
        if self.num_avail_detects != other.num_avail_detects:
            return False
        if self.vel_ambig != other.vel_ambig:
            return False
        if self.center_freq != other.center_freq:
            return False
        if self.detection_list != other.detection_list:
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
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def detect_type(self):
        """Message field 'detect_type'."""
        return self._detect_type

    @detect_type.setter
    def detect_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'detect_type' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'detect_type' field must be an unsigned integer in [0, 65535]"
        self._detect_type = value

    @builtins.property
    def utc_time(self):
        """Message field 'utc_time'."""
        return self._utc_time

    @utc_time.setter
    def utc_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utc_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'utc_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._utc_time = value

    @builtins.property
    def internal_time(self):
        """Message field 'internal_time'."""
        return self._internal_time

    @internal_time.setter
    def internal_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'internal_time' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'internal_time' field must be an unsigned integer in [0, 4294967295]"
        self._internal_time = value

    @builtins.property
    def meas_count(self):
        """Message field 'meas_count'."""
        return self._meas_count

    @meas_count.setter
    def meas_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'meas_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'meas_count' field must be an unsigned integer in [0, 4294967295]"
        self._meas_count = value

    @builtins.property
    def cycle_count(self):
        """Message field 'cycle_count'."""
        return self._cycle_count

    @cycle_count.setter
    def cycle_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cycle_count' field must be an unsigned integer in [0, 4294967295]"
        self._cycle_count = value

    @builtins.property
    def num_avail_detects(self):
        """Message field 'num_avail_detects'."""
        return self._num_avail_detects

    @num_avail_detects.setter
    def num_avail_detects(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_avail_detects' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_avail_detects' field must be an unsigned integer in [0, 65535]"
        self._num_avail_detects = value

    @builtins.property
    def vel_ambig(self):
        """Message field 'vel_ambig'."""
        return self._vel_ambig

    @vel_ambig.setter
    def vel_ambig(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_ambig' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_ambig' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_ambig = value

    @builtins.property
    def center_freq(self):
        """Message field 'center_freq'."""
        return self._center_freq

    @center_freq.setter
    def center_freq(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_freq' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'center_freq' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._center_freq = value

    @builtins.property
    def detection_list(self):
        """Message field 'detection_list'."""
        return self._detection_list

    @detection_list.setter
    def detection_list(self, value):
        if __debug__:
            from conti_ars430_ros2_msgs.msg import RadarDetection
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
                 all(isinstance(v, RadarDetection) for v in value) and
                 True), \
                "The 'detection_list' field must be a set or sequence and each value of type 'RadarDetection'"
        self._detection_list = value
