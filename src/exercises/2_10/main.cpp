#include <iostream>
#include <string>
#include <cmath>

/**
 * Page 36, ex.2.10
 * Написати означення змінних, що зображують:
 * а) день, місяць і рік народження;
 * б) точку площини;
 * в) клітинку шахового поля;
 * г) дріб;
 * д) квадратне рівняння;
 * е) прямокутник на площині.
 */

using namespace std;

void ex1()
{
    int day = 4;
    string month = "June";
    int year = 2003;
    cout << day << "/" << month << "/" << year << endl;
}

void ex2()
{
    double point = 3.5; // точка площини
    cout << point << endl;
}

void ex3()
{
    int cell = 5; // клітинка шахового поля
    cout << cell << endl;
}

void ex4()
{
    double fraction = 1. / 2; // дріб
    cout << fraction << endl;
}

enum Discriminate
{
    D0,
    D_PLUS,
    D_MINUS,
    D_NONE
};

double findX(Discriminate discriminate, double a, double b, double c, double d)
{
    // Find x
    // x = -b +- sqrt(D) / 2a
    switch (discriminate)
    {
        // При нульовому дискримінанті
        case Discriminate::D0:
            return (-b) / (2 * a);
            // Якщо дискримінант більше 0
        case Discriminate::D_MINUS:
            return (-b - sqrt(d)) / (2 * a);
        case Discriminate::D_PLUS:
            return (-b + sqrt(d)) / (2 * a);
        case Discriminate::D_NONE:
            return 0.0;
    }
}

void ex5(double a, double b, double c)
{
    // ax^2 + bx + c = 0

    // Find discriminant
    // D = b^2 - 4ac
    double d = b * b - 4 * a * c;
    cout << "Discriminant: " << d << endl;
    if (d > 0)
    {
        double x0 = findX(D_MINUS, a, b, c, d);
        double x1 = findX(D_PLUS, a, b, c, d);
        cout << "x0: " << x0 << " | " << "x1: " << x1 << endl;
    } else if (d == 0)
    {
        double x0 = findX(D0, a, b, c, d);
        cout << "x0: " << x0 << endl;
    } else
    {
        cout << "The equation has no roots." << endl;
    }
}

// Приклад прямокутника
class Rectangle
{
    // ...
public:
    int sideCount = 4;

    int getSideCount() const
    {
        return sideCount;
    }
};

void ex6()
{
    Rectangle rectangle; // створення екземпляру класу Rectangle
    cout << rectangle.getSideCount() << endl;
}

int main()
{
    ex1();
    ex2();
    ex3();
    ex4();
    ex5(-5, 10, 240);
    ex6();

    system("pause");
    return 0;
}
