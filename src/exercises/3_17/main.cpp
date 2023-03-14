#include <iostream>

/**
 * Page 52, ex.3.17
 * Записати кілька варіантів виразу, що подвоює значення
 * цілої змінної.
 */

using namespace std;

int main()
{
    int a = 3;
    cout << "Start value: " << a << endl;
    a += a; // Подвоює 2
    cout << "After operation: " << a << endl;

    int b = 5;
    cout << "Start value: " << b << endl;
    b = b + b;
    cout << "After operation: " << b << endl;

    system("pause");
    return 0;
}
