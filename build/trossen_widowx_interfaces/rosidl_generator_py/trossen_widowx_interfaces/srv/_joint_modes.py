# generated from rosidl_generator_py/resource/_idl.py.em
# with input from trossen_widowx_interfaces:srv/JointModes.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'joint_mode'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointModes_Request(type):
    """Metaclass of message 'JointModes_Request'."""

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
            module = import_type_support('trossen_widowx_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'trossen_widowx_interfaces.srv.JointModes_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__joint_modes__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__joint_modes__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__joint_modes__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__joint_modes__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__joint_modes__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointModes_Request(metaclass=Metaclass_JointModes_Request):
    """Message class 'JointModes_Request'."""

    __slots__ = [
        '_joint_mode',
    ]

    _fields_and_field_types = {
        'joint_mode': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_mode = array.array('i', kwargs.get('joint_mode', []))

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
        if self.joint_mode != other.joint_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_mode(self):
        """Message field 'joint_mode'."""
        return self._joint_mode

    @joint_mode.setter
    def joint_mode(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'joint_mode' array.array() must have the type code of 'i'"
            self._joint_mode = value
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
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'joint_mode' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._joint_mode = array.array('i', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_JointModes_Response(type):
    """Metaclass of message 'JointModes_Response'."""

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
            module = import_type_support('trossen_widowx_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'trossen_widowx_interfaces.srv.JointModes_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__joint_modes__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__joint_modes__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__joint_modes__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__joint_modes__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__joint_modes__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointModes_Response(metaclass=Metaclass_JointModes_Response):
    """Message class 'JointModes_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_JointModes(type):
    """Metaclass of service 'JointModes'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('trossen_widowx_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'trossen_widowx_interfaces.srv.JointModes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__joint_modes

            from trossen_widowx_interfaces.srv import _joint_modes
            if _joint_modes.Metaclass_JointModes_Request._TYPE_SUPPORT is None:
                _joint_modes.Metaclass_JointModes_Request.__import_type_support__()
            if _joint_modes.Metaclass_JointModes_Response._TYPE_SUPPORT is None:
                _joint_modes.Metaclass_JointModes_Response.__import_type_support__()


class JointModes(metaclass=Metaclass_JointModes):
    from trossen_widowx_interfaces.srv._joint_modes import JointModes_Request as Request
    from trossen_widowx_interfaces.srv._joint_modes import JointModes_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
