#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(void)
{
    cv::Mat src = cv::imread("C:\\Users\\Administrator\\Desktop\\DSC_0710_00001.JPG", 0);
    cv::imshow("src", src);

    cv::Mat kernel1 = getStructuringElement(1, Size(7, 7));
    cv::Mat erode1;
    cv::erode(src, erode1, kernel1);
    cv::imshow("erode1", erode1);

    cv::waitKey(0);
    cv::destroyAllWindows();

    system("pause");

    return 0;
}