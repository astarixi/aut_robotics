# Install script for directory: /home/GTL/ramuat/aut_robotics/src/hector_slam/hector_nav_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/GTL/ramuat/aut_robotics/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_nav_msgs/srv" TYPE FILE FILES
    "/home/GTL/ramuat/aut_robotics/src/hector_slam/hector_nav_msgs/srv/GetDistanceToObstacle.srv"
    "/home/GTL/ramuat/aut_robotics/src/hector_slam/hector_nav_msgs/srv/GetRecoveryInfo.srv"
    "/home/GTL/ramuat/aut_robotics/src/hector_slam/hector_nav_msgs/srv/GetRobotTrajectory.srv"
    "/home/GTL/ramuat/aut_robotics/src/hector_slam/hector_nav_msgs/srv/GetSearchPosition.srv"
    "/home/GTL/ramuat/aut_robotics/src/hector_slam/hector_nav_msgs/srv/GetNormal.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_nav_msgs/cmake" TYPE FILE FILES "/home/GTL/ramuat/aut_robotics/build/hector_slam/hector_nav_msgs/catkin_generated/installspace/hector_nav_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/GTL/ramuat/aut_robotics/devel/include/hector_nav_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/GTL/ramuat/aut_robotics/devel/share/roseus/ros/hector_nav_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/GTL/ramuat/aut_robotics/devel/share/common-lisp/ros/hector_nav_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/GTL/ramuat/aut_robotics/devel/share/gennodejs/ros/hector_nav_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/GTL/ramuat/aut_robotics/devel/lib/python2.7/dist-packages/hector_nav_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/GTL/ramuat/aut_robotics/devel/lib/python2.7/dist-packages/hector_nav_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/GTL/ramuat/aut_robotics/build/hector_slam/hector_nav_msgs/catkin_generated/installspace/hector_nav_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_nav_msgs/cmake" TYPE FILE FILES "/home/GTL/ramuat/aut_robotics/build/hector_slam/hector_nav_msgs/catkin_generated/installspace/hector_nav_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_nav_msgs/cmake" TYPE FILE FILES
    "/home/GTL/ramuat/aut_robotics/build/hector_slam/hector_nav_msgs/catkin_generated/installspace/hector_nav_msgsConfig.cmake"
    "/home/GTL/ramuat/aut_robotics/build/hector_slam/hector_nav_msgs/catkin_generated/installspace/hector_nav_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hector_nav_msgs" TYPE FILE FILES "/home/GTL/ramuat/aut_robotics/src/hector_slam/hector_nav_msgs/package.xml")
endif()

