#pragma once
#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include <iostream>
#include "point.h"

using namespace std;

class Circle {

public:
    void setCenter(Point center);
    void setRadius(double radius);
    int relativePosition(Point p);

private:
    Point m_Center;
    double m_Radius;
};

#endif // _CIRCLE_H_