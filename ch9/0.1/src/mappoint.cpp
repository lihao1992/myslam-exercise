//
// Created by lihao on 19-8-28.
//

#include "myslam/common_include.h"
#include "myslam/mappoint.h"

namespace myslam {

    MapPoint::MapPoint():
    id_(-1), pos_(Vector3d(0, 0, 0)), norm_(Vector3d(0,0,0)), observed_times_(0), correct_times_(0)
    {

    }

    MapPoint::MapPoint(long id, Vector3d pos, Vector3d norm):
    id_(id), pos_(pos), norm_(norm), observed_times_(0), correct_times_(0)
    {

    }

    MapPoint::Ptr MapPoint::CreateMapPoint()
    {
        static long factory_id = 0;
        return MapPoint::Ptr (new MapPoint( factory_id++, Vector3d(0,0,0), Vector3d(0,0,0)) );
    }
}

