#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include "shape.h"
#include "Rectangle.h"

using namespace cv;
using namespace std;

struct data_input {
    Mat *img;
    int pos_x;
    int pos_y;
};



static void on_trackbar_x(int pos,void* userInput);
static void on_trackbar_y(int pos,void* userInput);


shape *shape;

int main() {
    Mat img(600, 600, CV_8UC3, Scalar(255,255,255));
    Point center=Point(150,150);
    Size size=Size(50,100);
    shape=new Rectangle(center,size);

    //createTrackbar("window1","window",&pos_x,30,on_trackbar_x,&img);
    //createTrackbar("window2","window",&pos_y,30,on_trackbar_y,&img);

    data_input data;
    data.img=&img;
    data.pos_x=0;
    data.pos_y=0;

  imshow("window",img);

    createTrackbar("window1","window",&data.pos_x,200,on_trackbar_x,&data);
    createTrackbar("window2","window",&data.pos_y,200,on_trackbar_y,&data);
    on_trackbar_x(80,&data);
    on_trackbar_y(80,&data);


    waitKey();
    return 0;
}

void on_trackbar_x(int pos,void* userInput) {
    data_input* data = (data_input*)userInput;
    Mat img=data->img->clone();
    Point p=Point(data->pos_x,data->pos_y);
 shape->translation(p);

shape->draw(img);
}


void on_trackbar_y(int pos,void* userInput) {
    data_input* data = (data_input*)userInput;
    Mat img=data->img->clone();
    Point p=Point(data->pos_x,data->pos_y);
    shape->translation(p);

    shape->draw(img);
}