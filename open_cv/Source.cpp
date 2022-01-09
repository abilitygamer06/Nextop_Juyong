#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

void brightness1() {
	Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);
	if (src.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	Mat dst = src + 100;
	Mat dst_1 = src - 100;

	imshow("src", src);
	imshow("dst", dst);
	imshow("dst_1", dst_1);

	waitKey();

	destroyAllWindows();
}

void time_inverse() {
	Mat src = imread("lenna.bmp", IMREAD_GRAYSCALE);

	if (src.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	Mat dst(src.rows, src.cols, src.type());

	TickMeter tm;
	tm.start();

	for (int j = 0; j < src.rows; j++) {
		for (int i = 0; i < src.cols; i++) {
			dst.at<uchar>(j, i) = 255 - src.at<uchar>(j, i);
		}
	}

	tm.stop();
	cout << " Image inverse took" << tm.getTimeMilli() << "ms." << endl;
} 

void mask_copyTo() {
	Mat src = imread("airplane.bmp", IMREAD_COLOR);
	Mat mask = imread("mask_plane.bmp", IMREAD_GRAYSCALE);
	Mat dst = imread("field.bmp", IMREAD_COLOR);

	if (src.empty() || mask.empty() || dst.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	src.copyTo(dst, mask);

	imshow("dst", dst);

	waitKey();
	destroyAllWindows();
}
	
void mask_setTo() {
	Mat src = imread("lenna.bmp", IMREAD_COLOR);
	Mat mask = imread("mask.png", IMREAD_GRAYSCALE);

	if (src.empty() || mask.empty()) {
		cerr << "Image load failed!" << endl;
		return;
	}

	src.setTo(Scalar(0, 25, 255), mask);

	imshow("src", src);
	imshow("mask", mask);

	waitKey();
	destroyAllWindows();
}

void camera_in() {
	VideoCapture cap("amongus.mp4");

	if (!cap.isOpened()) {
		cerr << "Camera open failed" << endl;
		return;
	}

	cout << "Frame width: " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
	cout << "Frame height: " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << endl;

	Mat frame, inversed;
	while (true) {
		cap >> frame;
		if (frame.empty()) break;

		inversed = ~frame;

		imshow("frame", frame);
		imshow("invrsed", inversed);

		if (waitKey(10) == 27) break;
	}

	destroyAllWindows();
}

int main() {

	brightness1();

	return 0;
}