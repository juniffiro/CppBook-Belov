#include <iostream>
#include <cmath>

/**
 * Page 111, ex.6.9
 * Написати функцію, що на відрізку [a ; b] із кроком h табулює
 * обидві функції sin (x) і cos (x).
 */

using namespace std;

void tabulateFunctions(double x, double y, double h)
{
    // [a ; b]
    cout.precision(4); cout.setf(iostream::fixed);
    while (x <= y) {
        cout << "sin (" << x << ")" << "\t" << sin(x);
        cout << "\t | \t";
        cout << "cos (" << x << ")" << "\t" << cos(x) << endl;
        x += h;
    }
}

int main()
{
    tabulateFunctions(2.5, 7.5, 2.0);
    cout << endl;

    system("pause");
    return 0;
}
