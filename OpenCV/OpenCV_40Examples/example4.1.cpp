#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <opencv2/opencv.hpp>
#include "path.hpp"

using namespace std;
using namespace cv;

/**
 * 
 * example 4.1
 * 
 * Page 100
 * 
 * @author pjq
 * @date 20230306
 * @version 1.0
 * 
 * 学习：
 * 
 * 1. Mat构造方法 cv::Mat::Mat(int rows, int cols, int type)
 * 2. RNG随机填充
 * 3. C++字符串拼接：1. str + str2  2. str1.append(str2)  3. cout<< str1 << str2 << endl; (仅控制台)
 * 4. C++获取键盘输入
 * 
 * ```cpp
 * String str1;
 * getline(cin, str1);
 * ```
 *  
*/
int main(void)
{
    cv::Mat lena = cv::imread((path + "Chapter3/lena.bmp"), 0); // gray scale
    cv::Mat encryption;
    cv::Mat decryption;

    Size size = lena.size();
    cv::Mat key = Mat(size.width, size.height, CV_8UC1);

    RNG rng(123456);
    rng.fill(key, RNG::UNIFORM, 0, 255, false); // 随机矩阵 

    cv::bitwise_xor(lena, key, encryption);
    cv::bitwise_xor(encryption, key, decryption);

    cv::imshow("lena", lena);
    cv::imshow("key", key);
    cv::imshow("encryption", encryption);
    cv::imshow("decryption", decryption);

    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}