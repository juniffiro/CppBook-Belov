#include <iostream>
#include <string>
#include "Windows.h"

/**
 * Page 85, ex.4.28
 * Написати програму, що за номером місяця виводить пору року.
 */

using namespace std;

string getSeason(int n)
{
    switch (n)
    {
        case 12:
        case 1:
        case 2:
            return "Зима";
        case 3:
        case 4:
        case 5:
            return "Весна";
        case 6:
        case 7:
        case 8:
            return "Літо";
        case 9:
        case 10:
        case 11:
            return "Осінь";
        default:
            throw invalid_argument("Неправильно обрано номер місяця!");
    }
}

string getMonth(int n) {
    switch (n)
    {
        case 1:
            return "Січень";
        case 2:
            return "Лютий";
        case 3:
            return "Березень";
        case 4:
            return "Квітень";
        case 5:
            return "Травень";
        case 6:
            return "Червень";
        case 7:
            return "Липень";
        case 8:
            return "Серпень";
        case 9:
            return "Вересень";
        case 10:
            return "Жовтень";
        case 11:
            return "Листопад";
        case 12:
            return "Грудень";
        default:
            throw invalid_argument("Unknown choose month");
    }
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    cout << getMonth(4) << endl;
    cout << getSeason(12);
    cout << endl;

    system("pause");
    return 0;
}
