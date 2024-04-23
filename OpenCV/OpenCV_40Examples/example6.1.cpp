#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <opencv2/opencv.hpp>
#include "path.hpp"

using namespace std;
using namespace cv;

int main(void) {

    Mat o = imread(path + "chapter6/cat3.jpg");

    Mat gray; 
    cvtColor(o, gray, COLOR_BGR2GRAY);

    double ret;
    Mat binary;
    ret = threshold(gray, binary, 127, 255, THRESH_BINARY);

    Mat contours;
    findContours(gray, contours, RETR_LIST, CHAIN_APPROX_SIMPLE);
    drawContours(o, contours, 0, Scalar(0, 0, 255), 3);

    imshow("cat", o);

    waitKey(0);
    destroyAllWindows();

    return  0;
}