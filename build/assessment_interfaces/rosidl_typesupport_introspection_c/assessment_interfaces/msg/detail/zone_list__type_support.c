// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from assessment_interfaces:msg/ZoneList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "assessment_interfaces/msg/detail/zone_list__rosidl_typesupport_introspection_c.h"
#include "assessment_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "assessment_interfaces/msg/detail/zone_list__functions.h"
#include "assessment_interfaces/msg/detail/zone_list__struct.h"


// Include directives for member types
// Member `data`
#include "assessment_interfaces/msg/zone.h"
// Member `data`
#include "assessment_interfaces/msg/detail/zone__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assessment_interfaces__msg__ZoneList__init(message_memory);
}

void assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_fini_function(void * message_memory)
{
  assessment_interfaces__msg__ZoneList__fini(message_memory);
}

size_t assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__size_function__ZoneList__data(
  const void * untyped_member)
{
  const assessment_interfaces__msg__Zone__Sequence * member =
    (const assessment_interfaces__msg__Zone__Sequence *)(untyped_member);
  return member->size;
}

const void * assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__get_const_function__ZoneList__data(
  const void * untyped_member, size_t index)
{
  const assessment_interfaces__msg__Zone__Sequence * member =
    (const assessment_interfaces__msg__Zone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__get_function__ZoneList__data(
  void * untyped_member, size_t index)
{
  assessment_interfaces__msg__Zone__Sequence * member =
    (assessment_interfaces__msg__Zone__Sequence *)(untyped_member);
  return &member->data[index];
}

void assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__fetch_function__ZoneList__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const assessment_interfaces__msg__Zone * item =
    ((const assessment_interfaces__msg__Zone *)
    assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__get_const_function__ZoneList__data(untyped_member, index));
  assessment_interfaces__msg__Zone * value =
    (assessment_interfaces__msg__Zone *)(untyped_value);
  *value = *item;
}

void assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__assign_function__ZoneList__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  assessment_interfaces__msg__Zone * item =
    ((assessment_interfaces__msg__Zone *)
    assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__get_function__ZoneList__data(untyped_member, index));
  const assessment_interfaces__msg__Zone * value =
    (const assessment_interfaces__msg__Zone *)(untyped_value);
  *item = *value;
}

bool assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__resize_function__ZoneList__data(
  void * untyped_member, size_t size)
{
  assessment_interfaces__msg__Zone__Sequence * member =
    (assessment_interfaces__msg__Zone__Sequence *)(untyped_member);
  assessment_interfaces__msg__Zone__Sequence__fini(member);
  return assessment_interfaces__msg__Zone__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ZoneList, data),  // bytes offset in struct
    NULL,  // default value
    assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__size_function__ZoneList__data,  // size() function pointer
    assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__get_const_function__ZoneList__data,  // get_const(index) function pointer
    assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__get_function__ZoneList__data,  // get(index) function pointer
    assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__fetch_function__ZoneList__data,  // fetch(index, &value) function pointer
    assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__assign_function__ZoneList__data,  // assign(index, value) function pointer
    assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__resize_function__ZoneList__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_message_members = {
  "assessment_interfaces__msg",  // message namespace
  "ZoneList",  // message name
  1,  // number of fields
  sizeof(assessment_interfaces__msg__ZoneList),
  assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_message_member_array,  // message members
  assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_init_function,  // function to initialize message memory (memory has to be allocated)
  assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_message_type_support_handle = {
  0,
  &assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assessment_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assessment_interfaces, msg, ZoneList)() {
  assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assessment_interfaces, msg, Zone)();
  if (!assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_message_type_support_handle.typesupport_identifier) {
    assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &assessment_interfaces__msg__ZoneList__rosidl_typesupport_introspection_c__ZoneList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
