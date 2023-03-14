#include <iostream>
#include "Windows.h"

/**
 * Page 71, ex.4.7
 * Написати умову того, що значення цілої змінної b ділиться
 * на 3 без остачі.
 */

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int b;
    cin >> b;

    if (b % 3 != 0) {
        cout << "Є остача" << endl;
    } else {
        cout << "Остачі немає" << endl;
    }

    system("pause");
    return 0;
}
