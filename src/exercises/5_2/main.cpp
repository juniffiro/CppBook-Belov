#include <iostream>
#include <cmath>

/**
 * Page 90, ex.5.2
 * Написати функцію з цілим параметром n, яка повертає
 * значення (-1)^n
 */

using namespace std;

double getValue(double n)
{
    return pow(-1, n);
}

int main()
{
    int a;
    cin >> a;

    cout << getValue(a) << endl;

    system("pause");
    return 0;
}
