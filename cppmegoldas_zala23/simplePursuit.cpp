#include <ros/ros.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <cmath>
#include <vector>
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/PointStamped.h>
#include <visualization_msgs/Marker.h>
#include <std_msgs>
#include <tf/transform_datatypes.h>
#include <geometry_msgs/Twist.h>
#include <visualization_msgs/Marker.h>
#include <tf/tf.h>

using namespace std;



KOZEPISKOLA_NEVE = "Ismeretlen kozepiskola";
KOZEPISKOLA_AZON = "A00";
ANGLE_RANGE = 360; // LSN10 LIDAR has 360 degrees scan
DESIRED_DISTANCE_RIGHT = 1.0; //0.9 // meters
DESIRED_DISTANCE_LEFT = 0.8; // 0.55
VELOCITY = 1.00; // meters per second
CAR_LENGTH = 0.445; // 0.445 meters
WHEELBASE = 0.3187; // documention based | measured: ~32 cm


// Create publishers for cmd_vel, pid_data, and kozepiskola topics
//nh is a ros::NodeHandle  the same as numpy.publisher

ros::Publisher cmd_vel_pub = nh.advertise<geometry_msgs::Twist>("cmd_vel", 1);
ros::Publisher pid_data_pub = nh.advertise<std_msgs::String>("pid_data", 10);
ros::Publisher kozepiskola_pub = nh.advertise<std_msgs::String>("kozepiskola", 10);

// Create publisher for debug_marker topic
ros::Publisher debug_marker_pub = nh.advertise<visualization_msgs::Marker>("/debug_marker", 1);

// Create transform object
ros::Transform transform;



visualization_msgs::Marker markerPoints;
markerPoints.header.frameId = "base_link";  // "laser"
markerPoints.type = visualization_msgs::Marker::SPHERE_LIST;
markerPoints.action = visualization_msgs::Marker::MODIFY;
markerPoints.color.r = 0.0;
markerPoints.color.g = 0.0;
markerPoints.color.b = 1.0;
markerPoints.color.a = 1.0;
markerPoints.scale.x = 0.1;
markerPoints.scale.y = 0.1;
markerPoints.scale.z = 0.1;
markerPoints.pose.orientation.x = 0.0;
markerPoints.pose.orientation.y = 0.0;
markerPoints.pose.orientation.z = 0.0;
markerPoints.pose.orientation.w = 1.0;


struct Point {
    double x,y;
};



double calcPursuitAngle(double goalX, double goalY){
    alpha = atan2(goalX, goalY);
    lookaheadDistance = sqrt(pow(goalX, 2) + pow(goalY, 2));
    steering_angle = atan2(2.0 * WHEELBASE * sin(alpha) / lookaheadDistance, 1);
    return steering_angle;
    }
    


double calcPointPos(double range, double angle){
    x1 = range * cos(angle);
    y1 = range * sin(angle);
    return x1, y1;
    }


double getDistance(double ranges[], double angles[]){
    int markerPoints;
    lenRanges = ranges.size()/ranges[0].size;
    lenAngles = angles.size()/angles[0].size;
    if (lenRanges > 50){
	     //search for center1MinIndex
	     baseMin = 10000
	     for auto i:ranges{
	     		if 
	     
	     }
	 	  center1MinIndex = 
		  // create tmp1
		  vector<int> tmp1(center1MaxIndex - center1MinIndex);
		  for (int i = center1MinIndex; i < center1MaxIndex; i++) {
		      tmp1[i - center1MinIndex] = i;
		  
    	  }

    }
    
}   



