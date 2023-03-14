#include <iostream>
#include <cmath>

/**
 * Page 51, ex.3.12
 * У математиці є тотожність log(x) y = ln y/ln x. Написати
 * вираз мови С++, відповідний до математичного виразу
 * log(x) y
 */

using namespace std;

int main()
{
    // logx y = ln y/ln x
    double x = log(2);
    double y = log(8);
    double res = y / x;
    cout << res << endl;

    system("pause");
    return 0;
}
