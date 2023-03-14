/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 21/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#include "FormatUtils.h"

string FormatUtils::format(long n, string f0, string f1, string f2)
{
    if (n > 100)
        n %= 100;
    if (n > 20)
        n %= 10;
    if (n == 1) {
        return f0;
    } else if (n == 4) {
        return f1;
    } else {
        return f2;
    }
}

string FormatUtils::format(long n, string *formats, bool extra)
{
    if (n > 100)
        n %= 100;
    if (n > 20)
        n %= 10;
    if (n == 1 && extra) {
        return formats[3];
    } else if (n == 1) {
        return formats[0];
    } else if (n < 5 && n > 1) {
        return formats[1];
    } else {
        return formats[2];
    }
}
