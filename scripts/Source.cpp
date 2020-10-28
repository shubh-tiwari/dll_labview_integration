#include "cvheader.h"
#include <iostream>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core/types_c.h>
#include <opencv2/core/core.hpp>
#include <opencv2/core/core_c.h>

using namespace std;
using namespace cv;

uint8_t cv_thresh(unsigned char* img_in, unsigned char* img_out, int height, int width, int thresh_val)
{
	Mat src(height, width, CV_8UC1, img_in);
	Mat thresh(height, width, CV_8UC1, img_out);

	threshold(src, thresh, thresh_val, 255, 0);

	return 0;
}