/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 20/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#ifndef INC_2_14_POINT_H
#define INC_2_14_POINT_H


class Point
{
private:
    double x, y;
public:

    Point(double x, double y);

    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);

};


#endif //INC_2_14_POINT_H
