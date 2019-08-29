//
// Created by lihao on 19-8-28.
//

#ifndef MYSLAM_MAP_H
#define MYSLAM_MAP_H

#include "myslam/common_include.h"
#include "myslam/frame.h"
#include "myslam/mappoint.h"

namespace myslam {

    class Map {

    public:
        typedef std::shared_ptr<Map> Ptr;
        std::unordered_map<unsigned long, MapPoint::Ptr> map_points_;   // all landmarks
        std::unordered_map<unsigned long, Frame::Ptr> keyframes_;       // all keyframes

        Map() {}

        void insertMapPoint(MapPoint::Ptr map_point);
        void insertKeyFrame(Frame::Ptr frame);
    };
}


#endif //MYSLAM_MAP_H
