// Generated by gencpp from file vrep_common/simRosAddStatusbarMessageRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSADDSTATUSBARMESSAGEREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSADDSTATUSBARMESSAGEREQUEST_H


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
struct simRosAddStatusbarMessageRequest_
{
  typedef simRosAddStatusbarMessageRequest_<ContainerAllocator> Type;

  simRosAddStatusbarMessageRequest_()
    : message()  {
    }
  simRosAddStatusbarMessageRequest_(const ContainerAllocator& _alloc)
    : message(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;




  typedef boost::shared_ptr< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosAddStatusbarMessageRequest_

typedef ::vrep_common::simRosAddStatusbarMessageRequest_<std::allocator<void> > simRosAddStatusbarMessageRequest;

typedef boost::shared_ptr< ::vrep_common::simRosAddStatusbarMessageRequest > simRosAddStatusbarMessageRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosAddStatusbarMessageRequest const> simRosAddStatusbarMessageRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f003d6bcc824cbd51361d66d8e4f76c";
  }

  static const char* value(const ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f003d6bcc824cbdULL;
  static const uint64_t static_value2 = 0x51361d66d8e4f76cULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosAddStatusbarMessageRequest";
  }

  static const char* value(const ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
string message\n\
";
  }

  static const char* value(const ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosAddStatusbarMessageRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosAddStatusbarMessageRequest_<ContainerAllocator>& v)
  {
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSADDSTATUSBARMESSAGEREQUEST_H
