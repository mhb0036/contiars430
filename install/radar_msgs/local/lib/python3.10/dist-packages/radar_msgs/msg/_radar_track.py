# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_msgs:msg/RadarTrack.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position_covariance'
# Member 'velocity_covariance'
# Member 'acceleration_covariance'
# Member 'size_covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarTrack(type):
    """Metaclass of message 'RadarTrack'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_CLASSIFICATION': 0,
        'STATIC': 1,
        'DYNAMIC': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('radar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'radar_msgs.msg.RadarTrack')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_track
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_track
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_track
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_track
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_track

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_CLASSIFICATION': cls.__constants['NO_CLASSIFICATION'],
            'STATIC': cls.__constants['STATIC'],
            'DYNAMIC': cls.__constants['DYNAMIC'],
        }

    @property
    def NO_CLASSIFICATION(self):
        """Message constant 'NO_CLASSIFICATION'."""
        return Metaclass_RadarTrack.__constants['NO_CLASSIFICATION']

    @property
    def STATIC(self):
        """Message constant 'STATIC'."""
        return Metaclass_RadarTrack.__constants['STATIC']

    @property
    def DYNAMIC(self):
        """Message constant 'DYNAMIC'."""
        return Metaclass_RadarTrack.__constants['DYNAMIC']


class RadarTrack(metaclass=Metaclass_RadarTrack):
    """
    Message class 'RadarTrack'.

    Constants:
      NO_CLASSIFICATION
      STATIC
      DYNAMIC
    """

    __slots__ = [
        '_uuid',
        '_position',
        '_velocity',
        '_acceleration',
        '_size',
        '_classification',
        '_position_covariance',
        '_velocity_covariance',
        '_acceleration_covariance',
        '_size_covariance',
    ]

    _fields_and_field_types = {
        'uuid': 'unique_identifier_msgs/UUID',
        'position': 'geometry_msgs/Point',
        'velocity': 'geometry_msgs/Vector3',
        'acceleration': 'geometry_msgs/Vector3',
        'size': 'geometry_msgs/Vector3',
        'classification': 'uint16',
        'position_covariance': 'float[6]',
        'velocity_covariance': 'float[6]',
        'acceleration_covariance': 'float[6]',
        'size_covariance': 'float[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.uuid = kwargs.get('uuid', UUID())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        from geometry_msgs.msg import Vector3
        self.velocity = kwargs.get('velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.acceleration = kwargs.get('acceleration', Vector3())
        from geometry_msgs.msg import Vector3
        self.size = kwargs.get('size', Vector3())
        self.classification = kwargs.get('classification', int())
        if 'position_covariance' not in kwargs:
            self.position_covariance = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.position_covariance = numpy.array(kwargs.get('position_covariance'), dtype=numpy.float32)
            assert self.position_covariance.shape == (6, )
        if 'velocity_covariance' not in kwargs:
            self.velocity_covariance = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.velocity_covariance = numpy.array(kwargs.get('velocity_covariance'), dtype=numpy.float32)
            assert self.velocity_covariance.shape == (6, )
        if 'acceleration_covariance' not in kwargs:
            self.acceleration_covariance = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.acceleration_covariance = numpy.array(kwargs.get('acceleration_covariance'), dtype=numpy.float32)
            assert self.acceleration_covariance.shape == (6, )
        if 'size_covariance' not in kwargs:
            self.size_covariance = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.size_covariance = numpy.array(kwargs.get('size_covariance'), dtype=numpy.float32)
            assert self.size_covariance.shape == (6, )

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
        if self.uuid != other.uuid:
            return False
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.size != other.size:
            return False
        if self.classification != other.classification:
            return False
        if all(self.position_covariance != other.position_covariance):
            return False
        if all(self.velocity_covariance != other.velocity_covariance):
            return False
        if all(self.acceleration_covariance != other.acceleration_covariance):
            return False
        if all(self.size_covariance != other.size_covariance):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def uuid(self):
        """Message field 'uuid'."""
        return self._uuid

    @uuid.setter
    def uuid(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'uuid' field must be a sub message of type 'UUID'"
        self._uuid = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'velocity' field must be a sub message of type 'Vector3'"
        self._velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'acceleration' field must be a sub message of type 'Vector3'"
        self._acceleration = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'size' field must be a sub message of type 'Vector3'"
        self._size = value

    @builtins.property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'classification' field must be an unsigned integer in [0, 65535]"
        self._classification = value

    @builtins.property
    def position_covariance(self):
        """Message field 'position_covariance'."""
        return self._position_covariance

    @position_covariance.setter
    def position_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'position_covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'position_covariance' numpy.ndarray() must have a size of 6"
            self._position_covariance = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'position_covariance' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position_covariance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def velocity_covariance(self):
        """Message field 'velocity_covariance'."""
        return self._velocity_covariance

    @velocity_covariance.setter
    def velocity_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'velocity_covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'velocity_covariance' numpy.ndarray() must have a size of 6"
            self._velocity_covariance = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'velocity_covariance' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocity_covariance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def acceleration_covariance(self):
        """Message field 'acceleration_covariance'."""
        return self._acceleration_covariance

    @acceleration_covariance.setter
    def acceleration_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'acceleration_covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'acceleration_covariance' numpy.ndarray() must have a size of 6"
            self._acceleration_covariance = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'acceleration_covariance' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._acceleration_covariance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def size_covariance(self):
        """Message field 'size_covariance'."""
        return self._size_covariance

    @size_covariance.setter
    def size_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'size_covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'size_covariance' numpy.ndarray() must have a size of 6"
            self._size_covariance = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'size_covariance' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._size_covariance = numpy.array(value, dtype=numpy.float32)
