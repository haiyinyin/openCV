#include <iostream>
#include <string>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "Action.hpp"
# include "Abstract class hpp"
# include "Resize hpp"
# include "DilEro hpp"
# include "Brighteness hpp"
# include  "Stiching hpp"

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
    std::cout<<"5) QUIT"<<std::endl;

    Action *action 

    while(true) {
    int choice;

    cout << "print the number of the function";


    cin >> choice;

    switch (choice) {

        case 1: {
            action = DilEro dilero;
            dilero.run();
        }
            break;

        case 2: {
            action = Resize resize;
            resize.run();
        }
            break;

        case 3: {
            action = Brightness brightness;
            brightness.run();
        }
            break;

        case 4:
            cout << "PANORAMA/ STITCHING\n";
            break;

        case 5:
            return 0;


    }
}


    return 0;
}
