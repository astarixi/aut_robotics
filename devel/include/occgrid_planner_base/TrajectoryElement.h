// Generated by gencpp from file occgrid_planner_base/TrajectoryElement.msg
// DO NOT EDIT!


#ifndef OCCGRID_PLANNER_BASE_MESSAGE_TRAJECTORYELEMENT_H
#define OCCGRID_PLANNER_BASE_MESSAGE_TRAJECTORYELEMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>

namespace occgrid_planner_base
{
template <class ContainerAllocator>
struct TrajectoryElement_
{
  typedef TrajectoryElement_<ContainerAllocator> Type;

  TrajectoryElement_()
    : header()
    , pose()
    , twist()  {
    }
  TrajectoryElement_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pose(_alloc)
    , twist(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _twist_type;
  _twist_type twist;




  typedef boost::shared_ptr< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> const> ConstPtr;

}; // struct TrajectoryElement_

typedef ::occgrid_planner_base::TrajectoryElement_<std::allocator<void> > TrajectoryElement;

typedef boost::shared_ptr< ::occgrid_planner_base::TrajectoryElement > TrajectoryElementPtr;
typedef boost::shared_ptr< ::occgrid_planner_base::TrajectoryElement const> TrajectoryElementConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace occgrid_planner_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'occgrid_planner_base': ['/home/GTL/ramuat/aut_robotics/src/occgrid_planner_base/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a296da29623d3a182b44fee95e8415a4";
  }

  static const char* value(const ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa296da29623d3a18ULL;
  static const uint64_t static_value2 = 0x2b44fee95e8415a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "occgrid_planner_base/TrajectoryElement";
  }

  static const char* value(const ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
geometry_msgs/Pose pose\n\
geometry_msgs/Twist twist\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pose);
      stream.next(m.twist);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TrajectoryElement_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::occgrid_planner_base::TrajectoryElement_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCCGRID_PLANNER_BASE_MESSAGE_TRAJECTORYELEMENT_H
