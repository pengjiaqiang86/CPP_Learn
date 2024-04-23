#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(void)
{
    cv::Mat src = cv::imread("G:\\Program\\Python\\OpenCV\\Chapter3\\dilation.bmp", 0);
    cv::imshow("src", src);

    cv::Mat kernel1 = getStructuringElement(1, Size(5, 5));
    cv::Mat dilate1;
    cv::dilate(src, dilate1, kernel1);
    cv::imshow("kernel 5x5", dilate1);

    cv::Mat kernel2 = getStructuringElement(1, Size(7, 7));
    cv::Mat dilate2;
    cv::dilate(src, dilate2, kernel2);
    cv::imshow("kernel 7x7", dilate2);

    cv::Mat kernel3 = getStructuringElement(1, Size(9, 9));
    cv::Mat dilate3;
    cv::dilate(src, dilate3, kernel3);
    cv::imshow("kernel 9x9", dilate3);

    cv::waitKey(0);
    cv::destroyAllWindows();

    system("pause");

    return 0;
}