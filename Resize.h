//
// Created by xhy0908 on 2017/4/30.
//

#ifndef PANDA_RESIZE_H
#define PANDA_RESIZE_H
#include "Action.h"
#include "AbstractTrack.h"
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include <opencv2/stitching.hpp>
#include <iostream>
#include <string>



class Resize : public Action, public AbstractTrack
{
public:
    virtual void run();
    virtual void trackAction(int t);

    };


#endif //PANDA_RESIZE_H
