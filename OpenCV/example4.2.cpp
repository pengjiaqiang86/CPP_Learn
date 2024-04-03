#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <opencv2/opencv.hpp>
#include "path.hpp"

using namespace std;
using namespace cv;

/**
 * 
 * example 4.2
 * 
 * ROI方式打码 Page 100
 * 
 * @author pjq
 * @date 20230306
 * @version 1.0
 *  
 * 学习：
 * 
 * 1. 提取子区域，先定义Rect对象，然后lena(rect)
 * 2. 替换区域，新区域.copyTo(旧图(rect))
 * 
*/
int main(void)
{
    // 原图
    cv::Mat lena = cv::imread((path + "Chapter3/lena.bmp"), 0); // gray scale
    
    // key
    Size size = lena.size();
    cv::Mat key = Mat(size.width, size.height, CV_8UC1);

    RNG rng(12);
    rng.fill(key, RNG::UNIFORM, 0, 255, false); // 随机矩阵 

    // 加密图 解密图
    cv::Mat encryption;
    cv::Mat decryption;
    cv::bitwise_xor(lena, key, encryption);
    cv::bitwise_xor(encryption, key, decryption);

    // ROI
    cv::Rect rect = cv::Rect(100, 100, 75, 100);
    cv::Mat lenaRoi = lena(rect);
    cv::Mat enrcyRoi = encryption(rect);

    // 用加密的子区域替换原有lena区域
    enrcyRoi.copyTo(lena(rect));

    cv::imshow("lenaRoi", lenaRoi);
    cv::imshow("enrcyRoi", enrcyRoi);
    cv::imshow("lena", lena);

    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}