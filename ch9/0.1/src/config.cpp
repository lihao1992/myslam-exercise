//
// Created by lihao on 19-8-28.
//
#include "myslam/config.h"

namespace myslam {

    void Config::setParameterFile(const std::string &filename) {

        if ( config_ == nullptr ) {
            config_ = std::shared_ptr<Config>(new Config);
        }
        config_->file_ = cv::FileStorage( filename.c_str(), cv::FileStorage::READ);
        if ( ! config_->file_.isOpened()  ) {

            std::cerr << "parameter file " << filename << "is not exist. " << std::endl;
            config_->file_.release();
            return ;
        }
    }

    Config::~Config() {

        if ( config_->file_.isOpened())
            config_->file_.release();
    }

    std::shared_ptr<myslam::Config> Config::config_ = nullptr;
}
