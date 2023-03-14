#include <iostream>

/**
 * Page 69, ex.4.4
 * Обчислити значення виразу 6 < 3 && 7 < 5 || 3 == 5.
 */

using namespace std;

int main()
{
    cout << (6 < 3 && 7 < 5 || 3 == 5) << endl; // Result: 0 (false)

    system("pause");
    return 0;
}
