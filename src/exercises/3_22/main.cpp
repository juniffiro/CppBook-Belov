#include <iostream>
#include "Windows.h"

/**
 * Page 55, ex.3.22
 * Яке значення отримає змінна c за інструкцією char c='f'-
 * 'b'; ?
 */

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char c = 'f' - 'b'; // ╝
    cout << c << endl;

    system("pause");
    return 0;
}
