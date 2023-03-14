/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 18/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#include <iostream>
#include "Validate.h"

bool Validate::onlyDigits(string &s)
{
    return !s.empty() && s.at(0) == '-' ?
           all_of(s.begin() + 1, s.end(), ::isdigit) :
           all_of(s.begin(), s.end(), ::isdigit);
}
