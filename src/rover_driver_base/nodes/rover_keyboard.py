#!/usr/bin/env python
# source for this file:
# http://ftp.isr.ist.utl.pt/pub/roswiki/stage%282f%29Tutorials%282f%29SimulatingOneRobot.html
import roslib; roslib.load_manifest('rover_driver_base')
import rospy
from geometry_msgs.msg import Twist
import sys, select, termios, tty

msg = """
Reading from the keyboard  and Publishing to Twist!
---------------------------
Moving around:
   u    i    o
   j    k    l
   m    ,    .

q/z : increase/decrease max speeds by 10%
w/x : increase/decrease only linear speed by 10%
e/c : increase/decrease only angular speed by 10%
anything else : stop

CTRL-C to quit
"""

moveBindings = {
        'i':(1,0),
        'o':(1,-1),
        'j':(0,1),
        'l':(0,-1),
        'k':(0,0),
        'u':(1,1),
        ',':(-1,0),
        '.':(-1,1),
        'm':(-1,-1),
}
angularBindings = {
        'q':+1,
        's':0,
        'd':-1,
}

speedBindings={
        'a':(1.1,1.1),
        'w':(.9,.9),
        'z':(1.1,1),
        'x':(.9,1),
        'e':(1,1.1),
        'c':(1,.9),
          }

def getKey():
    tty.setraw(sys.stdin.fileno())
    select.select([sys.stdin], [], [], 0)
    key = sys.stdin.read(1)
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key

speed = .5
turn = 1

def vels(speed,turn):
    return "currently:\tspeed %s\tturn %s " % (speed,turn)

if __name__=="__main__":
    settings = termios.tcgetattr(sys.stdin)
    
    rospy.init_node('teleop_twist_keyboard')
    twist_topic = rospy.resolve_name("output")
    pub = rospy.Publisher(twist_topic, Twist)

    x = 0
    y = 0
    th = 0
    status = 0

    try:
        print msg
        print vels(speed,turn)
        while(1):
            key = getKey()
            if key in moveBindings.keys():
                x,y = moveBindings[key]
                print "Direction: %.1f %.1f" % (x*speed,y*speed)
            elif key in angularBindings.keys():
                th = angularBindings[key]
                print "Angular: %.1f " % th
            elif key in speedBindings.keys():
                speed = speed * speedBindings[key][0]
                turn = turn * speedBindings[key][1]

                print vels(speed,turn)
                if (status == 14):
                    print msg
                status = (status + 1) % 15
            else:
                x = 0
                th = 0
                if (key == '\x03'):
                    break

            twist = Twist()
            twist.linear.x = x*speed; 
            twist.linear.y = y*speed; 
            twist.linear.z = 0
            twist.angular.x = 0; 
            twist.angular.y = 0; 
            twist.angular.z = th*turn
            pub.publish(twist)

    except e:
        print e

    finally:
        twist = Twist()
        twist.linear.x = 0; twist.linear.y = 0; twist.linear.z = 0
        twist.angular.x = 0; twist.angular.y = 0; twist.angular.z = 0
        pub.publish(twist)
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
