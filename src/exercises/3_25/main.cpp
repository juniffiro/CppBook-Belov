#include <iostream>

/**
 * Page 58, ex.3.25
 * Написати програму, що виводить значення sqrt(2) з вісьмома
 * знаками після десяткової крапки.
 */

using namespace std;

int main()
{
    double a = sqrt(2);
    cout << a << endl;
    cout.precision(8); cout.setf(ios::fixed);
    cout << a << endl;

    system("pause");
    return 0;
}
