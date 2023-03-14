#include <iostream>
#include "Windows.h"

/**
 * Page 71, ex.4.8
 * Написати умову того, що значення цілих
 * змінних a та b мають однакову парність.
 */

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a = 2;
    int b = 100;

    a % 2 == 0 && b % 2 == 0 ? cout << "Числа парні" : cout << "Числа непарні";
    cout << endl;

    system("pause");
    return 0;
}
