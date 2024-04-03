#include <cmath>
#include "circle.h"
#include "point.h"

void Circle::setCenter(Point center) {
    m_Center = center;
}

void Circle::setRadius(double radius) {
    m_Radius = radius;
}

// return：1：点在圆外 2：点在圆上 3：点在圆内
int Circle::relativePosition(Point p) {
    double deltaX = m_Center.getX() - p.getX();
    double deltaY = m_Center.getY() - p.getY();
    double dist = sqrt(pow(deltaX, 2) + pow(deltaY, 2));
    if (dist > m_Radius) {
        return 1;
    } else if (dist == m_Radius) {
        return 2;
    }
    return 3;
}