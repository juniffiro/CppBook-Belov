#include <iostream>

/**
 * Page 90, ex.5.4
 * Написати функцію, що за значеннями дійсних змінних x та y
 * обчислює значення z за формулою
 * z = x + 2, якщо 0 < x <= 3
 * z = x - y, якщо x <= 0
 * z = x + y, якщо x > 3
 */

using namespace std;

double a(double x, double y)
{
    if (0 < x && x <= 3) return x + 2;
    else if (x <= 0) return x - y;
    else if (x > 3) return x + y;

    return 0.0;
}

int main()
{
    cout << a(2, 6);
    cout << endl;

    system("pause");
    return 0;
}
