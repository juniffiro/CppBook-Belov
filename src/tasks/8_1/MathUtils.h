/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 07/06/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#ifndef TEST81_MATHUTILS_H
#define TEST81_MATHUTILS_H


class MathUtils {
public:
    static int toHours(int minutes);
    static int toMinutes(int hours);
    static int toDays(int hours);
    static bool checkMax(int &value, int max);
};


#endif //TEST81_MATHUTILS_H
