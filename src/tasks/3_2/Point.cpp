/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 19/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#include "Point.h"
#include <cmath>

double Point::getX() const
{
    return x;
}

void Point::setX(double x)
{
    Point::x = x;
}

double Point::getY() const
{
    return y;
}

void Point::setY(double y)
{
    Point::y = y;
}

Point::Point(double x, double y) : x(x), y(y) {}

double Point::calculate(Point &point)
{
    double x1 = x;
    double x2 = point.getX();
    double y1 = y;
    double y2 = point.getY();
    double res = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);
    // double res1 = pow((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2), 0.5);
    return res;
}
