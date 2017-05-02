#ifndef PANDA_STICHING_H
#define PANDA_STICHING_H
#include "Action.h"
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include <opencv2/stitching.hpp>
#include <iostream>
#include <string>


class Stiching {
public:
    virtual void run();

};


#endif //PANDA_STICHING_H
