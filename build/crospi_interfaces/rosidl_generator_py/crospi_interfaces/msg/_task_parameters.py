# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crospi_interfaces:msg/TaskParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskParameters(type):
    """Metaclass of message 'TaskParameters'."""

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
            module = import_type_support('crospi_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crospi_interfaces.msg.TaskParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_parameters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_parameters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_parameters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_parameters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_parameters

            from crospi_interfaces.msg import NumberParameters
            if NumberParameters.__class__._TYPE_SUPPORT is None:
                NumberParameters.__class__.__import_type_support__()

            from crospi_interfaces.msg import PoseParameters
            if PoseParameters.__class__._TYPE_SUPPORT is None:
                PoseParameters.__class__.__import_type_support__()

            from crospi_interfaces.msg import Vector3Parameters
            if Vector3Parameters.__class__._TYPE_SUPPORT is None:
                Vector3Parameters.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskParameters(metaclass=Metaclass_TaskParameters):
    """Message class 'TaskParameters'."""

    __slots__ = [
        '_numbers',
        '_poses',
        '_vector3s',
    ]

    _fields_and_field_types = {
        'numbers': 'sequence<crospi_interfaces/NumberParameters>',
        'poses': 'sequence<crospi_interfaces/PoseParameters>',
        'vector3s': 'sequence<crospi_interfaces/Vector3Parameters>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['crospi_interfaces', 'msg'], 'NumberParameters')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['crospi_interfaces', 'msg'], 'PoseParameters')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['crospi_interfaces', 'msg'], 'Vector3Parameters')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.numbers = kwargs.get('numbers', [])
        self.poses = kwargs.get('poses', [])
        self.vector3s = kwargs.get('vector3s', [])

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
        if self.numbers != other.numbers:
            return False
        if self.poses != other.poses:
            return False
        if self.vector3s != other.vector3s:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def numbers(self):
        """Message field 'numbers'."""
        return self._numbers

    @numbers.setter
    def numbers(self, value):
        if __debug__:
            from crospi_interfaces.msg import NumberParameters
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
                 all(isinstance(v, NumberParameters) for v in value) and
                 True), \
                "The 'numbers' field must be a set or sequence and each value of type 'NumberParameters'"
        self._numbers = value

    @builtins.property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if __debug__:
            from crospi_interfaces.msg import PoseParameters
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
                 all(isinstance(v, PoseParameters) for v in value) and
                 True), \
                "The 'poses' field must be a set or sequence and each value of type 'PoseParameters'"
        self._poses = value

    @builtins.property
    def vector3s(self):
        """Message field 'vector3s'."""
        return self._vector3s

    @vector3s.setter
    def vector3s(self, value):
        if __debug__:
            from crospi_interfaces.msg import Vector3Parameters
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
                 all(isinstance(v, Vector3Parameters) for v in value) and
                 True), \
                "The 'vector3s' field must be a set or sequence and each value of type 'Vector3Parameters'"
        self._vector3s = value
