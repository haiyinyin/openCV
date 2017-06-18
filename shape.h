//
// Created by xhy0908 on 2017/6/17.
//
#ifndef SHAPEPROJECT_SHAPE_H
#define SHAPEPROJECT_SHAPE_H

#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>

using namespace cv;
using namespace std;

class shape {
public:
    virtual void translation(Point P)=0;
    virtual void draw(Mat img)=0;

};


#endif //SHAPEPROJECT_SHAPE_H
