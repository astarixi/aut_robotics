// Generated by gencpp from file vrep_common/simRosGetObjectGroupDataResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETOBJECTGROUPDATARESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETOBJECTGROUPDATARESPONSE_H


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
struct simRosGetObjectGroupDataResponse_
{
  typedef simRosGetObjectGroupDataResponse_<ContainerAllocator> Type;

  simRosGetObjectGroupDataResponse_()
    : handles()
    , intData()
    , floatData()
    , strings()  {
    }
  simRosGetObjectGroupDataResponse_(const ContainerAllocator& _alloc)
    : handles(_alloc)
    , intData(_alloc)
    , floatData(_alloc)
    , strings(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _handles_type;
  _handles_type handles;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _intData_type;
  _intData_type intData;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _floatData_type;
  _floatData_type floatData;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _strings_type;
  _strings_type strings;




  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetObjectGroupDataResponse_

typedef ::vrep_common::simRosGetObjectGroupDataResponse_<std::allocator<void> > simRosGetObjectGroupDataResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetObjectGroupDataResponse > simRosGetObjectGroupDataResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetObjectGroupDataResponse const> simRosGetObjectGroupDataResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "072add4d453cc4563363975eb4c48cf2";
  }

  static const char* value(const ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x072add4d453cc456ULL;
  static const uint64_t static_value2 = 0x3363975eb4c48cf2ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetObjectGroupDataResponse";
  }

  static const char* value(const ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] handles\n\
int32[] intData\n\
float32[] floatData\n\
string[] strings\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handles);
      stream.next(m.intData);
      stream.next(m.floatData);
      stream.next(m.strings);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosGetObjectGroupDataResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetObjectGroupDataResponse_<ContainerAllocator>& v)
  {
    s << indent << "handles[]" << std::endl;
    for (size_t i = 0; i < v.handles.size(); ++i)
    {
      s << indent << "  handles[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.handles[i]);
    }
    s << indent << "intData[]" << std::endl;
    for (size_t i = 0; i < v.intData.size(); ++i)
    {
      s << indent << "  intData[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.intData[i]);
    }
    s << indent << "floatData[]" << std::endl;
    for (size_t i = 0; i < v.floatData.size(); ++i)
    {
      s << indent << "  floatData[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.floatData[i]);
    }
    s << indent << "strings[]" << std::endl;
    for (size_t i = 0; i < v.strings.size(); ++i)
    {
      s << indent << "  strings[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.strings[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETOBJECTGROUPDATARESPONSE_H
