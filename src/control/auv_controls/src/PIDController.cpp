#include <memory>
#include <control_toolbox/pid.hpp>
#include <Eigen/Dense>
#include <cmath>
#include <fmt/core.h>
#include <vector>
#include <array>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose_array.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "std_msgs/msg/float64.hpp"
#include <tf2/utils.hpp>
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include "rclcpp_action/rclcpp_action.hpp"
#include "custom_msgs/action/move_to.hpp"

#define STATE_TOPIC "/model/bluerov2/odometry"
#define REFERENCE_TOPIC "/reference"
#define THRUSTER_COMMAND "auv_controls/thruster{}/cmd_thrust"
#define CMD_TOPIC "/cmd_vel"


class PIDController : public rclcpp::Node 
{
public:
    using MoveTo = custom_msgs::action::MoveTo;
    using GoalHandleMoveTo = rclcpp_action::ServerGoalHandle<MoveTo>;
    
    PIDController() : Node("PIDController")
    {     
        //should be either "direct", for direct steering or "reference" for driving to reference
        this->declare_parameter("control_mode", "reference");        
        this->declare_parameter("tam_inv", this->defaultTamInverse);
        this->declare_parameter("max_thruster_force", 10.0);
        this->dist_for_reached = this->declare_parameter("dist_for_reached", this->dist_for_reached);
        for (int i = 0;i < 8; i++) {
            this->declare_parameter(fmt::format("thruster_{}_coefficient", i+1), 1.0);
        }
                
        this->strategy.type = control_toolbox::AntiWindupStrategy::CONDITIONAL_INTEGRATION;
        std::string dirs[] = {"x", "y", "z", "yaw"};
        //create different pids for x, y, z and yaw    
        for (int i = 0;i < 4; i++) {                        
            double P = this->declare_parameter(fmt::format("{}_p", dirs[i]), 20.0);
            double I = this->declare_parameter(fmt::format("{}_i", dirs[i]), 4.5);
            double D = this->declare_parameter(fmt::format("{}_d", dirs[i]), 1.5);
            //p, i, d, bounded max out, bounded min out        
            pids[i].initialize(P, I, D, 10.0, -10.0, this->strategy);            
        }
        
        // tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
        // tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

        stateSubscriber = this->create_subscription<nav_msgs::msg::Odometry>(STATE_TOPIC, 10, 
            [this](nav_msgs::msg::Odometry::ConstSharedPtr msg) {
                stateCallback(msg);
            });

        referenceSubscriber = this->create_subscription<geometry_msgs::msg::Pose>(REFERENCE_TOPIC, 10, 
            [this](geometry_msgs::msg::Pose::ConstSharedPtr msg) {
                referenceCallback(msg);
            });
        
        cmdSubscriber = this->create_subscription<geometry_msgs::msg::Twist>(CMD_TOPIC, 10, 
            [this](geometry_msgs::msg::Twist::ConstSharedPtr msg) {
                cmdCallback(msg);
            });
    
        for (int i = 0; i < 6; i++) {
            std::string str = fmt::format("auv_controls/thruster{}/cmd_thrust", i+1);
            // RCLCPP_INFO(this->get_logger(), str.c_str());
            thrusterPub[i] = this->create_publisher<std_msgs::msg::Float64>(str.c_str(), 10);            
        }       
        



        auto handle_goal = [this](const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const MoveTo::Goal> goal)
        {
            RCLCPP_INFO(this->get_logger(), "received target %.3f, %.3f, %.3f", 
                goal->target.position.x, goal->target.position.y, goal->target.position.z);
            (void)uuid;
            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        };

        auto handle_cancel = [this](const std::shared_ptr<GoalHandleMoveTo> goal_handle)
        {
            RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
            (void)goal_handle;
            this->active_goal.reset();
            return rclcpp_action::CancelResponse::ACCEPT;
        };

        auto handle_accepted = [this](const std::shared_ptr<GoalHandleMoveTo> goal_handle)
        {            
            this->active_goal = goal_handle;
            const auto goal = goal_handle->get_goal();
            this->reference = goal->target;
            RCLCPP_INFO(this->get_logger(), "all good");
        };

        this->action_server_ = rclcpp_action::create_server<MoveTo>(
            this,
            "moveTo",
            handle_goal,
            handle_cancel,
            handle_accepted);
    }

private:
    std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;

