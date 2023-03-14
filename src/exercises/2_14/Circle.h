/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 20/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#ifndef INC_2_14_CIRCLE_H
#define INC_2_14_CIRCLE_H


#include "Point.h"

class Circle {

private:
    Point centerPoint;
    double radius;
public:
    Circle(const Point &centerPoint, double radius);

    const Point &getCenterPoint() const;

    void setCenterPoint(const Point &centerPoint);

    double getRadius() const;

    void setRadius(double radius);

    void printInfo();
};


#endif //INC_2_14_CIRCLE_H
