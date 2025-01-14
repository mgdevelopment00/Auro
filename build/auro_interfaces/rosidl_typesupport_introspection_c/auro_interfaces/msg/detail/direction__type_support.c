// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from auro_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "auro_interfaces/msg/detail/direction__rosidl_typesupport_introspection_c.h"
#include "auro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "auro_interfaces/msg/detail/direction__functions.h"
#include "auro_interfaces/msg/detail/direction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  auro_interfaces__msg__Direction__init(message_memory);
}

void auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_fini_function(void * message_memory)
{
  auro_interfaces__msg__Direction__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_message_member_array[1] = {
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auro_interfaces__msg__Direction, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_message_members = {
  "auro_interfaces__msg",  // message namespace
  "Direction",  // message name
  1,  // number of fields
  sizeof(auro_interfaces__msg__Direction),
  auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_message_member_array,  // message members
  auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_init_function,  // function to initialize message memory (memory has to be allocated)
  auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_message_type_support_handle = {
  0,
  &auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_auro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auro_interfaces, msg, Direction)() {
  if (!auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_message_type_support_handle.typesupport_identifier) {
    auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &auro_interfaces__msg__Direction__rosidl_typesupport_introspection_c__Direction_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
