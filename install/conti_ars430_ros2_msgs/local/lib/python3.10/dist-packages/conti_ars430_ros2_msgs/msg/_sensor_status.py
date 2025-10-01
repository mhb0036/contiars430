# generated from rosidl_generator_py/resource/_idl.py.em
# with input from conti_ars430_ros2_msgs:msg/SensorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'serial_num'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorStatus(type):
    """Metaclass of message 'SensorStatus'."""

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
                'conti_ars430_ros2_msgs.msg.SensorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_status

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


class SensorStatus(metaclass=Metaclass_SensorStatus):
    """Message class 'SensorStatus'."""

    __slots__ = [
        '_header',
        '_part_num',
        '_assembly_part_num',
        '_sw_part_num',
        '_serial_num',
        '_bl_ver',
        '_bl_crc',
        '_sw_ver',
        '_sw_crc',
        '_utc_time',
        '_internal_time',
        '_cur_damping',
        '_op_state',
        '_cur_far_center_freq',
        '_cur_near_center_freq',
        '_defective',
        '_supply_volt_limit',
        '_sensor_off_temp',
        '_gm_missing',
        '_tx_out_reduced',
        '_max_range_far',
        '_max_range_near',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'part_num': 'uint64',
        'assembly_part_num': 'uint64',
        'sw_part_num': 'uint64',
        'serial_num': 'sequence<uint8>',
        'bl_ver': 'uint32',
        'bl_crc': 'uint32',
        'sw_ver': 'uint32',
        'sw_crc': 'uint32',
        'utc_time': 'uint64',
        'internal_time': 'uint32',
        'cur_damping': 'double',
        'op_state': 'uint8',
        'cur_far_center_freq': 'uint8',
        'cur_near_center_freq': 'uint8',
        'defective': 'uint8',
        'supply_volt_limit': 'uint8',
        'sensor_off_temp': 'uint8',
        'gm_missing': 'uint8',
        'tx_out_reduced': 'uint8',
        'max_range_far': 'double',
        'max_range_near': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.part_num = kwargs.get('part_num', int())
        self.assembly_part_num = kwargs.get('assembly_part_num', int())
        self.sw_part_num = kwargs.get('sw_part_num', int())
        self.serial_num = array.array('B', kwargs.get('serial_num', []))
        self.bl_ver = kwargs.get('bl_ver', int())
        self.bl_crc = kwargs.get('bl_crc', int())
        self.sw_ver = kwargs.get('sw_ver', int())
        self.sw_crc = kwargs.get('sw_crc', int())
        self.utc_time = kwargs.get('utc_time', int())
        self.internal_time = kwargs.get('internal_time', int())
        self.cur_damping = kwargs.get('cur_damping', float())
        self.op_state = kwargs.get('op_state', int())
        self.cur_far_center_freq = kwargs.get('cur_far_center_freq', int())
        self.cur_near_center_freq = kwargs.get('cur_near_center_freq', int())
        self.defective = kwargs.get('defective', int())
        self.supply_volt_limit = kwargs.get('supply_volt_limit', int())
        self.sensor_off_temp = kwargs.get('sensor_off_temp', int())
        self.gm_missing = kwargs.get('gm_missing', int())
        self.tx_out_reduced = kwargs.get('tx_out_reduced', int())
        self.max_range_far = kwargs.get('max_range_far', float())
        self.max_range_near = kwargs.get('max_range_near', float())

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
        if self.part_num != other.part_num:
            return False
        if self.assembly_part_num != other.assembly_part_num:
            return False
        if self.sw_part_num != other.sw_part_num:
            return False
        if self.serial_num != other.serial_num:
            return False
        if self.bl_ver != other.bl_ver:
            return False
        if self.bl_crc != other.bl_crc:
            return False
        if self.sw_ver != other.sw_ver:
            return False
        if self.sw_crc != other.sw_crc:
            return False
        if self.utc_time != other.utc_time:
            return False
        if self.internal_time != other.internal_time:
            return False
        if self.cur_damping != other.cur_damping:
            return False
        if self.op_state != other.op_state:
            return False
        if self.cur_far_center_freq != other.cur_far_center_freq:
            return False
        if self.cur_near_center_freq != other.cur_near_center_freq:
            return False
        if self.defective != other.defective:
            return False
        if self.supply_volt_limit != other.supply_volt_limit:
            return False
        if self.sensor_off_temp != other.sensor_off_temp:
            return False
        if self.gm_missing != other.gm_missing:
            return False
        if self.tx_out_reduced != other.tx_out_reduced:
            return False
        if self.max_range_far != other.max_range_far:
            return False
        if self.max_range_near != other.max_range_near:
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
    def part_num(self):
        """Message field 'part_num'."""
        return self._part_num

    @part_num.setter
    def part_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'part_num' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'part_num' field must be an unsigned integer in [0, 18446744073709551615]"
        self._part_num = value

    @builtins.property
    def assembly_part_num(self):
        """Message field 'assembly_part_num'."""
        return self._assembly_part_num

    @assembly_part_num.setter
    def assembly_part_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'assembly_part_num' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'assembly_part_num' field must be an unsigned integer in [0, 18446744073709551615]"
        self._assembly_part_num = value

    @builtins.property
    def sw_part_num(self):
        """Message field 'sw_part_num'."""
        return self._sw_part_num

    @sw_part_num.setter
    def sw_part_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sw_part_num' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'sw_part_num' field must be an unsigned integer in [0, 18446744073709551615]"
        self._sw_part_num = value

    @builtins.property
    def serial_num(self):
        """Message field 'serial_num'."""
        return self._serial_num

    @serial_num.setter
    def serial_num(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'serial_num' array.array() must have the type code of 'B'"
            self._serial_num = value
            return
        if __debug__:
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'serial_num' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._serial_num = array.array('B', value)

    @builtins.property
    def bl_ver(self):
        """Message field 'bl_ver'."""
        return self._bl_ver

    @bl_ver.setter
    def bl_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bl_ver' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bl_ver' field must be an unsigned integer in [0, 4294967295]"
        self._bl_ver = value

    @builtins.property
    def bl_crc(self):
        """Message field 'bl_crc'."""
        return self._bl_crc

    @bl_crc.setter
    def bl_crc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bl_crc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bl_crc' field must be an unsigned integer in [0, 4294967295]"
        self._bl_crc = value

    @builtins.property
    def sw_ver(self):
        """Message field 'sw_ver'."""
        return self._sw_ver

    @sw_ver.setter
    def sw_ver(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sw_ver' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sw_ver' field must be an unsigned integer in [0, 4294967295]"
        self._sw_ver = value

    @builtins.property
    def sw_crc(self):
        """Message field 'sw_crc'."""
        return self._sw_crc

    @sw_crc.setter
    def sw_crc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sw_crc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sw_crc' field must be an unsigned integer in [0, 4294967295]"
        self._sw_crc = value

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
    def cur_damping(self):
        """Message field 'cur_damping'."""
        return self._cur_damping

    @cur_damping.setter
    def cur_damping(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cur_damping' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cur_damping' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cur_damping = value

    @builtins.property
    def op_state(self):
        """Message field 'op_state'."""
        return self._op_state

    @op_state.setter
    def op_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'op_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'op_state' field must be an unsigned integer in [0, 255]"
        self._op_state = value

    @builtins.property
    def cur_far_center_freq(self):
        """Message field 'cur_far_center_freq'."""
        return self._cur_far_center_freq

    @cur_far_center_freq.setter
    def cur_far_center_freq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_far_center_freq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cur_far_center_freq' field must be an unsigned integer in [0, 255]"
        self._cur_far_center_freq = value

    @builtins.property
    def cur_near_center_freq(self):
        """Message field 'cur_near_center_freq'."""
        return self._cur_near_center_freq

    @cur_near_center_freq.setter
    def cur_near_center_freq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_near_center_freq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cur_near_center_freq' field must be an unsigned integer in [0, 255]"
        self._cur_near_center_freq = value

    @builtins.property
    def defective(self):
        """Message field 'defective'."""
        return self._defective

    @defective.setter
    def defective(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'defective' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'defective' field must be an unsigned integer in [0, 255]"
        self._defective = value

    @builtins.property
    def supply_volt_limit(self):
        """Message field 'supply_volt_limit'."""
        return self._supply_volt_limit

    @supply_volt_limit.setter
    def supply_volt_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_volt_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_volt_limit' field must be an unsigned integer in [0, 255]"
        self._supply_volt_limit = value

    @builtins.property
    def sensor_off_temp(self):
        """Message field 'sensor_off_temp'."""
        return self._sensor_off_temp

    @sensor_off_temp.setter
    def sensor_off_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_off_temp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_off_temp' field must be an unsigned integer in [0, 255]"
        self._sensor_off_temp = value

    @builtins.property
    def gm_missing(self):
        """Message field 'gm_missing'."""
        return self._gm_missing

    @gm_missing.setter
    def gm_missing(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gm_missing' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gm_missing' field must be an unsigned integer in [0, 255]"
        self._gm_missing = value

    @builtins.property
    def tx_out_reduced(self):
        """Message field 'tx_out_reduced'."""
        return self._tx_out_reduced

    @tx_out_reduced.setter
    def tx_out_reduced(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_out_reduced' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tx_out_reduced' field must be an unsigned integer in [0, 255]"
        self._tx_out_reduced = value

    @builtins.property
    def max_range_far(self):
        """Message field 'max_range_far'."""
        return self._max_range_far

    @max_range_far.setter
    def max_range_far(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_range_far' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_range_far' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_range_far = value

    @builtins.property
    def max_range_near(self):
        """Message field 'max_range_near'."""
        return self._max_range_near

    @max_range_near.setter
    def max_range_near(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_range_near' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_range_near' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_range_near = value
