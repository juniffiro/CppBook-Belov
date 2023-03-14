#include <iostream>
#include <cmath>

/**
 * Page 90, ex.5.3
 * Написати функцію з дійсним параметром x, яка повертає:
 * а) -1, 0, 1, відповідно, якщо x < 0, x = 0, x > 0
 * б) дробову частину x
 * в) результат округлення x до цілого.
 */

using namespace std;

int get(int x)
{
    if (x < 0) return -1;
    else if (x == 0) return 0;
    else return 1;
}

int *getDouble(double x, int precision)
{
    int whole = (int) x;
    int fractional = (int) (( x - floor(x)) * pow(10, precision));
    int d[2] = {
        whole, fractional
    };
    return d;
}

int floorX(double x)
{
    return floor(x);
}

int main()
{
    cout << get(5) << endl;
    cout << getDouble(121.53454, 5)[1] << endl; // Part 1 (121)
    cout << getDouble(121.53454, 5)[1] << endl; // Part 2 (53454)
    cout << floorX(7.4); // 7
    cout << endl;

    system("pause");
    return 0;
}
