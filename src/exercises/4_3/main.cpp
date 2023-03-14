#include <iostream>
#include "Windows.h"

/**
 * Page 69, ex.4.3
 * Обчислити значення виразу:
 * а) !true == 0
 * б) !false || (false==1)
 * в) (2 > 1) && !true
 */

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    cout << "а) " << (!true == 0) << endl;
    cout << "б) " << (!false || false == 1) << endl;
    cout << "в) " << (2 > 1 && !true) << endl;

    system("pause");
    return 0;
}
