#include <iostream>
#include "Windows.h"

/**
 * Page 85, task 4.2
 *
 * Написати програму, що за трьома дійсними
 * числами – довжинами сторін трикутника – визначає,
 * чи є він гострокутним, прямокутним або тупокутним.
 */

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int a = 5;
    int b = 5;
    int c = 7;

    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;

    if ((a >= b + c) || (b >= a + c) || (c >= a + b)) {
        cout << "Це не трикутник!" << endl
             << "Помилка, сума довжин кожних двох сторін має бути більшою за довжину третьої сторони."
             << endl;
        // a^2 + b^2 = c^2
    } else if ((a2 + b2) == c2) {
        cout << "Це прямокутник трикутник" << endl;
        // c^2 < a^2 + b^2
    } else if (c2 < (a2 + b2)) {
        cout << "Це гострокутний трикутник" << endl;
    } else {
        // c^2 > a^2 + b^2
        cout << "Це тупокутний трикутник";
    }
    return 0;
}
