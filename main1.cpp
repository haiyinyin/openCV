/*#include <opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <string>

#include "Action.h"
#include "Resize.h"
#include "Brightness.h"
#include "Erose.h"
#include "Stiching.h"


using namespace std;
using namespace cv;

const String keys =
        "{help h usage ?  |      | print this message   }"
                "{@image          |<none>| image to show        }"
;



int main( int argc, const char** argv )
{


    CommandLineParser parser(argc, argv, keys);
    parser.about("ISEP C++ 2017");

    if (parser.has("help")) {
        parser.printMessage();
        return 0;
    }

    String img_filename = parser.get<String>(0);

    if (!parser.check()) {
        parser.printErrors();
        return 0;
    }

    /// Initialize MENU

    std::cout<<" ----------------- Menu ------------------ "<<std::endl;

    std::cout<<"1) DILATATION/ EROSION "<<std::endl;
    std::cout<<"2) RESIZING"<<std::endl;
    std::cout<<"3) LIGHTERN/ DARKEN"<<std::endl;
    std::cout<<"4) PANORAMA/ STITCHING"<<std::endl;
    std::cout<<"5) Line"<<std::endl;
    std::cout<<"6) QUIT"<<std::endl;

while(true) {
    int choice;

    cout << "print the number of the function";


    cin >> choice;

    switch (choice) {

        case 1: {

            Erose erose;
            erose.run();

            //cout << "erosen";
        }
            break;

        case 2: {
            Resize resize;
            resize.run();
            resize.trackAction(200);
        }
            break;

        case 3: {

            Brightness brightness;
            brightness.run();

            //cout << "brightness";
        }
            break;

        case 4: {
           Stiching stiching;
            stiching.run();

            //cout << "stiching";
        }

            break;

        case 5:
            return 0;

        case 6:
            return 0;


    }
}


    return 0;
}*/

