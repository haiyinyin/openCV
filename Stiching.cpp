#include "Stiching.h"
void Stiching :: run(){
    vector<Mat> imgs;

    bool try_use_gpu = false;
    Stitcher::Mode mode =Stitcher::PANORAMA;
    string filename;
    cout << "give me three input files \n";

    filename = "test1.jpg";
    Mat img=imread(filename);
    if(!img.empty()){
        imshow("window", img);
    }
    imgs.push_back(img);
    waitKey();



    filename="test2.jpg";
    img=imread(filename);
    if(!img.empty()){
        imshow("window", img);
    }

    imgs.push_back(img);
    waitKey();


    filename="test3.jpg";
    img=imread(filename);
    if(!img.empty()){
        imshow("window", img);
    }
    imgs.push_back(img);
    waitKey();

    Mat pano;
    Stitcher stitcher = Stitcher::createDefault(false);
    Stitcher::Status status = stitcher.stitch(imgs, pano);

    if (status != Stitcher::OK)
    {
        cout << "Can't stitch images, error code = " << int(status) << endl;

    }

    namedWindow("New Image", WINDOW_NORMAL);

    /// Show stuff
    imshow("New Image", pano);




}
