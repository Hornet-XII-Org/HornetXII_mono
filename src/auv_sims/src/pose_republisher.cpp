#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "control_msgs/msg/multi_dof_command.hpp"


/*
republishes the bridged pose data of robot from gazebo to pid_controller's measured state.
Useful for now, but best is to use localized pose to put into measured_state
*/
class PoseRepublisher : public rclcpp::Node
{
public:
    PoseRepublisher() : Node("PoseRepublisher") {
        publisher = this->create_publisher<control_msgs::msg::MultiDOFCommand>("pid_controller/measured_state", 10);

        auto callback = [this](geometry_msgs::msg::PoseStamped::SharedPtr msg) {
            auto command = control_msgs::msg::MultiDOFCommand();
            command.dof_names = {"thruster_joint"};
            command.values = {msg->pose.position.x};
        
            // RCLCPP_INFO(this->get_logger(), "received value %f\n", msg->pose.position.x);

            this->publisher->publish(command);
        };

        this->subscription = this->create_subscription<geometry_msgs::msg::PoseStamped>("bot/pose", 10, callback);
    }

private:
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr subscription;
    rclcpp::Publisher<control_msgs::msg::MultiDOFCommand>::SharedPtr publisher;
};


int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PoseRepublisher>());
    rclcpp::shutdown();
    return 0;

}