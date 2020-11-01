#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;



int main(void) {
	int rainbow[7][3] = {
		{0, 0, 255},
		{0, 50, 255},
		{0, 255, 255},
		{0, 255, 0},
		{255, 0, 0},
		{255, 5, 0},
		{255, 0, 100}
	};
	int j = 0;
	int r = 0;
	int b = 255;
	Mat canvas(1920, 1080, CV_8UC3);

	for(int i = 0;;i++) {
		i %= 256;
		if (j == 0) {
			canvas.setTo(Scalar(0, 0, i));
			if (i == 255) j++;
		}
		if (j == 1) {
			if (r == 255) j++;
			canvas.setTo(Scalar(0, r, 255));
			r++;
		}
		if (j == 2) {
			if (b == 0) j++;
			canvas.setTo(Scalar(0, r, b));
			b--;
		}
		if (j == 3) {
			if (r == 0) j++;
			canvas.setTo(Scalar(i, r, 0));
			r--;
		}
		if (j == 4) {
			if (r == 5) j++;
			canvas.setTo(Scalar(255, r, 0));
			r++;
		}
		if (j == 5) {
			if (b == 100) j = 0;
			canvas.setTo(Scalar(255, 0, b));
			b++;
		}

		imshow("img", canvas);

		if (waitKey(1) == 27)
			break;
	}
	return 0;
}