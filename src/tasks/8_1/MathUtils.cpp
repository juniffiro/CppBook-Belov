/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 07/06/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#include "MathUtils.h"

int MathUtils::toMinutes(int hours)
{
    return hours * 60;
}

int MathUtils::toDays(int hours)
{
    return hours / 24;
}

bool MathUtils::checkMax(int &value, int max)
{
    return value > max;
}

int MathUtils::toHours(int minutes)
{
    return minutes / 60;
}


