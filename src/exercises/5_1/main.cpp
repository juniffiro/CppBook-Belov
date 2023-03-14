#include <iostream>

/**
 * Page 90, ex.5.1
 * Написати функцію, що повертає максимальне зі значень
 * двох її дійсних параметрів.
 */

using namespace std;

int getMax(int a, int b)
{
    int max = -1;
    a > b ? max = a : max = b;
    return max;
}

int main()
{
    int a;
    int b;
    cin >> a; cin >> b;
    cout << getMax(a, b) << endl;

    system("pause");
    return 0;
}
