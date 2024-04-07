// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lio_sam:msg/CloudInfo.idl
// generated code does not contain a copyright notice

#ifndef LIO_SAM__MSG__DETAIL__CLOUD_INFO__STRUCT_H_
#define LIO_SAM__MSG__DETAIL__CLOUD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'start_ring_index'
// Member 'end_ring_index'
// Member 'point_col_ind'
// Member 'point_range'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'cloud_deskewed'
// Member 'cloud_corner'
// Member 'cloud_surface'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

// Struct defined in msg/CloudInfo in the package lio_sam.
typedef struct lio_sam__msg__CloudInfo
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence start_ring_index;
  rosidl_runtime_c__int32__Sequence end_ring_index;
  rosidl_runtime_c__int32__Sequence point_col_ind;
  rosidl_runtime_c__float__Sequence point_range;
  int64_t imu_available;
  int64_t odom_available;
  float imu_roll_init;
  float imu_pitch_init;
  float imu_yaw_init;
  float initial_guess_x;
  float initial_guess_y;
  float initial_guess_z;
  float initial_guess_roll;
  float initial_guess_pitch;
  float initial_guess_yaw;
  sensor_msgs__msg__PointCloud2 cloud_deskewed;
  sensor_msgs__msg__PointCloud2 cloud_corner;
  sensor_msgs__msg__PointCloud2 cloud_surface;
} lio_sam__msg__CloudInfo;

// Struct for a sequence of lio_sam__msg__CloudInfo.
typedef struct lio_sam__msg__CloudInfo__Sequence
{
  lio_sam__msg__CloudInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lio_sam__msg__CloudInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIO_SAM__MSG__DETAIL__CLOUD_INFO__STRUCT_H_
