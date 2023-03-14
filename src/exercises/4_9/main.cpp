#include <iostream>
#include "Windows.h"

/**
 * Page 71, ex.4.9
 * Дійсні змінні a, b задають кінці відрізка дійсної прямої.
 * Написати вираз, який задає ознаку того,
 * що довжина цього відрізка менше або дорівнює 0,001.
 */

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    double a = 0.0005;
    double b = 0.0005;
    //double a = 0.000043;
    //double b = 0.000003;
    double c = a + b;
    if (c <= 0.001)
    {
        cout << "Результат: " << c << " | Менше або дорівнює 0,001" << endl;
    }

    system("pause");
    return 0;
}
