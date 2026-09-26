#include "thruster_dave_hardware_interface/thruster_dave_hardware_interface.hpp"

#include <algorithm>
#include <cmath>
#include <stdexcept>

#include "pluginlib/class_list_macros.hpp"

namespace thruster_dave_hardware_interface
{

bool ThrusterDaveHardwareInterface::initSim(
  rclcpp::Node::SharedPtr & model_nh,
  std::map<std::string, sim::Entity> & /*joints*/,
  const hardware_interface::HardwareInfo & /*hardware_info*/,
  sim::EntityComponentManager & /*ecm*/,
  unsigned int /*update_rate*/)
{
  // gz_ros2_control supplies the node that is already managed by its
  // executor. Reuse it instead of creating a second unmanaged node.
  nh_ = model_nh;
  return static_cast<bool>(nh_);
}

hardware_interface::CallbackReturn ThrusterDaveHardwareInterface::on_init(
  const hardware_interface::HardwareComponentInterfaceParams & info)
{
  if (hardware_interface::SystemInterface::on_init(info) !=
    hardware_interface::CallbackReturn::SUCCESS)
  {
    return hardware_interface::CallbackReturn::ERROR;
  }

  if (info_.joints.size() != 1) {
    RCLCPP_ERROR(
      rclcpp::get_logger("thruster_dave_hardware_interface"),
      "Expected exactly one joint, but received %zu joints.", info_.joints.size());
    return hardware_interface::CallbackReturn::ERROR;
  }

  const auto & joint = info_.joints.front();

  if (joint.name != "thruster_joint") {
    RCLCPP_ERROR(
      rclcpp::get_logger("thruster_dave_hardware_interface"),
      "Expected joint named 'thruster_joint', but received '%s'.",
      joint.name.c_str());
    return hardware_interface::CallbackReturn::ERROR;
  }

  if (joint.command_interfaces.size() != 1 ||
    joint.command_interfaces.front().name != hardware_interface::HW_IF_EFFORT)
  {
    RCLCPP_ERROR(
      rclcpp::get_logger("thruster_dave_hardware_interface"),
      "The joint must have exactly one command interface named 'effort'.");
    return hardware_interface::CallbackReturn::ERROR;
  }

  if (!joint.state_interfaces.empty()) {
    RCLCPP_ERROR(
      rclcpp::get_logger("thruster_dave_hardware_interface"),
      "This command-only interface does not export state interfaces. "
      "Remove the state_interface entries for '%s' from the ros2_control tag.",
      joint.name.c_str());
    return hardware_interface::CallbackReturn::ERROR;
  }

  // This interface publishes commands but does not claim that the published
  // command is measured effort feedback. Add state interfaces only when a
  // real state source is available.
  if (!info_.hardware_parameters.empty()) {
    const auto topic_it = info_.hardware_parameters.find("thrust_topic");
    if (topic_it != info_.hardware_parameters.end() && !topic_it->second.empty()) {
      thrust_topic_ = topic_it->second;
    }

    const auto min_it = info_.hardware_parameters.find("min_thrust");
    if (min_it != info_.hardware_parameters.end()) {
      try {
        min_thrust_ = std::stod(min_it->second);
      } catch (const std::exception & exception) {
        RCLCPP_ERROR(
          rclcpp::get_logger("thruster_dave_hardware_interface"),
          "Invalid min_thrust value '%s': %s",
          min_it->second.c_str(), exception.what());
        return hardware_interface::CallbackReturn::ERROR;
      }
    }

    const auto max_it = info_.hardware_parameters.find("max_thrust");
    if (max_it != info_.hardware_parameters.end()) {
      try {
        max_thrust_ = std::stod(max_it->second);
      } catch (const std::exception & exception) {
        RCLCPP_ERROR(
          rclcpp::get_logger("thruster_dave_hardware_interface"),
          "Invalid max_thrust value '%s': %s",
          max_it->second.c_str(), exception.what());
        return hardware_interface::CallbackReturn::ERROR;
      }
    }
  }

  if (!std::isfinite(min_thrust_) || !std::isfinite(max_thrust_) ||
    min_thrust_ > max_thrust_)
  {
    RCLCPP_ERROR(
      rclcpp::get_logger("thruster_dave_hardware_interface"),
      "Invalid thrust limits: min_thrust=%f, max_thrust=%f.",
      min_thrust_, max_thrust_);
    return hardware_interface::CallbackReturn::ERROR;
  }

  if (!nh_) {
    RCLCPP_ERROR(
      rclcpp::get_logger("thruster_dave_hardware_interface"),
      "gz_ros2_control did not provide a ROS node; cannot create the DAVE thrust publisher.");
    return hardware_interface::CallbackReturn::ERROR;
  }

  thrust_publisher_ = nh_->create_publisher<std_msgs::msg::Float64>(
    thrust_topic_, rclcpp::QoS(rclcpp::KeepLast(1)).reliable());

  RCLCPP_INFO(
    nh_->get_logger(),
    "Publishing thruster_joint effort to '%s' with limits [%f, %f] N.",
    thrust_topic_.c_str(), min_thrust_, max_thrust_);

  command_effort_ = 0.0;
  return hardware_interface::CallbackReturn::SUCCESS;
}

std::vector<hardware_interface::StateInterface>
ThrusterDaveHardwareInterface::export_state_interfaces()
{
  // No measured state is available from this command-only interface.
  return {};
}

std::vector<hardware_interface::CommandInterface>
ThrusterDaveHardwareInterface::export_command_interfaces()
{
  std::vector<hardware_interface::CommandInterface> command_interfaces;
  // command_interfaces.reserve(1);
  command_interfaces.emplace_back(
    info_.joints.front().name,
    hardware_interface::HW_IF_EFFORT,
    &command_effort_);

  return command_interfaces;
}

hardware_interface::return_type ThrusterDaveHardwareInterface::read(
  const rclcpp::Time & /*time*/,
  const rclcpp::Duration & /*period*/)
{
  // There is no feedback channel in this command-only implementation.
  return hardware_interface::return_type::OK;
}

hardware_interface::return_type ThrusterDaveHardwareInterface::write(
  const rclcpp::Time & /*time*/,
  const rclcpp::Duration & /*period*/)
{
  if (!thrust_publisher_) {
    return hardware_interface::return_type::ERROR;
  }
  std_msgs::msg::Float64 message;
  message.data = clamp_thrust(command_effort_);
  thrust_publisher_->publish(message);

  return hardware_interface::return_type::OK;
}

double ThrusterDaveHardwareInterface::clamp_thrust(double thrust) const
{
  if (!std::isfinite(thrust)) {
    return 0.0;
  }

  return std::clamp(thrust, min_thrust_, max_thrust_);
}

}  // namespace thruster_dave_hardware_interface

PLUGINLIB_EXPORT_CLASS(
  thruster_dave_hardware_interface::ThrusterDaveHardwareInterface,
  gz_ros2_control::GazeboSimSystemInterface)
