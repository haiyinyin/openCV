#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
#include "Resize.h"

using namespace std;
using  std::string;
using namespace cv;

void Resize :: run(){
    string filename;
    cout << "give me an input file";
    cin >> filename;

    int width;
    cout << "width";
    cin >> width;

    int height;
    cout << "height";
    cin >> height;

    Mat original_img = cv::imread(filename);//读取图像
    Mat cropped_img;
    resize(original_img, cropped_img, Size(width, height));
    std::cout << "Resized done";


    namedWindow("original_img", WINDOW_AUTOSIZE);
    namedWindow("cropped_img", WINDOW_AUTOSIZE);

    // show images
    imshow("original_img", original_img);
    imshow("cropped_img", cropped_img);
    waitKey(0);

    destroyAllWindows();

}

void Resize ::trackAction(int t) {
    //createTrackbar("Ratio", "trackbar demo", 0, t, onChange);

}
