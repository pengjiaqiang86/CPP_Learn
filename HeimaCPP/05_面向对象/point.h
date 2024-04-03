#pragma once // 防止头文件重复被包含
#ifndef _POINT_H_
#define _POINT_H_
#include <iostream>

using namespace std;

class Point {

public:
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();

private:
    double m_X;
    double m_Y;
};

#endif