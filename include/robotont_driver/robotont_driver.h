#ifndef ROBOTONT_DRIVER_
#define ROBOTONT_DRIVER_

#include <ros/ros.h>

#include "robotont_driver/robotont_hardware.h"
#include "robotont_driver/plugin_base.h"

// Builtin plugins
#include "robotont_driver/plugin_motors.h"
//#include "robotont_driver/plugin_odom.h"

// Plugins for addons
//#include "robotont_driver/range_sensor.h"
//#include "robotont_driver/led_module.h"

namespace robotont
{
class RobotontDriver
{
public:
  RobotontDriver();
  ~RobotontDriver();

private:
  void update(const ros::TimerEvent& event);

  ros::NodeHandle nh_;
  RobotontHWPtr hw_ptr_;
  std::vector<PluginBasePtr> plugins_;
  ros::Timer timer_;
};
}  // namespace robotont
#endif
