# generated from rosidl_generator_py/resource/_idl.py.em
# with input from candle_ros2:msg/PowerStageData.idl
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


class Metaclass_PowerStageData(type):
    """Metaclass of message 'PowerStageData'."""

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
            module = import_type_support('candle_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'candle_ros2.msg.PowerStageData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power_stage_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power_stage_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power_stage_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power_stage_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power_stage_data

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


class PowerStageData(metaclass=Metaclass_PowerStageData):
    """Message class 'PowerStageData'."""

    __slots__ = [
        '_header',
        '_enabled',
        '_brake_resistor_socket',
        '_trigger_voltage',
        '_output_voltage',
        '_autostart',
        '_load_current',
        '_power',
        '_energy',
        '_ocd_level',
        '_ocd_delay',
        '_temperature',
        '_temperature_limit',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'enabled': 'boolean',
        'brake_resistor_socket': 'uint8',
        'trigger_voltage': 'uint32',
        'output_voltage': 'uint32',
        'autostart': 'boolean',
        'load_current': 'int32',
        'power': 'int32',
        'energy': 'uint32',
        'ocd_level': 'uint32',
        'ocd_delay': 'uint32',
        'temperature': 'float',
        'temperature_limit': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.enabled = kwargs.get('enabled', bool())
        self.brake_resistor_socket = kwargs.get('brake_resistor_socket', int())
        self.trigger_voltage = kwargs.get('trigger_voltage', int())
        self.output_voltage = kwargs.get('output_voltage', int())
        self.autostart = kwargs.get('autostart', bool())
        self.load_current = kwargs.get('load_current', int())
        self.power = kwargs.get('power', int())
        self.energy = kwargs.get('energy', int())
        self.ocd_level = kwargs.get('ocd_level', int())
        self.ocd_delay = kwargs.get('ocd_delay', int())
        self.temperature = kwargs.get('temperature', float())
        self.temperature_limit = kwargs.get('temperature_limit', float())

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
        if self.enabled != other.enabled:
            return False
        if self.brake_resistor_socket != other.brake_resistor_socket:
            return False
        if self.trigger_voltage != other.trigger_voltage:
            return False
        if self.output_voltage != other.output_voltage:
            return False
        if self.autostart != other.autostart:
            return False
        if self.load_current != other.load_current:
            return False
        if self.power != other.power:
            return False
        if self.energy != other.energy:
            return False
        if self.ocd_level != other.ocd_level:
            return False
        if self.ocd_delay != other.ocd_delay:
            return False
        if self.temperature != other.temperature:
            return False
        if self.temperature_limit != other.temperature_limit:
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

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

    @builtins.property
    def brake_resistor_socket(self):
        """Message field 'brake_resistor_socket'."""
        return self._brake_resistor_socket

    @brake_resistor_socket.setter
    def brake_resistor_socket(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'brake_resistor_socket' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brake_resistor_socket' field must be an unsigned integer in [0, 255]"
        self._brake_resistor_socket = value

    @builtins.property
    def trigger_voltage(self):
        """Message field 'trigger_voltage'."""
        return self._trigger_voltage

    @trigger_voltage.setter
    def trigger_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'trigger_voltage' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'trigger_voltage' field must be an unsigned integer in [0, 4294967295]"
        self._trigger_voltage = value

    @builtins.property
    def output_voltage(self):
        """Message field 'output_voltage'."""
        return self._output_voltage

    @output_voltage.setter
    def output_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'output_voltage' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'output_voltage' field must be an unsigned integer in [0, 4294967295]"
        self._output_voltage = value

    @builtins.property
    def autostart(self):
        """Message field 'autostart'."""
        return self._autostart

    @autostart.setter
    def autostart(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'autostart' field must be of type 'bool'"
        self._autostart = value

    @builtins.property
    def load_current(self):
        """Message field 'load_current'."""
        return self._load_current

    @load_current.setter
    def load_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'load_current' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'load_current' field must be an integer in [-2147483648, 2147483647]"
        self._load_current = value

    @builtins.property
    def power(self):
        """Message field 'power'."""
        return self._power

    @power.setter
    def power(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'power' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'power' field must be an integer in [-2147483648, 2147483647]"
        self._power = value

    @builtins.property
    def energy(self):
        """Message field 'energy'."""
        return self._energy

    @energy.setter
    def energy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'energy' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'energy' field must be an unsigned integer in [0, 4294967295]"
        self._energy = value

    @builtins.property
    def ocd_level(self):
        """Message field 'ocd_level'."""
        return self._ocd_level

    @ocd_level.setter
    def ocd_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ocd_level' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ocd_level' field must be an unsigned integer in [0, 4294967295]"
        self._ocd_level = value

    @builtins.property
    def ocd_delay(self):
        """Message field 'ocd_delay'."""
        return self._ocd_delay

    @ocd_delay.setter
    def ocd_delay(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ocd_delay' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ocd_delay' field must be an unsigned integer in [0, 4294967295]"
        self._ocd_delay = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature = value

    @builtins.property
    def temperature_limit(self):
        """Message field 'temperature_limit'."""
        return self._temperature_limit

    @temperature_limit.setter
    def temperature_limit(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'temperature_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature_limit = value
