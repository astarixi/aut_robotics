cmake_minimum_required(VERSION 2.8.3)
project(vrep_plugin)

find_package(catkin REQUIRED COMPONENTS
  roscpp image_transport tf vrep_common
)

catkin_package(
               CATKIN_DEPENDS roscpp rosconsole std_msgs sensor_msgs cv_bridge image_transport tf brics_actuator roslib
               DEPENDS roscpp rosconsole std_msgs sensor_msgs cv_bridge image_transport tf brics_actuator roslib)

include_directories(include ${catkin_INCLUDE_DIRS})

link_directories("/opt/ros/fuerte/lib")
link_directories("/opt/ros/groovy/lib")
link_directories("/opt/ros/hydro/lib")
link_directories("/opt/ros/indigo/lib")
link_directories("/opt/ros/jade/lib")
link_directories("/opt/ros/kinetic/lib")
link_directories("/opt/ros/kinetic/share")
set(roslib_LIBRARIES "/opt/ros/kinetic/lib/roslib")

add_library(v_repExtRos src/vrep_plugin.cpp src/scriptFunctionData.cpp src/scriptFunctionDataItem.cpp src/v_repLib.cpp src/ROS_server.cpp src/vrepSubscriber.cpp)

add_dependencies(v_repExtRos ${catkin_EXPORTED_TARGETS})
target_link_libraries(v_repExtRos
    pthread
    dl
    roslib
    rosconsole
    rostime
    rospack
    roscpp_serialization
    roscpp
    tf
    image_transport
    boost_system
   ${catkin_LIBRARIES}
)
