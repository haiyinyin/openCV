//
// Created by xhy0908 on 2017/6/17.
//
#ifndef SHAPEPROJECT_RECTANGLE_H
#define SHAPEPROJECT_RECTANGLE_H
#include <iostream>

#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include "shape.h"


using namespace cv;
using namespace std;

class Rectangle : public shape {
public:
    //constructor
    Rectangle(const Point &center,const Size &size);
    virtual void draw(Mat img);//method
    virtual void translation(Point P);
private:
    Size size_;
Point center_;
vector<Point> points;
    vector<Point> points_;
    Mat img;

};



#endif //SHAPEPROJECT_RECTANGLE_H
