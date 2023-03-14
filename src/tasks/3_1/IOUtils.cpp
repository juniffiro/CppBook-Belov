/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 18/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#include "IOUtils.h"
#include "Digits.h"
#include "Validate.h"

string IOUtils::newInput()
{
    string s;
    cin >> s;
    if (cin.fail())
    {
        closeInput();
        throw std::exception( "Fail");
    }
    return s;
}

void IOUtils::closeInput()
{
    cin.clear();
    cin.ignore(32767, '\n');
}

int IOUtils::newInputParse()
{
    string s = newInput();
    if (!Validate::onlyDigits(s))
    {
        throw std::invalid_argument("Only digits supports");
    }
    return Digits::parseFromStr(s);
}
