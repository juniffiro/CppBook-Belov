#include <iostream>
#include "Charsets.h"
#include "Point.h"

/**
* Page 65, task 3.2
*
* Математичний вираз
* ((x1 - x2)^2 + (y1 - y2)^2)^1/2 задає обчислення відстані між
* точками площини з координатами (x1, y1) та (x2, y2).
* Написати програму, що запитує в користувача координати двох
* точок дійсної площини, а потім виводить задані
* точки й відстань між ними.
*/

using namespace std;

int main()
{
    Charsets::setUTF8();

    // ((x1 - x2)^2 + (y1 - y2)^2)^1/2
    Point point1 = Point(3.7, 3.5);
    Point point2 = Point(3.3, 3.6);

    cout << "x1: " << point1.getX() << " | y1: " << point1.getY() << endl;
    cout << "x2: " << point2.getX() << " | y2: " << point2.getY() << endl;

    cout << point1.calculate(point2) << endl;

    system("pause");
    return 0;
}
