//
// Created by idriver on 24-1-18.
//

#include "laser_mapping.h"
#include <iostream>
#include <ros/ros.h>
int main(int argc, char **argv){
  ros::init(argc, argv, "laserMapping");
  ros::NodeHandle node_handle;
   LidarMapping lidar(node_handle);

  return 0;
}