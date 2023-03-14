/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 18/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#ifndef LAB2_VALIDATE_H
#define LAB2_VALIDATE_H

#include "Windows.h"
#include <string>
#include <cctype>
#include <algorithm> // for std::all_of
#include <regex>

using namespace std;

class Validate {
public:
    static bool onlyDigits(string &s);
    template<typename Base, typename T>
    static inline bool instanceof(const T *ptr);
};


#endif //LAB2_VALIDATE_H
