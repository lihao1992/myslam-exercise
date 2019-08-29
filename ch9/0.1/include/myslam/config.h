//
// Created by lihao on 19-8-28.
//

#ifndef MYSLAM_CONFIG_H
#define MYSLAM_CONFIG_H

#include "myslam/common_include.h"

namespace myslam {

    class Config {

    private:
        static std::shared_ptr<myslam::Config> config_;
        cv::FileStorage file_;

        Config() {}     // private constructor makes a singleton

    public:
        ~Config();

        // set a new config file
        static void setParameterFile( const std::string& filename);

        // access the parameter values
        template < typename T >
        static T get(const std::string& key) {

            return T(Config::config_->file_[key]);
        }
    };

}

#endif //MYSLAM_CONFIG_H
