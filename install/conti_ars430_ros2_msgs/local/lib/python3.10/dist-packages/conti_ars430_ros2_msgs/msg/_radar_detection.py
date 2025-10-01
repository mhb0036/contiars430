# generated from rosidl_generator_py/resource/_idl.py.em
# with input from conti_ars430_ros2_msgs:msg/RadarDetection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarDetection(type):
    """Metaclass of message 'RadarDetection'."""

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
                'conti_ars430_ros2_msgs.msg.RadarDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_detection

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarDetection(metaclass=Metaclass_RadarDetection):
    """Message class 'RadarDetection'."""

    __slots__ = [
        '_range',
        '_v_rel_rad',
        '_az_ang0',
        '_az_ang1',
        '_el_ang',
        '_rcs0',
        '_rcs1',
        '_prob0',
        '_prob1',
        '_range_var',
        '_v_rel_rad_var',
        '_az_ang0_var',
        '_az_ang1_var',
        '_el_ang_var',
        '_prob_false_alarm',
        '_snr',
    ]

    _fields_and_field_types = {
        'range': 'float',
        'v_rel_rad': 'float',
        'az_ang0': 'float',
        'az_ang1': 'float',
        'el_ang': 'float',
        'rcs0': 'float',
        'rcs1': 'float',
        'prob0': 'float',
        'prob1': 'float',
        'range_var': 'float',
        'v_rel_rad_var': 'float',
        'az_ang0_var': 'float',
        'az_ang1_var': 'float',
        'el_ang_var': 'float',
        'prob_false_alarm': 'float',
        'snr': 'float',
    }

    SLOT_TYPES = (
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.range = kwargs.get('range', float())
        self.v_rel_rad = kwargs.get('v_rel_rad', float())
        self.az_ang0 = kwargs.get('az_ang0', float())
        self.az_ang1 = kwargs.get('az_ang1', float())
        self.el_ang = kwargs.get('el_ang', float())
        self.rcs0 = kwargs.get('rcs0', float())
        self.rcs1 = kwargs.get('rcs1', float())
        self.prob0 = kwargs.get('prob0', float())
        self.prob1 = kwargs.get('prob1', float())
        self.range_var = kwargs.get('range_var', float())
        self.v_rel_rad_var = kwargs.get('v_rel_rad_var', float())
        self.az_ang0_var = kwargs.get('az_ang0_var', float())
        self.az_ang1_var = kwargs.get('az_ang1_var', float())
        self.el_ang_var = kwargs.get('el_ang_var', float())
        self.prob_false_alarm = kwargs.get('prob_false_alarm', float())
        self.snr = kwargs.get('snr', float())

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
        if self.range != other.range:
            return False
        if self.v_rel_rad != other.v_rel_rad:
            return False
        if self.az_ang0 != other.az_ang0:
            return False
        if self.az_ang1 != other.az_ang1:
            return False
        if self.el_ang != other.el_ang:
            return False
        if self.rcs0 != other.rcs0:
            return False
        if self.rcs1 != other.rcs1:
            return False
        if self.prob0 != other.prob0:
            return False
        if self.prob1 != other.prob1:
            return False
        if self.range_var != other.range_var:
            return False
        if self.v_rel_rad_var != other.v_rel_rad_var:
            return False
        if self.az_ang0_var != other.az_ang0_var:
            return False
        if self.az_ang1_var != other.az_ang1_var:
            return False
        if self.el_ang_var != other.el_ang_var:
            return False
        if self.prob_false_alarm != other.prob_false_alarm:
            return False
        if self.snr != other.snr:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range = value

    @builtins.property
    def v_rel_rad(self):
        """Message field 'v_rel_rad'."""
        return self._v_rel_rad

    @v_rel_rad.setter
    def v_rel_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_rel_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v_rel_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v_rel_rad = value

    @builtins.property
    def az_ang0(self):
        """Message field 'az_ang0'."""
        return self._az_ang0

    @az_ang0.setter
    def az_ang0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az_ang0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'az_ang0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._az_ang0 = value

    @builtins.property
    def az_ang1(self):
        """Message field 'az_ang1'."""
        return self._az_ang1

    @az_ang1.setter
    def az_ang1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az_ang1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'az_ang1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._az_ang1 = value

    @builtins.property
    def el_ang(self):
        """Message field 'el_ang'."""
        return self._el_ang

    @el_ang.setter
    def el_ang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'el_ang' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'el_ang' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._el_ang = value

    @builtins.property
    def rcs0(self):
        """Message field 'rcs0'."""
        return self._rcs0

    @rcs0.setter
    def rcs0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rcs0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rcs0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rcs0 = value

    @builtins.property
    def rcs1(self):
        """Message field 'rcs1'."""
        return self._rcs1

    @rcs1.setter
    def rcs1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rcs1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rcs1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rcs1 = value

    @builtins.property
    def prob0(self):
        """Message field 'prob0'."""
        return self._prob0

    @prob0.setter
    def prob0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'prob0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'prob0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._prob0 = value

    @builtins.property
    def prob1(self):
        """Message field 'prob1'."""
        return self._prob1

    @prob1.setter
    def prob1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'prob1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'prob1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._prob1 = value

    @builtins.property
    def range_var(self):
        """Message field 'range_var'."""
        return self._range_var

    @range_var.setter
    def range_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range_var = value

    @builtins.property
    def v_rel_rad_var(self):
        """Message field 'v_rel_rad_var'."""
        return self._v_rel_rad_var

    @v_rel_rad_var.setter
    def v_rel_rad_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_rel_rad_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v_rel_rad_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v_rel_rad_var = value

    @builtins.property
    def az_ang0_var(self):
        """Message field 'az_ang0_var'."""
        return self._az_ang0_var

    @az_ang0_var.setter
    def az_ang0_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az_ang0_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'az_ang0_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._az_ang0_var = value

    @builtins.property
    def az_ang1_var(self):
        """Message field 'az_ang1_var'."""
        return self._az_ang1_var

    @az_ang1_var.setter
    def az_ang1_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az_ang1_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'az_ang1_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._az_ang1_var = value

    @builtins.property
    def el_ang_var(self):
        """Message field 'el_ang_var'."""
        return self._el_ang_var

    @el_ang_var.setter
    def el_ang_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'el_ang_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'el_ang_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._el_ang_var = value

    @builtins.property
    def prob_false_alarm(self):
        """Message field 'prob_false_alarm'."""
        return self._prob_false_alarm

    @prob_false_alarm.setter
    def prob_false_alarm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'prob_false_alarm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'prob_false_alarm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._prob_false_alarm = value

    @builtins.property
    def snr(self):
        """Message field 'snr'."""
        return self._snr

    @snr.setter
    def snr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'snr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'snr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._snr = value
