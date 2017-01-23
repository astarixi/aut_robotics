// Generated by gencpp from file vrep_common/simRosEndDialogRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSENDDIALOGREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSENDDIALOGREQUEST_H


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
struct simRosEndDialogRequest_
{
  typedef simRosEndDialogRequest_<ContainerAllocator> Type;

  simRosEndDialogRequest_()
    : dialogHandle(0)  {
    }
  simRosEndDialogRequest_(const ContainerAllocator& _alloc)
    : dialogHandle(0)  {
  (void)_alloc;
    }



   typedef int32_t _dialogHandle_type;
  _dialogHandle_type dialogHandle;




  typedef boost::shared_ptr< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosEndDialogRequest_

typedef ::vrep_common::simRosEndDialogRequest_<std::allocator<void> > simRosEndDialogRequest;

typedef boost::shared_ptr< ::vrep_common::simRosEndDialogRequest > simRosEndDialogRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosEndDialogRequest const> simRosEndDialogRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "290f4bd47ce8d0f7c78c1d510052331a";
  }

  static const char* value(const ::vrep_common::simRosEndDialogRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x290f4bd47ce8d0f7ULL;
  static const uint64_t static_value2 = 0xc78c1d510052331aULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosEndDialogRequest";
  }

  static const char* value(const ::vrep_common::simRosEndDialogRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 dialogHandle\n\
";
  }

  static const char* value(const ::vrep_common::simRosEndDialogRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dialogHandle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosEndDialogRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosEndDialogRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosEndDialogRequest_<ContainerAllocator>& v)
  {
    s << indent << "dialogHandle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dialogHandle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSENDDIALOGREQUEST_H
