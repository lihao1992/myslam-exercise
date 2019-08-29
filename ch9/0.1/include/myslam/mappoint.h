//
// Created by lihao on 19-8-28.
//

#ifndef MYSLAM_MAPPOINT_H
#define MYSLAM_MAPPOINT_H

namespace myslam {

    class Frame;
    class MapPoint {

    public:
        typedef std::shared_ptr<MapPoint> Ptr;
        unsigned long                id_;   // id
        Vector3d                    pos_;   // Position in world
        Vector3d                    norm_;  // Normal of view direction
        Mat                         descriptor_;        // descriptor for matching
        int                         observed_times_;    // being observed by feature matching algo
        int                         correct_times_;     // being an inliner in pose estimation

        MapPoint();
        MapPoint(long id, Vector3d pos, Vector3d norm);

        // factory function
        static MapPoint::Ptr CreateMapPoint();
    };
}

#endif //MYSLAM_MAPPOINT_H
