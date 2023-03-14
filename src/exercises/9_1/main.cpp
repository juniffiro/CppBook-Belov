#include <iostream>
#include <cmath>

/**
 * Page 154, ex.9.1
 * Модифікувати проект прикладу: додати до файлів
 * points.cpp та points.h функцію dist обчислення відстані
 * між двома точками (див. п. 5.2.1, с. 88) і переробити головну
 * функцію так, щоб програма запитувала в користувача координати
 * двох точок площини й виводила відстань між ними.
 */

using namespace std;

// Вирішив реалізувати тут
double dist(double x1, double y1, double x2, double y2)
{
    double a = pow((x2 - x1), 2);
    double b = pow((y2 - y1), 2);
    return sqrt(a + b);
}

int main()
{
    double x1, y1, x2, y2;
    cout << "Enter x(4 points) and y(4 points) coordinates: ";
    // Введення конкретних координат
    cin >> x1 >> y1;
    cout << "Point 1 : (" << x1 << ";" << y1 << ")";
    cout << endl;

    cin >> x2 >> y2;
    cout << "Point 2 : (" << x2 << ";" << y2 << ")";
    cout << endl;

    cout << "Distance = " << dist(x1, y1, x2, y2) << endl;

    system("pause");
    return 0;
}