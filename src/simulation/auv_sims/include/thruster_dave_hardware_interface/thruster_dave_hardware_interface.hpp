#ifndef THRUSTER_DAVE_HARDWARE_INTERFACE__THRUSTER_DAVE_HARDWARE_INTERFACE_HPP_
#define THRUSTER_DAVE_HARDWARE_INTERFACE__THRUSTER_DAVE_HARDWARE_INTERFACE_HPP_

#include <memory>
#include <map>
#include <string>
#include <vector>

#include "gz_ros2_control/gz_system_interface.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

namespace thruster_dave_hardware_interface
{

class ThrusterDaveHardwareInterface : public gz_ros2_control::GazeboSimSystemInterface
{
public:
  bool initSim(
    rclcpp::Node::SharedPtr & model_nh,
    std::map<std::string, sim::Entity> & joints,
    const hardware_interface::HardwareInfo & hardware_info,
    sim::EntityComponentManager & ecm,
    unsigned int update_rate) override;

  hardware_interface::CallbackReturn on_init(
    const hardware_interface::HardwareComponentInterfaceParams & info) override;

  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  hardware_interface::return_type read(
    const rclcpp::Time & time,
    const rclcpp::Duration & period) override;

  hardware_interface::return_type write(
    const rclcpp::Time & time,
    const rclcpp::Duration & period) override;

private:
  double clamp_thrust(double thrust) const;

  // The interface is intentionally single-thruster for this first version.
  double command_effort_{0.0};

  double min_thrust_{-30.0};
  double max_thrust_{30.0};

  std::string thrust_topic_{"/auv_controls/thruster/cmd_thrust"};

  rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr thrust_publisher_;
};

}  // namespace thruster_dave_hardware_interface

#endif  // THRUSTER_DAVE_HARDWARE_INTERFACE__THRUSTER_DAVE_HARDWARE_INTERFACE_HPP_
