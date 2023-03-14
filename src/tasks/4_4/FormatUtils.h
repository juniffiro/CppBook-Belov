/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 21/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#ifndef TASK_4_4_FORMATUTILS_H
#define TASK_4_4_FORMATUTILS_H

#include <string>

using namespace std;

class FormatUtils {
public:
    static string format(long n, string f0, string f1, string f2);

    static string format(long n, string formats[], bool extra);
};


#endif //TASK_4_4_FORMATUTILS_H
