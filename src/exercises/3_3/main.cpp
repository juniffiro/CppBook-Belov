#include <iostream>

/**
 * Page 46, ex.3.3
 * Припустимо, що значення дійсної змінної length відповідає
 * довжині будівлі в міліметрах. Написати вираз, що задає довжину будівлі в метрах.
 */

using namespace std;

int main() {
    int length = 1000;
    // cin >> length;
    cout << "Millimeters: " << length << endl;
    int meters = (length / 1000);
    cout << "Meters: " << meters << endl;

    system("pause");
    return 0;
}
