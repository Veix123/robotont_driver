#ifndef PLUGIN_POWER_SUPPLY_
#define PLUGIN_POWER_SUPPLY_

#include <ros/ros.h>
#include "robotont_driver/plugin_base.h"
#include "robotont_msgs/PowerSupply.h"

/**
 * \brief PluginPowerSupply class
 * This plugin parses packets with a POWER keyword and publishes data as a ROS message.
 */
namespace robotont
{
class PluginPowerSupply : public PluginBase
{
public:
  PluginPowerSupply(HardwarePtr hw_ptr, const std::string& name);
  ~PluginPowerSupply();

  /**
   * @brief Parses the data received from the serial port
   * 
   * @param packet Data packet to be parsed: Structure
   *  'POWER:[CURRENT]:[VOLTAGE]'
   */
  void packetReceived(const RobotontPacket& packet);

  const std::string& getName() const;

private:
  ros::Publisher power_supply_pub_;
};
}  // namespace robotont
#endif
