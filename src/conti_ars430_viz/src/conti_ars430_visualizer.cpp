#include "rclcpp/rclcpp.hpp"
#include <visualization_msgs/msg/marker_array.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <conti_ars430_ros2_msgs/msg/radar_detection_image.hpp>
#include <tinycolormap.hpp>
#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class RadarVisualizer : public rclcpp::Node
{
public: 
    RadarVisualizer()
    : Node("radar_visualizer")
    {
        radar_sub =
            this->create_subscription<conti_ars430_ros2_msgs::msg::RadarDetectionImage>("/conti_ars430/radar_detection_image", 1, std::bind(&RadarVisualizer::topic_callback, this, std::placeholders::_1));
        publisher_ = 
            this->create_publisher<visualization_msgs::msg::MarkerArray>("/ars430_radar_viz/marker_array", 1);
        timer_ = 
            this->create_wall_timer(std::chrono::milliseconds(),std::bind(&RadarVisualizer::timer_callback,this));
    }

    void topic_callback(const conti_ars430_ros2_msgs::msg::RadarDetectionImage::SharedPtr msg) {
        detections = msg->detection_list;
        range.clear();
        radial_vel.clear();
        az.clear();
        el.clear();
        rcs.clear();
        snr.clear();
        val_norm.clear();
        if (detections.size()>0){
            for (uint i = 0; i < detections.size(); i++) {
                conti_ars430_ros2_msgs::msg::RadarDetection detection = detections[i];
                if ((float(detection.el_ang))>0.0){
                    range.push_back(float(detection.range)); //meters
                    radial_vel.push_back(float(detection.v_rel_rad)); // meters per secondS
                    abs_rad_vel.push_back(abs(float(detection.v_rel_rad)));
                    az.push_back(float(detection.az_ang0)); //angle in radians
                    el.push_back(float(detection.el_ang)); //angle in radians
                    rcs.push_back(float(detection.rcs0)); //dBsm
                    snr.push_back(float(detection.snr)); //dB
                }
            }

            // float min_val = *std::min_element(rcs.begin(), rcs.end());
            // float max_val = *std::max_element(rcs.begin(), rcs.end());
            // std::cout << "max radial vel: " << max_val << std::endl;
            // std::cout << "min radial vel: " << min_val << std::endl;
            if (abs_rad_vel.size()>0){
                float min_val = *std::min_element(abs_rad_vel.begin(), abs_rad_vel.end());
                float max_val = *std::max_element(abs_rad_vel.begin(), abs_rad_vel.end());
                // std::cout << "max radial vel: " << max_val << std::endl;
                // std::cout << "min radial vel: " << min_val << std::endl;
                for (uint j = 0; j < abs_rad_vel.size(); j++) {
                    val_norm.push_back((abs_rad_vel[j] - min_val)/(max_val - min_val));
                    // std::cout << "norm: " << (snr[j] - min_val)/(max_val - min_val) << std::endl;
                }
            }
        }
    }

    void timer_callback() {
        visualization_msgs::msg::MarkerArray marker_array;
        visualization_msgs::msg::Marker marker;

        if (range.size()>0){
            for (uint i = 0; i < range.size(); i++){

                marker.header.frame_id = "rplidar_link";
                marker.header.stamp = rclcpp::Clock().now();

                marker.ns = "basic_shapes";
                marker.id = i;
                marker.type = visualization_msgs::msg::Marker::SPHERE;

                marker.action = visualization_msgs::msg::Marker::ADD;
                
                marker.scale.x = 0.05;
                marker.scale.y = 0.05;
                marker.scale.z = 0.05;
                marker.pose.position.x = range[i]*cos(az[i])*cos(el[i]);
                marker.pose.position.y = range[i]*sin(az[i])*cos(el[i]);
                marker.pose.position.z = range[i]*sin(el[i]);;
                marker.pose.orientation.x = 0.0;
                marker.pose.orientation.y = 0.0;
                marker.pose.orientation.z = 0.0;
                marker.pose.orientation.w = 1.0;

                const tinycolormap::Color color = tinycolormap::GetColor(abs_rad_vel[i]/0.3, tinycolormap::ColormapType::Jet);

                marker.color.r = color.r();
                marker.color.g = color.g();
                marker.color.b = color.b();
                marker.color.a = 1;   

                marker.lifetime = rclcpp::Duration::from_seconds(0.075);

                marker_array.markers.push_back(marker);
            
            }
            publisher_->publish(marker_array);
        }
    }

private:
    rclcpp::Subscription<conti_ars430_ros2_msgs::msg::RadarDetectionImage>::SharedPtr radar_sub;
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    
    std::vector<conti_ars430_ros2_msgs::msg::RadarDetection> detections;
    std::vector<float> range;
    std::vector<float> radial_vel;
    std::vector<float> abs_rad_vel;
    std::vector<float> az;
    std::vector<float> el;
    std::vector<float> rcs;
    std::vector<float> snr;
    std::vector<float> val_norm;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<RadarVisualizer>());
    rclcpp::shutdown();

    return 0;
}