    //subscribes to the current state from localization
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr stateSubscriber;
    //subscribes to the targetPosition, aka reference
    rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr referenceSubscriber;
    geometry_msgs::msg::Pose reference;

    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmdSubscriber;

    rclcpp_action::Server<MoveTo>::SharedPtr action_server_;   
    std::shared_ptr<GoalHandleMoveTo> active_goal; 

    double dist_for_reached = 0.1;

    // dummy values, reinitialized in constructor so we can take in parameter values
    control_toolbox::AntiWindupStrategy strategy;
    std::array<control_toolbox::Pid, 4> pids = {
        control_toolbox::Pid(0.0, 0.0, 0.0, 10.0, -10.0, this->strategy),
        control_toolbox::Pid(0.0, 0.0, 0.0, 10.0, -10.0, this->strategy),
        control_toolbox::Pid(0.0, 0.0, 0.0, 10.0, -10.0, this->strategy),
        control_toolbox::Pid(0.0, 0.0, 0.0, 10.0, -10.0, this->strategy),
    };
    double prev_timestamp;

    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr thrusterPub[6];    

    //calculated TAM Moore-Penrose psuedo inverse, use online calculator
    // Eigen::MatrixXd 
    std::vector<double> defaultTamInverse  = {
        -0.353553281186581,  0.361011053952608,  1.491780290598801,
        -0.353553281186581, -0.361011053952608, -1.491780290598801,
         0.353553281186581,  0.346095508420555, -1.491780290598801,
         0.353553281186581, -0.346095508420555,  1.491780290598801
    };


    void referenceCallback(const geometry_msgs::msg::Pose::ConstSharedPtr msg)
    { this->reference = *msg; }

    void cmdCallback(const geometry_msgs::msg::Twist::ConstSharedPtr msg)
    {    
        if (this->get_parameter("control_mode").as_string() == "direct")
        {
            commandForce(msg->linear.x * 5, -msg->linear.y * 5, msg->linear.z * 10, -msg->angular.z * 0.2);
            return; 
        }

        this->reference.position.x = msg->linear.x * 0.5 + this->reference.position.x;
        this->reference.position.y = msg->linear.y * 0.5 + this->reference.position.y;
        this->reference.position.z = this->reference.position.z < 0 ? 0 : msg->linear.z * 0.5 + this->reference.position.z;        
        this->reference.orientation.z = msg->angular.z * 0.5 + this->reference.orientation.z;
        if (this->reference.orientation.z < -3.1415) { this->reference.orientation.z += 3.1415; }
        if (this->reference.orientation.z >  3.1415) { this->reference.orientation.z -= 3.1415; }            
    }

