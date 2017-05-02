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