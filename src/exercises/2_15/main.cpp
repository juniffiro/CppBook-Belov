#include <iostream>

/**
 * Page 43, ex.2.15
 * Нехай під час виконання програми користувач послідовно
 * натиснув на клавіші 5, Enter, 7, Space, 9, Enter.
 * Що він побачить на екрані?
 */

using namespace std;

int main()
{
    int i, j, k;
    cout << "Enter 2 integers:" << endl;
    cin >> i >> j;
    cout << "Enter an integer:"; cin >> k;
    cout << "Entered integers: " << i << ", " << j << ", " << k << endl;
    // Result: 5, 7, 9

    system("pause");
    return 0;
}
