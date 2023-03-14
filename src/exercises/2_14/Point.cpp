/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 20/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#include "Point.h"

double Point::getX() const
{
    return x;
}

void Point::setX(double p1)
{
    Point::x = p1;
}

double Point::getY() const
{
    return y;
}

void Point::setY(double p1)
{
    Point::y = p1;
}

Point::Point(double x, double y) : x(x), y(y) {}
