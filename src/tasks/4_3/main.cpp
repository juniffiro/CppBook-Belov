#include <iostream>
#include <cmath>
#include "Windows.h"

/**
 * Page 85, task 4.3
 *
 * Написати програму, що для рівняння ax^2 + bx + c = 0 знаходить
 * дійсні розв'язки та їх кількість.
 */

using namespace std;

void ax(double a, double b, double c)
{
    // ax^2 + bx + c = 0
    // Find discriminant
    // D = b^2 - 4ac
    if (a == 0)
    {
        throw logic_error("На нуль ділити не можна!");
    }

    double d = b * b - 4 * a * c;
    cout << "Дискримінант: " << d << endl;

    if (d > 0)
    {
        cout << "Дискримінант більший за нуль, тому рівняння має 2 корені." << endl;
        double x1 = (-b - sqrt(d)) / (2 * a);
        double x2 = (-b + sqrt(d)) / (2 * a);
        cout << "x1: " << x1 << " | " << "x2: " << x2 << endl;
    } else if (d == 0)
    {
        cout << "Дискримінант дорівнює нулю, тому рівняння має 1 корінь." << endl;
        double x1 = (-b) / (2 * a);
        cout << "x0: " << x1 << endl;
    } else if (d < 0)
    {
        cout << "Дискримінант менший за нуль, тому рівняння не має коренів." << endl;
    }
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // ax^2 + bx^2 + c = 0
    double a = 1;
    double b = 8;
    double c = 12;

    try {
        ax(a, b, c);
    } catch (exception &e) {
        cerr << e.what();
    }

    system("pause");
    return 0;
}
