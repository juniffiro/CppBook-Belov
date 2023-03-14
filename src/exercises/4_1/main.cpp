#include <iostream>

/**
 * Page 68, ex.4.1
 * У чому відмінність виразів a=3 та a==3?
 */

using namespace std;

int main() {
    int a = 1;
    // a = 3; // Прирівняння
    // a == 3; // Логічний вираз;
    cout << (a = 3) << " | " << (a == 3) << endl;
    // Result: 3 | 0
    // 3 - значення після прирівняння
    // 0 - type bool

    system("pause");
    return 0;
}
