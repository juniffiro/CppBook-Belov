/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 18/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */

#include "Digits.h"

int Digits::parseFromStr(string &s)
{
    int a0 = -1;
    try {
        a0 = stoi(s);
    } catch (const std::invalid_argument &e) {
        cerr << e.what() << endl;
    }
    catch (const std::out_of_range &e) {
        throw invalid_argument(e.what());
    }
    return a0;
}
