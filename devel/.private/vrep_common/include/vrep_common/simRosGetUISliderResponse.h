// Generated by gencpp from file vrep_common/simRosGetUISliderResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETUISLIDERRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETUISLIDERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosGetUISliderResponse_
{
  typedef simRosGetUISliderResponse_<ContainerAllocator> Type;

  simRosGetUISliderResponse_()
    : position(0)  {
    }
  simRosGetUISliderResponse_(const ContainerAllocator& _alloc)
    : position(0)  {
  (void)_alloc;
    }



   typedef int32_t _position_type;
  _position_type position;




  typedef boost::shared_ptr< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetUISliderResponse_

typedef ::vrep_common::simRosGetUISliderResponse_<std::allocator<void> > simRosGetUISliderResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetUISliderResponse > simRosGetUISliderResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetUISliderResponse const> simRosGetUISliderResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/romain/catkin_ws/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ada70156e12e6e31948c64c60d8bb212";
  }

  static const char* value(const ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xada70156e12e6e31ULL;
  static const uint64_t static_value2 = 0x948c64c60d8bb212ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetUISliderResponse";
  }

  static const char* value(const ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 position\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosGetUISliderResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetUISliderResponse_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETUISLIDERRESPONSE_H
