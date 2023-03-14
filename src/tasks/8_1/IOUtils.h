/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 07/06/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#ifndef TEST81_IOUTILS_H
#define TEST81_IOUTILS_H

#include <iostream>
#include "MathUtils.h"
#include "Validate.h"
#include "Digits.h"
#include <string>

class IOUtils {
public:

    static string newInputS();

    static void closeInput();

    static int newInputParse();

    void newInput(string s, int &hours, int &minutes);

    static int newInputIntWithFilter(string s, int &hours, int &minutes);

    static int newInputInt(string s, int &hours, int &minutes);
};


#endif //TEST81_IOUTILS_H
