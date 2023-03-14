/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 07/06/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#ifndef TEST81_CONTROLPOINT_H
#define TEST81_CONTROLPOINT_H

#include <iostream>
#include "MathUtils.h"

class ControlPoint {
private:
    int startTime = 0;
    void updateStartTime(int newTime);
    void info(int days, int hours, int minutes);
public:
    void handleCar();
};


#endif //TEST81_CONTROLPOINT_H
