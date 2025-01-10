// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auro_interfaces:srv/Collision.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__SRV__DETAIL__COLLISION__STRUCT_H_
#define AURO_INTERFACES__SRV__DETAIL__COLLISION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Collision in the package auro_interfaces.
typedef struct auro_interfaces__srv__Collision_Request
{
  uint8_t structure_needs_at_least_one_member;
} auro_interfaces__srv__Collision_Request;

// Struct for a sequence of auro_interfaces__srv__Collision_Request.
typedef struct auro_interfaces__srv__Collision_Request__Sequence
{
  auro_interfaces__srv__Collision_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auro_interfaces__srv__Collision_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Collision in the package auro_interfaces.
typedef struct auro_interfaces__srv__Collision_Response
{
  rosidl_runtime_c__String direction;
  bool success;
} auro_interfaces__srv__Collision_Response;

// Struct for a sequence of auro_interfaces__srv__Collision_Response.
typedef struct auro_interfaces__srv__Collision_Response__Sequence
{
  auro_interfaces__srv__Collision_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auro_interfaces__srv__Collision_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AURO_INTERFACES__SRV__DETAIL__COLLISION__STRUCT_H_