//
// Created by lihao on 19-8-28.
//
#include "myslam/common_include.h"
#include "myslam/map.h"

namespace myslam {

    void Map::insertKeyFrame(myslam::Frame::Ptr frame) {

        std::cout << "key frame size = " << keyframes_.size() << std::endl;
        if (keyframes_.find(frame->id_) == keyframes_.end()) {

            keyframes_.insert( std::make_pair(frame->id_, frame));
        }
        else
            keyframes_[frame->id_] = frame;
    }

    void Map::insertMapPoint(myslam::MapPoint::Ptr map_point) {

        if (map_points_.find(map_point->id_) == map_points_.end()) {

            map_points_.insert( std::make_pair(map_point->id_, map_point));
        }
        else
            map_points_[map_point->id_] = map_point;
    }
}
