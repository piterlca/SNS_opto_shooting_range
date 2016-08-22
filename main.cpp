#include <opencv\cv.h>
#include <opencv\highgui.h>

using namespace cv;

int main(void) {
	cv::Mat image;
	image=imread("img.jpg", 1);

	namedWindow("Displayimg", CV_WINDOW_AUTOSIZE);
	imshow("Display Image", image);


	return 0;
}
