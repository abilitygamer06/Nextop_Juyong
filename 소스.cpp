#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main(void) {
	cout << "Hello OpenCV" << CV_VERSION << endl;

	Mat img;
	img = imread("lena.jpg");

	if (img.empty()) {
		cerr << "Image load failed!" << endl;
		return -1;
	}

	namedWindow("image");
	imshow("image", img);

	waitKey();
	return 0;
}