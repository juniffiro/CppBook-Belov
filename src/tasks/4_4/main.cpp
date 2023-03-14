#include <iostream>
#include "Windows.h"
#include "FormatUtils.h"

/**
 * Page 85, task 4.4
 *
 * Написати програму, яка до заданого цілого числа, що визначає вік людини, дописує слово
 * "рік", "роки", "років" відповідно до правил української граматики.
 * Наприклад, 21 рік, 34 роки, 14 років.
 */

using namespace std;

string arr[3] =
{
        "рік",
        "роки",
        "років"
};

string prefix(long age)
{
    return FormatUtils::format(age, arr, false);
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a0 = 21;
    int a1 = 34;
    int a2 = 14;

    cout << a0 << " " << prefix(a0) << endl;
    cout << a1 << " " << prefix(a1) << endl;
    cout << a2 << " " << prefix(a2);
    cout << endl;

    system("pause");
    return 0;
}
