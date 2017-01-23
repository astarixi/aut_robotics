// Generated by gencpp from file vrep_common/simRosGetCollisionHandleRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETCOLLISIONHANDLEREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSGETCOLLISIONHANDLEREQUEST_H


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
struct simRosGetCollisionHandleRequest_
{
  typedef simRosGetCollisionHandleRequest_<ContainerAllocator> Type;

  simRosGetCollisionHandleRequest_()
    : collisionName()  {
    }
  simRosGetCollisionHandleRequest_(const ContainerAllocator& _alloc)
    : collisionName(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _collisionName_type;
  _collisionName_type collisionName;




  typedef boost::shared_ptr< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetCollisionHandleRequest_

typedef ::vrep_common::simRosGetCollisionHandleRequest_<std::allocator<void> > simRosGetCollisionHandleRequest;

typedef boost::shared_ptr< ::vrep_common::simRosGetCollisionHandleRequest > simRosGetCollisionHandleRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetCollisionHandleRequest const> simRosGetCollisionHandleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/romain/catkin_ws/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf86508d9f797a77ca9b0cab99fc61ca";
  }

  static const char* value(const ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf86508d9f797a77ULL;
  static const uint64_t static_value2 = 0xca9b0cab99fc61caULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetCollisionHandleRequest";
  }

  static const char* value(const ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
string collisionName\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.collisionName);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosGetCollisionHandleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetCollisionHandleRequest_<ContainerAllocator>& v)
  {
    s << indent << "collisionName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.collisionName);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETCOLLISIONHANDLEREQUEST_H
