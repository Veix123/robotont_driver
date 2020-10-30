/*
 * This node communicates with Robotont hardware
 */
#include <ros/ros.h>
#include "robotont_driver/driver.h"

using namespace robotont;

int main(int argc, char** argv)
{
  // Register a ROS node
  ros::init(argc, argv, "driver_node");
  ros::NodeHandle nh;

  // Create a driver instance
  Driver drv;

  // Spin forever
  ros::spin();
}
