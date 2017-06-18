//
// Created by xhy0908 on 2017/6/17.
//

#include "Rectangle.h"

Rectangle::Rectangle(const Point &center,const Size &size)
{
points.push_back(Point(center.x-size.width,center.y-size.height));
points.push_back(Point(center.x+size.width,center.y-size.height));
points.push_back(Point(center.x+size.width,center.y+size.height));
points.push_back(Point(center.x-size.width,center.y+size.height));
size_=size;
    center_=center;
}

void Rectangle :: draw(Mat img){
    polylines(img,points,true,Scalar(0, 255, 255), 3);
    imshow("window",img);
}

void Rectangle::translation(Point P) {

 points[0]=Point(center_.x-size_.width+P.x,center_.y-size_.height+P.y);
    cout<<points[0];
    points[1]=Point(center_.x+size_.width+P.x,center_.y-size_.height+P.y);
    points[2]=Point(center_.x+size_.width+P.x,center_.y+size_.height+P.y);
    points[3]=Point(center_.x-size_.width+P.x,center_.y+size_.height+P.y);

}