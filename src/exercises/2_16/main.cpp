#include <iostream>

/**
 * Page 43, ex.2.16
 * Чи може змінна char c1 під час виконання
 * cin >> c1 отримати значення ' ' (пробіл)?
 */

using namespace std;

int main() {
    char c1;
    cin >> c1;

    // Пробіл \u0020

    cout << c1; // Result '

    system("pause");
    return 0;
}
