#include "OpenCVSample.h"

using namespace cv;


void processImage(Mat &frame)
{
	int thres = 128;
	threshold(frame, frame, thres, 255, cv::THRESH_BINARY);
	return;
}

