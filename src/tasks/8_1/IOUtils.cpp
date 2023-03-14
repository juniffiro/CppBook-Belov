/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 07/06/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#include "IOUtils.h"

string IOUtils::newInputS()
{
    string s;
    cin >> s;
    if (cin.fail()) {
        closeInput();
        throw runtime_error( "Fail");
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
    string s1 = newInputS();
    if (!Validate::onlyDigits(s1)) {
        throw std::invalid_argument("Only digits supports");
    }
    return Digits::parseFromStr(s1);
}

void IOUtils::newInput(string s, int &hours, int &minutes)
{
    cout << s << endl;
    cout << "Введіть години: " << endl;
    hours = newInputParse();
    cout << "Введіть хвилини: " << endl;
    minutes = newInputParse();
}

int IOUtils::newInputInt(string s, int &hours, int &minutes)
{
    cout << s << endl;
    cout << "Введіть години: " << endl;
    hours = newInputParse();
    cout << "Введіть хвилини: " << endl;
    minutes = newInputParse();
    return MathUtils::toMinutes(hours) + minutes;
}

int IOUtils::newInputIntWithFilter(string s, int &hours, int &minutes)
{
    cout << s << endl;
    cout << "Введіть години: " << endl;
    hours = newInputParse();
    if (hours > 24) {
        cout << "В одній добі 24 години, виставлено 24 години" << endl;
        hours = 24;
    }
    cout << "Введіть хвилини: " << endl;
    minutes = newInputParse();
    if (minutes > 60) {
        cout << "Максимально 60 хв" << endl;
        minutes = 60;
    }
    return MathUtils::toMinutes(hours) + minutes;
}
