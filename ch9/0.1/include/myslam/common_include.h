//
// Created by lihao on 19-8-28.
//

#ifndef MYSLAM_COMMON_INCLUDE_H
#define MYSLAM_COMMON_INCLUDE_H

// for Eigen
#include <Eigen/Core>
#include <Eigen/Geometry>
using Eigen::Vector2d;
using Eigen::Vector3d;

// for Sophus
#include <sophus/se3.h>
using Sophus::SE3;

// for opencv
#include <opencv2/core/core.hpp>
using cv::Mat;


// std
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <set>
#include <unordered_map>
#include <map>
#include <memory>

#endif //MYSLAM_COMMON_INCLUDE_H
