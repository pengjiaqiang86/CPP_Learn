#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
// ELBP 演示
	cv::namedWindow("ELBP Result", WINDOW_AUTOSIZE);
	cv::createTrackbar("ELBP Radius:", "ELBP Result", &current_radius, max_count, ELBP_Demo);
	ELBP_Demo(0, 0);
 
	cv::waitKey(0);
	return 0;
}
 
void ELBP_Demo(int, void*) {
	int offset = current_radius * 2;
	Mat elbpImage = Mat::zeros(gray_src.rows - offset, gray_src.cols - offset, CV_8UC1);
	int width = gray_src.cols;
	int height = gray_src.rows;
 
	int numNeighbors = 8;
	for (int n = 0; n < numNeighbors; n++) {
		float x = static_cast<float>(current_radius) * cos(2.0 * CV_PI*n / static_cast<float>(numNeighbors));
		float y = static_cast<float>(current_radius) * -sin(2.0 * CV_PI*n / static_cast<float>(numNeighbors));
 
		int fx = static_cast<int>(floor(x));
		int fy = static_cast<int>(floor(y));
		int cx = static_cast<int>(ceil(x));
		int cy = static_cast<int>(ceil(y));
 
		float ty = y - fy;
		float tx = x - fx;
 
		float w1 = (1 - tx)*(1 - ty);
		float w2 = tx*(1 - ty);
		float w3 = (1 - tx)* ty;
		float w4 = tx*ty;
 
		for (int row = current_radius; row < (height - current_radius); row++) {
			for (int col = current_radius; col < (width - current_radius); col++) {
				float t = w1* gray_src.at<uchar>(row + fy, col + fx) + w2* gray_src.at<uchar>(row + fy, col + cx) +
					w3* gray_src.at<uchar>(row + cy, col + fx) + w4* gray_src.at<uchar>(row + cy, col + cx);
				elbpImage.at<uchar>(row - current_radius, col - current_radius) +=
					((t > gray_src.at<uchar>(row, col)) && (abs(t - gray_src.at<uchar>(row, col)) > std::numeric_limits<float>::epsilon())) << n;
			}
		}
	}
	imshow("ELBP Result", elbpImage);
	return;
}