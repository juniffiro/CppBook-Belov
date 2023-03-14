#include <iostream>
#include <cmath>

/**
 * Page 58, ex.3.26
 * Написати програму, що виводить значення (2,5)^1,6 із
 * чотирма знаками після десяткової крапки.
 */

using namespace std;

int main()
{
    double a = pow(2.5, 1.6);
    cout << a << endl;
    cout.precision(4); cout.setf(ios::fixed);
    cout << a << endl;

    system("pause");
    return 0;
}
