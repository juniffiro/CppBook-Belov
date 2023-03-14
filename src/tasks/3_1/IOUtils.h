/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 18/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#ifndef LAB2_IOUTILS_H
#define LAB2_IOUTILS_H

#include <iostream>
#include <string>
#include "Windows.h"

using namespace std;

class IOUtils {
public:
    static string newInput();
    static int newInputParse();
    static void closeInput();
};


#endif //LAB2_IOUTILS_H
