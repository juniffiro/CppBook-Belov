#include <iostream>

/**
 * Page 51, ex.3.11
 * Написати вираз мови С++, відповідний до математичного
 * виразу
 * а) sqrt (a^2 + b^2)
 * б) (a + b)^1,7
 * в) (a^12 + b^12)^1/3
 * г) | sqrt(a) - sqrt(b) |
 */

using namespace std;

void ex1(int a, int b)
{
    // a) sqrt (a^2 + b^2)
    double result = sqrt(pow(a, 2) + pow(b, 2));
    cout << "sqrt (a^2 + b^2) = " << result << endl;
}

void ex2(int a, int b)
{
    // (a + b)^1,7
    double result = pow(a + b, 1.7);
    cout << "(a + b)^1,7 = " << result << endl;
}

void ex3(int a, int b)
{
    // (a^12 + b^12)^1/3
    double result = pow(pow(a, 12) + pow(b, 12), 1.3);
    cout << "(a^12 + b^12)^1/3 = " << result << endl;
}

void ex4(int a, int b)
{
    // | sqrt(a) - sqrt(b) |
    double result = abs(sqrt(a) - sqrt(b));
    cout << "| sqrt(a) - sqrt(b) | = " << result << endl;
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << "Entered: " << "a = " << a << "| b = " << b << endl;

    ex1(a, b);
    ex2(a, b);
    ex3(a, b);
    ex4(a, b);

    system("pause");
    return 0;
}
