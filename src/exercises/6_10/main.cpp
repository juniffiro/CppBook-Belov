#include <iostream>
#include <cmath>
#include "Windows.h"

/**
 * Page 111, ex.6.10
 * Табулювання функції сторінками. Написати функцію, що
 * на відрізку [a; b] табулює з кроком h функцію sin (x), але після
 * виведення кожних m рядків виводиться запит, чи продовжувати
 * друкування. Робота завершується після відповіді "0".
 */

using namespace std;

void tabulateFunctions(double x, double y, double h)
{
    // [a ; b]
    cout.precision(4); cout.setf(iostream::fixed);
    cout << "Вітаємо в програмі обчислення функції sin(x) та cos(x)" << '\n' << '\n';
    cout << "Введені дані" << endl;

    cout << "x = " << x << "\t" << "y = " << y << endl;

    bool firstRun = false;
    while (x <= y) {
        if (!firstRun) {
            firstRun = true;
        } else {
            cout << "Введіть що-небудь для продовження операції, або натисніть \"0\" для виходу" << endl;
            string a;
            cin >> a;
            if (a == "0") break;
            //if (cin.get() == '0') {
            //  break;
            //}
            cout << "sin (" << x << ")" << "\t" << sin(x);
            cout << "\t | \t";
            cout << "cos (" << x << ")" << "\t" << cos(x) << endl;
        }
        x += h;
    }
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    tabulateFunctions(2.5, 7.5, 2.0);
    cout << endl;

    system("pause");
    return 0;
}
