/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 20/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */

#include <iostream>
#include "Circle.h"

const Point &Circle::getCenterPoint() const
{
    return centerPoint;
}

void Circle::setCenterPoint(const Point &point)
{
    Circle::centerPoint = point;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double r)
{
    Circle::radius = r;
}

Circle::Circle(const Point &centerPoint, double radius) : centerPoint(centerPoint), radius(radius) {}

void Circle::printInfo()
{
    std::cout << "Circle center: (" << centerPoint.getX()
              << ";" << centerPoint.getY() << ")" << std::endl;
    std::cout << "Circle radius: " << radius << std::endl;
}
