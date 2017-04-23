//
// Created by xhy0908 on 2017/4/23.
//
#include <iostream>
#include <string>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>


using namespace std;
using  std::string;
using namespace cv;



//basic class
class Action{
public:

    virtual void run() = 0; //重写
    virtual void discription() =0;
    Action(){ }

};

class Resize : public Action{
public:
    void run(){
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

    void discription(){
        cout << "it will show original image and resized image";
    }
};

class DilEro : public Action {
public:
    void run(){
        int erosion_size = 0;

        string filename;
        cout << "give me an input file";
        cin >> filename;

        cout << "the erosion is: ";
        cin >> erosion_size;


        Mat original_img = cv::imread(filename);//读取图像
        namedWindow("original", WINDOW_NORMAL);
        imshow("original",original_img);

        Mat element = getStructuringElement( MORPH_RECT,
                                             Size( erosion_size , erosion_size ),
                                             Point( 0, 0 ) );
        Mat EroImg;
        erode(original_img,EroImg,element);
        namedWindow("erode", WINDOW_NORMAL);
        imshow("erode",EroImg);

        Mat DilImg;
        dilate(original_img,DilImg,element);
        namedWindow("dilate", WINDOW_NORMAL);
        imshow("Dilate",DilImg);
        waitKey(0);

        destroyAllWindows();

    }
    void discription(){
        cout << "erode and dilate";
    }

};

class Brightness: public Action{
public:
    void run(){
        string filename;
        cout << "give me an input file";
        cin >> filename;
        Mat image = imread( filename );
        Mat new_image = Mat::zeros( image.size(), image.type() );


        /// Initialize values
        int beta;  /**< Simple brightness control */
        cout<<"the brightness factor : ";
        cin>>beta;

        image.convertTo(new_image, -1, 1, beta);
        /// Create Windows
        namedWindow("Original Image", 1);
        namedWindow("New Image", 1);

        /// Show stuff
        imshow("Original Image", image);
        imshow("New Image", new_image);

        /// Wait until user press some key
        waitKey();

        destroyAllWindows();
    }

    void discription(){
        cout << "brightness";
    }
};

class Stiching: public Action{
public:

    void run(){
        cout << "brightness";
    }

    void discription(){
        cout << "striching";
    }
};