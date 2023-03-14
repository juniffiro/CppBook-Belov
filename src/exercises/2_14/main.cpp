#include "Circle.h"
#include "Windows.h"

/**
 * Page 40, ex.2.14
 * Коло на площині можна задати його центром і радіусом.
 * Написати програму, в якій змінні, що зображують коло на
 * площині, оголошені та ініціалізовані для кола з центром у
 * точці (1,5; 2,3) і радіусом 3,5. Програма має вивести координати
 * центра кола та його радіус.
 */

int main()
{
    Circle circle = Circle(
            Point(1.5, 2.3), 3.5);
    circle.printInfo();

    system("pause");
    return 0;
}
