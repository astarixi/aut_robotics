#include <math.h>
#include "TaskGoToPose.h"
#include "floor_nav/TaskGoToPoseConfig.h"
using namespace task_manager_msgs;
using namespace task_manager_lib;
using namespace floor_nav;

// #define DEBUG_GOTO
#ifdef DEBUG_GOTO
#warning Debugging task GOTO
#endif


TaskIndicator TaskGoToPose::initialise() 
{
	ROS_INFO("Going to %.2f %.2f",cfg.goal_x,cfg.goal_y);
	if (cfg.relative) {
		const geometry_msgs::Pose2D & tpose = env->getPose2D();
		x_init = tpose.x;
		y_init = tpose.y;
	} else {
		x_init = 0.0;
		y_init = 0.0;
	}
	actuel = HEADING;
	ROS_INFO("GotoPose launched, Machine : %d, Etat : %d", type_machine, actuel);
	return TaskStatus::TASK_INITIALISED;
}

/*
double rampe (double max, double goal, double dist, double before, double slope) {
	if ()
}*/

TaskIndicator TaskGoToPose::iterate()
{
	const geometry_msgs::Pose2D & tpose = env->getPose2D();

	if (type_machine == DUMB) {
		if (actuel == TRAVELLING) {
			double r = hypot(y_init + cfg.goal_y-tpose.y,x_init + cfg.goal_x-tpose.x);

			if (r < cfg.dist_threshold) {
				ROS_INFO("GotoPose en mode reached, Machine : %d, Etat : %d", type_machine, actuel);
				env->publishVelocity(0,0);
				sleep(0.5);
				actuel = REACHED;
			}
			else {
				ROS_INFO("Dist : %f", r);
				double vel = std::min (r*cfg.k_r, cfg.max_velocity);
				env->publishVelocity(vel, 0);
			}
		}
		else if (actuel == HEADING || actuel == REACHED) {
			double theta_obj;
			if (actuel == HEADING) {
				theta_obj = atan2(cfg.goal_y-tpose.y, cfg.goal_x-tpose.x);
			}
			else {
				theta_obj = cfg.goal_theta;
			}
			double alpha = remainder(theta_obj-tpose.theta,2*M_PI);

			if (fabs(alpha) > cfg.angle_threshold) {
				double rot = std::min(((alpha>0)?+alpha:-alpha)*cfg.k_alpha, ((alpha>0)?+1:-1)*cfg.max_angular_velocity);
				ROS_INFO ("Angle : %f, vitesse angulaire : %f", fabs(alpha), rot);
				env->publishVelocity(0,rot);
			} 
			else {
				if (actuel == HEADING) {
					ROS_INFO("GotoPose en mode travelling, Machine : %d, Etat : %d", type_machine, actuel);
					env->publishVelocity(0,0);
					sleep(0.5);
					actuel = TRAVELLING;
				}
				else {
					ROS_INFO("GotoPose completed, Machine : %d, Etat : %d", type_machine, actuel);
					env->publishVelocity(0,0);
					sleep(0.5);
					return TaskStatus::TASK_COMPLETED;
				}
			}
		}
	}
	return TaskStatus::TASK_RUNNING;
}

TaskIndicator TaskGoToPose::terminate()
{
	env->publishVelocity(0,0);
	return TaskStatus::TASK_TERMINATED;
}

DYNAMIC_TASK(TaskFactoryGoToPose);
