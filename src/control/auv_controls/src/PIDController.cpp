#include <memory>
#include <control_toolbox/pid.hpp>
#include <Eigen/Dense>
#include <cmath>
// #include <format>
#include <fmt/core.h>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose_array.hpp"
#include "std_msgs/msg/float64.hpp"
#include <tf2/utils.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/LinearMath/Quaternion.h>

#define STATE_TOPIC "/model/bluerov2/pose"
#define REFERENCE_TOPIC "/reference"
#define THRUSTER_COMMAND "auv_controls/thruster{}/cmd_thrust"

class PIDController : public rclcpp::Node 
{
public:
    PIDController() : Node("PIDController")
    {       
        stateSubscriber = this->create_subscription<geometry_msgs::msg::PoseArray>(STATE_TOPIC, 10, 
            [this](geometry_msgs::msg::PoseArray::ConstSharedPtr msg) {
                stateCallback(msg);
            });
        referenceSubscriber = this->create_subscription<geometry_msgs::msg::Pose>(REFERENCE_TOPIC, 10, 
            [this](geometry_msgs::msg::Pose::ConstSharedPtr msg) {
                referenceCallback(msg);
            });

        for (int i = 0; i < 4; i++) {
            std::string str = fmt::format("auv_controls/thruster{}/cmd_thrust", i+1);
            RCLCPP_INFO(this->get_logger(), str.c_str());
            thrusterPub[i] = this->create_publisher<std_msgs::msg::Float64>(str.c_str(), 10);            
        }

        //create different pids for x, y, z and yaw    
        for (int i = 0;i < 4; i++) {
            control_toolbox::AntiWindupStrategy strategy;
            strategy.type = control_toolbox::AntiWindupStrategy::BACK_CALCULATION;
            strategy.tracking_time_constant = 2.0;    
            //p, i, d, bounded max out, bounded min out        
            pids[i].initialize(20.0, 1.5, 2.0, 10.0, -10.0, strategy);            
        }
    }

private:
    //subscribes to the current state from localization
    rclcpp::Subscription<geometry_msgs::msg::PoseArray>::SharedPtr stateSubscriber;
    //subscribes to the targetPosition, aka reference
    rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr referenceSubscriber;
    geometry_msgs::msg::Pose reference;

    //creating a bunch of pid objects throws some depreciation warning, but this is the way the example shows to use it so im too lazy to 
    //figure out what the new way is. They didnt update their documentation!!!
    control_toolbox::Pid pids[4];
    double prev_timestamp;

    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr thrusterPub[4];

    //calculated TAM Moore-Penrose psuedo inverse, use online calculator
    Eigen::MatrixXd tamInverse {
        {-0.353553281186581,  0.361011053952608,  1.491780290598801},
        {-0.353553281186581, -0.361011053952608, -1.491780290598801},
        { 0.353553281186581,  0.346095508420555, -1.491780290598801},
        { 0.353553281186581, -0.346095508420555,  1.491780290598801}
    };
  


    void referenceCallback(const geometry_msgs::msg::Pose::ConstSharedPtr msg)
    { this->reference = *msg; }


    void stateCallback(const geometry_msgs::msg::PoseArray::ConstSharedPtr msg)
    {
        double currentStamp = msg->header.stamp.sec + msg->header.stamp.nanosec/(1e9);
        //compute xy-yaw pid effort
        geometry_msgs::msg::Pose state = msg->poses[0];        
        double stateYaw = tf2::getYaw(state.orientation);        
        double refYaw = tf2::getYaw(reference.orientation);
        
        double dx = reference.position.x - state.position.x;
        double dy = reference.position.y - state.position.y;
        //displacement vector (in the AUV reference)
        Eigen::Vector2d displacement(
            std::cos(stateYaw) * dx + std::sin(stateYaw) * dy,
            -std::sin(stateYaw) * dx + std::cos(stateYaw) * dy);
        
        const double yawError = std::atan2(
            std::sin(refYaw - stateYaw),
            std::cos(refYaw - stateYaw));

        Eigen::VectorXd effort(3);
        RCLCPP_INFO(this->get_logger(), "deltaX: %f, deltaY: %f, refYaw: %f, stateYaw: %f", displacement(0), displacement(1), refYaw, stateYaw);
        double xEffort =   pids[0].compute_command(displacement(0),    currentStamp - prev_timestamp);
        double yEffort =   pids[1].compute_command(displacement(1),    currentStamp - prev_timestamp);
        double psiEffort = pids[3].compute_command(yawError, currentStamp - prev_timestamp);
        //I definitely have some sign/transform error somewhere for this to have a -y and -psi, ill fix it soon
        effort << xEffort, -yEffort, -psiEffort;        

        Eigen::VectorXd allocation(4);
        allocation = this->tamInverse * effort;

        //TODO
        //compute z effort
        // double zEffort =   pids[2].compute_command(reference.position.z - state.position.x, currentStamp - prev_timestamp);
        
        //thruster1 to thruster4
        publishThrust(0, allocation(0));
        publishThrust(1, allocation(1));
        publishThrust(2, allocation(2));
        publishThrust(3, allocation(3));
        

        prev_timestamp = currentStamp;
    }

    void publishThrust(int idx, float value) {                
        // RCLCPP_INFO(this->get_logger(), "thruster%d: %f", idx+1, value);
        auto msg = std_msgs::msg::Float64();
        msg.data = value;
        this->thrusterPub[idx]->publish(msg);
    }

};

int main(int argc, char* argv[]) 
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PIDController>());
    rclcpp::shutdown();
    return 0;
}