/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 19/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#ifndef LAB3_POINT_H
#define LAB3_POINT_H


class Point {
public:

    Point(double x, double y);

    double x;
    double y;

    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);

    double calculate(Point &point);
};


#endif //LAB3_POINT_H
