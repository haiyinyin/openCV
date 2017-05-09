#include "Erose.h"


    void Erose :: run(){
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
