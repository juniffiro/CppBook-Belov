#include <iostream>

/**
 * Page 140, ex.8.1
 * Напишіть функцію, що за кожного свого виклику повертає
 * наступне псевдовипадкове дійсне число з відрізка [a; b].
 */

using namespace std;

// func [min, max]
int getRandomNumber(int min, int max)
{
    srand(time(NULL));
    int num = min + rand() % (max - min + 1);
    return num;
}

int main()
{
    cout << getRandomNumber(0, 100) << endl;

    system("pause");
    return 0;
}
