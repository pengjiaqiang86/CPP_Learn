#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

/**
 * 
 * example 3.21
 * 
 * Page 91
 * 
 * @author pjq
 * @date 20230302
 * @version 1.0
 *  
*/
int main(void)
{
    cv::Mat lena = cv::imread("G:\\Program\\Python\\OpenCV\\Chapter3\\lena.bmp", 0);


    cv::Mat kernel1 = getStructuringElement(1, Size(5, 5));
    cv::Mat kernel2 = getStructuringElement(1, Size(7, 7));
    cv::Mat kernel3 = getStructuringElement(1, Size(9, 9));

    cv::Mat kernel = kernel1;

    cv::Mat open;
    cv::morphologyEx(lena, open, cv::MORPH_OPEN, kernel);

    cv::Mat close;
    cv::morphologyEx(lena, close, cv::MORPH_CLOSE, kernel);

    cv::Mat gradient;
    cv::morphologyEx(lena, gradient, cv::MORPH_GRADIENT, kernel);

    cv::Mat tophat;
    cv::morphologyEx(lena, tophat, cv::MORPH_TOPHAT, kernel);

    cv::Mat blackhat;
    cv::morphologyEx(lena, blackhat, cv::MORPH_BLACKHAT, kernel);

    cv::imshow("lena", lena);
    cv::imshow("open", open);
    cv::imshow("close", close);
    cv::imshow("gradient", gradient);
    cv::imshow("tophat", tophat);
    cv::imshow("blackhat", blackhat);

    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}