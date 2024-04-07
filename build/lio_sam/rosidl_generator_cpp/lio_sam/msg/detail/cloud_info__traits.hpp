// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lio_sam:msg/CloudInfo.idl
// generated code does not contain a copyright notice

#ifndef LIO_SAM__MSG__DETAIL__CLOUD_INFO__TRAITS_HPP_
#define LIO_SAM__MSG__DETAIL__CLOUD_INFO__TRAITS_HPP_

#include "lio_sam/msg/detail/cloud_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cloud_deskewed'
// Member 'cloud_corner'
// Member 'cloud_surface'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lio_sam::msg::CloudInfo>()
{
  return "lio_sam::msg::CloudInfo";
}

template<>
inline const char * name<lio_sam::msg::CloudInfo>()
{
  return "lio_sam/msg/CloudInfo";
}

template<>
struct has_fixed_size<lio_sam::msg::CloudInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lio_sam::msg::CloudInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lio_sam::msg::CloudInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIO_SAM__MSG__DETAIL__CLOUD_INFO__TRAITS_HPP_
