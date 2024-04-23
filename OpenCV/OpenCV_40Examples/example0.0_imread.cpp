#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main()
{
    // 读取图像
    cv::Mat image = cv::imread("C:/Users/Administrator/Desktop/PSU.jpg", cv::IMREAD_GRAYSCALE);

    // 检查图像是否成功读取
    if (image.empty())
    {
        cout << "无法读取图像" << endl;
    }
    else
    {
        cout << image.size << endl;
        cv::imshow("img", image);
    }

    cv::waitKey(0);

    system("pause");

    return 0;
}