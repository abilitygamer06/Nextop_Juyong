#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void MatOp3() {
	Mat img1 = imread("dl.jpg");


	if (img1.empty()) {
		cerr << "Image load failed" << endl;
		return;
	}

	Mat img2 = img1(Rect(220, 120, 340, 240));
	Mat img3 = img1(Rect(220, 120, 340, 240)).clone();

	img2 = ~img2;

	imshow("img1", img1);
	imshow("img2", img2);
	imshow("img3", img3);

	waitKey();
	destroyAllWindows();
}

int main(void) {
	MatOp3();
	return 0;
}