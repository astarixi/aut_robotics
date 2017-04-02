;; Auto-generated. Do not edit!


(when (boundp 'occgrid_planner::Trajectory)
  (if (not (find-package "OCCGRID_PLANNER"))
    (make-package "OCCGRID_PLANNER"))
  (shadow 'Trajectory (find-package "OCCGRID_PLANNER")))
(unless (find-package "OCCGRID_PLANNER::TRAJECTORY")
  (make-package "OCCGRID_PLANNER::TRAJECTORY"))

(in-package "ROS")
;;//! \htmlinclude Trajectory.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass occgrid_planner::Trajectory
  :super ros::object
  :slots (_header _Ts ))

(defmethod occgrid_planner::Trajectory
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:Ts __Ts) (let (r) (dotimes (i 0) (push (instance occgrid_planner::TrajectoryElement :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _Ts __Ts)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:Ts
   (&rest __Ts)
   (if (keywordp (car __Ts))
       (send* _Ts __Ts)
     (progn
       (if __Ts (setq _Ts (car __Ts)))
       _Ts)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; occgrid_planner/TrajectoryElement[] _Ts
    (apply #'+ (send-all _Ts :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; occgrid_planner/TrajectoryElement[] _Ts
     (write-long (length _Ts) s)
     (dolist (elem _Ts)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; occgrid_planner/TrajectoryElement[] _Ts
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _Ts (let (r) (dotimes (i n) (push (instance occgrid_planner::TrajectoryElement :init) r)) r))
     (dolist (elem- _Ts)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get occgrid_planner::Trajectory :md5sum-) "18f77ffd2d905ff0c111ac0074191f03")
(setf (get occgrid_planner::Trajectory :datatype-) "occgrid_planner/Trajectory")
(setf (get occgrid_planner::Trajectory :definition-)
      "Header header
occgrid_planner/TrajectoryElement[] Ts

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: occgrid_planner/TrajectoryElement
Header header
geometry_msgs/Pose pose
geometry_msgs/Twist twist

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :occgrid_planner/Trajectory "18f77ffd2d905ff0c111ac0074191f03")

