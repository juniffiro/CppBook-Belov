#include <iostream>

/**
 * Page 140, ex.8.2
 * Напишіть функцію, що за кожного свого виклику повертає
 * наступне псевдовипадкове ціле число з проміжку [a; b].
 * Вказівка.
 * Перетворити число x, наприклад, з проміжку від 0 до
 * 100 на число від -5 до 4 можна за формулою
 * x%(4-(-5)+1)+(-5)
 */

using namespace std;

// [min, max]
int getRandomNumber(int min, int max)
{
    srand(time(NULL));
    int num = min + rand() % (max - min + 1);
    return num;
}

// from -5
// to 4
// x%(4-(-5)+1)+(-5)
int transform(int num, int from, int to)
{
    return num % (to - (from) + 1) + from;
}

int main()
{
    int num = getRandomNumber(0, 100);
    cout << num << " | " << transform(num, -5, 4);
    cout << endl;

    system("pause");
    return 0;
}
