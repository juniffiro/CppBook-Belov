#include <iostream>

/**
 * Page 52, ex.3.18
 * Записати кілька варіантів виразу, що збільшує значення
 * цілої змінної на 2.
 */

using namespace std;

int main()
{
    int a = 7;
    cout << "Start value: " << a << endl;
    a += 2; // Збільшує на 2
    cout << "After operation: " << a << endl;

    system("pause");
    return 0;
}
