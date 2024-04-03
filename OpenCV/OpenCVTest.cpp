#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc.hpp>

using namespace std;
using namespace cv;

int main()
{

    Mat src = imread("C:\\Users\\Administrator\\Desktop\\58b2f81afccf89aa4da3baafe9ba2f94a4cdd4f4.jpg@240w_240h_1c_1s_!web-avatar-space-header.webp");
    imshow("src", src);

    /*Mat denoisingdst;
    fastNlMeansDenoisingColored(src, denoisingdst);

    imshow("denoising", denoisingdst);*/

    waitKey(0);

    return 0;
}

