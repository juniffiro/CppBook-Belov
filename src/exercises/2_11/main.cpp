#include <iostream>

/**
 * Page 36, ex.2.11
 * Пояснити різницю між:
 * а) a та 'a';
 * б) a та "a".
 */

using namespace std;

int main() {
    double a = 2.5; // змінна (type double)
    // "a" - строка
    // 'a' - символ
    cout << typeid(a).name() << " | " << typeid('a').name() << " | " << typeid("a").name() << endl;

    system("pause");
    return 0;
}
