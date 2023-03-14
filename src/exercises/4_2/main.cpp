#include <iostream>
#include "Windows.h"

/**
 * Page 68, ex.4.2
 * Обчислити значення виразів
 * а) 1.5 < 7;
 * б) '3' < 'a';
 * в) 'Z' < 'a';
 * г) false < true;
 * д) false < -1?
 * Які неявні перетворення типів виконуються під час їх обчислення?
 */

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    cout << "а) " << (1.5 < 7) << endl;
    cout << "б) " << ('3' < 'a') << endl;
    cout << "в) " << ('Z' < 'a') << endl;
    cout << "г) " << (false < true) << endl;
    cout << "д) " << (false < -1) << endl;

    system("pause");
    return 0;
}