    /*
    For reference control commanding
    */
    void stateCallback(const nav_msgs::msg::Odometry::ConstSharedPtr msg)
    {
        if (this->get_parameter("control_mode").as_string() == "direct")
            return;

        double currentStamp = msg->header.stamp.sec + msg->header.stamp.nanosec/(1e9);
        //big jump in time, let the next time loop
        if (currentStamp - prev_timestamp > 0.1) {
            RCLCPP_WARN(this->get_logger(), "time jump of %.5fs!!", currentStamp - prev_timestamp);  
            prev_timestamp = currentStamp;
            return;
        }
        //compute xy-yaw pid effort
        geometry_msgs::msg::Pose state = msg->pose.pose;
        
        //transform from ENU to NED
        // try {
        //     geometry_msgs::msg::PoseStamped pose_in;
        //     pose_in.header = msg->header;
        //     pose_in.header.frame_id = "world";
        //     pose_in.pose = msg->poses[0];

        //     state = tf_buffer_->transform(pose_in, "world_ned").pose;
        // } catch (const tf2::TransformException &ex) {
        //    RCLCPP_WARN(get_logger(), "Could not transform pose: %s", ex.what());
        // }

        double stateYaw = tf2::getYaw(state.orientation);
        double refYaw = tf2::getYaw(reference.orientation);

        double dx = reference.position.x - state.position.x;
        double dy = reference.position.y - state.position.y;
        double dz = reference.position.z - state.position.z;
        //x-y displacement vector (in the AUV reference)
        Eigen::Vector2d displacement(
            std::cos(stateYaw) * dx + std::sin(stateYaw) * dy,
            -std::sin(stateYaw) * dx + std::cos(stateYaw) * dy);
        
        const double yawError = std::atan2(
            std::sin(refYaw - stateYaw),
            std::cos(refYaw - stateYaw));

        // RCLCPP_INFO(this->get_logger(), "dx: %f, dy: %f, dz: %f, dYaw: %f",
        //     displacement(0), displacement(1), dz, refYaw - stateYaw);        
        double xEffort =   pids[0].compute_command(displacement(0),    currentStamp - prev_timestamp);
        double yEffort =   pids[1].compute_command(displacement(1),    currentStamp - prev_timestamp);
        double zEffort =   pids[2].compute_command(dz,                 currentStamp - prev_timestamp);
        double yawEffort = pids[3].compute_command(yawError,           currentStamp - prev_timestamp);
                    
        commandForce(xEffort, yEffort, zEffort, yawEffort);

        // handle active actions
        if (this->active_goal != nullptr) {
            if (this->active_goal->is_canceling()) {
                this->reference = state;
                this->active_goal.reset();
            }

            auto feedback = std::make_shared<MoveTo::Feedback>();
            feedback->current = state;
            active_goal->publish_feedback(feedback);

            if (dist(state, this->reference) < this->get_parameter("dist_for_reached").as_double()) {
                auto result = std::make_shared<MoveTo::Result>();
                result->success = true;
                this->active_goal->succeed(result);
                this->active_goal.reset();
            }
        }

        prev_timestamp = currentStamp;
    }
    
    void commandForce(float x, float y, float z, float yaw) {
        Eigen::VectorXd effort(3);
        effort << x, -y, -yaw;

        //2 total vertical thrusters
        double individualZEffort = -z/2;

        std::vector<double> tamInvValues;
        this->get_parameter("tam_inv", tamInvValues);
        Eigen::Map<Eigen::Matrix<double, 4, 3, Eigen::RowMajor>> tamInverse(tamInvValues.data());

        Eigen::VectorXd allocation(4);
        allocation = tamInverse * effort;
        
        //thruster1 to thruster4
        publishThrust(0, allocation(0));
        publishThrust(1, allocation(1));
        publishThrust(2, allocation(2));
        publishThrust(3, allocation(3));

        publishThrust(4, individualZEffort);
        publishThrust(5, individualZEffort);
    }

    void publishThrust(int idx, float value) {        
        auto msg = std_msgs::msg::Float64();
        double coefficient = this->get_parameter(fmt::format("thruster_{}_coefficient", idx+1)).as_double();
        msg.data = value * coefficient;
        this->thrusterPub[idx]->publish(msg);
    }

    double dist(const geometry_msgs::msg::Pose& a, const geometry_msgs::msg::Pose& b)
    {
        const double dx = a.position.x - b.position.x;
        const double dy = a.position.y - b.position.y;
        const double dz = a.position.z - b.position.z;

        return std::hypot(std::hypot(dx, dy), dz);
    }

};

int main(int argc, char* argv[]) 
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PIDController>());
    rclcpp::shutdown();
    return 0;
}