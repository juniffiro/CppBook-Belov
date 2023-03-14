#include <iostream>
#include "Windows.h"

/**
 * Page 71, ex.4.12
 * Написати умову того, що значення дійсних змінних x, y, z
 * попарно різні.
 */

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int x = 2;
    int y = 4;
    int z = 5;

    x != y && y != z ? cout << "Попарно різні" : cout << "OK";
    cout << endl;

    system("pause");
    return 0;
}
