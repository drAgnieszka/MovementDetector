#ifndef FramesDifference_h
#define FramesDifference_h

#include <iostream>
#include <opencv2/opencv.hpp>
 
using namespace std;
using namespace cv;

class FramesDifference
{
	Mat difference;
	bool movement;
	public:
	static short counter;
	FramesDifference(Mat old, Mat young);
	Mat getDifference(void) {return difference;};
	void thresholding(Mat, Mat, double, double, int);
	void movingPixels();
	static void alarm();
	
};
#endif