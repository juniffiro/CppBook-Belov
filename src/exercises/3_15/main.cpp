#include <iostream>

/**
 * Page 51, ex.3.15
 * Написати послідовні інструкції присвоювання:
 * а) змінній d значення математичного виразу b^2 - 4ac, а x1 та
 * x2 – виразів (-b - sqrt(d)) / 2a та (-b + sqrt(d)) / 2a
 * б) змінній p значення математичного виразу (a+b+c)/2, а
 * змінній s – виразу sqrt(p(p-a)(p-b)(p-c))
 */

using namespace std;

int main()
{
    cout << "Enter a, b, c" << endl;
    double a,
            b,
            c;
    cin >> a; cin >> b; cin >> c;
    cout << "Entered: " << "a = " << a << ", b = " << b << ", c = " << c << endl;

    double d = (b * b) - (4 * a * c);
    cout << "Discriminant: " << d << endl;
    if (d > 0)
    {
        double x1 = (-b - sqrt(d)) / 2 * a;
        double x2 = (-b + sqrt(d)) / 2 * a;
        cout << "x1: " << x1 << " | " << "x2: " << x2 << endl;
    } else if (d == 0)
    {
        double x1 = (-b / 2 * a);
        cout << "x1: " << x1 << endl;
    } else
    {
        cout << "No roots." << endl;;
    }

    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "p: " << p << endl;
    cout << "s: " << s << endl;

    system("pause");
    return 0;
}
