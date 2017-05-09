//create trackbar of brightness
#include "Brightness.h";

//golbal function statement
static void ContrastAndBright(int, void *);

//golbal varibales statement
int g_nContrastValue; //contrast value
int g_nBrightValue;  //Brightness value
Mat g_srcImage, g_dstImage;


void Brightness::run()
{
	//change the console foreground and background color 
	system("color5F");

	//input the imge  
	string filename;
	cout << "give me an input file";
	cin >> filename;
    g_srcImage = imread(filename);
	g_dstImage = Mat::zeros(g_srcImage.size(), g_srcImage.type());

	//initilize contrast value and Bright value
	g_nContrastValue = 80;
	g_nBrightValue = 80;

	//create window
	namedWindow("New Image", 1);

	//create trackbar  
	createTrackbar("contrast£º", "New Image", &g_nContrastValue, 300, ContrastAndBright);
	createTrackbar("Bright£º", "New Image", &g_nBrightValue, 200, ContrastAndBright);

	//using callback function  
	ContrastAndBright(g_nContrastValue, 0);
	ContrastAndBright(g_nBrightValue, 0);
}


//define contrastAndBright function
static void ContrastAndBright(int, void *)
{

	//create window  
	namedWindow("Initial Image", 1);

	//three for loop£¬excute g_dstImage(i,j) =a*g_srcImage(i,j) + b  
	for (int y = 0; y < g_srcImage.rows; y++)
	{
		for (int x = 0; x < g_srcImage.cols; x++)
		{
			for (int c = 0; c < 3; c++)
			{
				g_dstImage.at<Vec3b>(y, x)[c] = saturate_cast<uchar>((g_nContrastValue*0.01)*(g_srcImage.at<Vec3b>(y, x)[c]) + g_nBrightValue);
			}
		}
	}

	//show image 
	imshow("Initial Image", g_srcImage);
	imshow("New Image", g_dstImage);
	waitKey(0);
}

