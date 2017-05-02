class Brightness: public Abstract Action{
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