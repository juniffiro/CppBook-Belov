#include <iostream>

/**
* Page 31, ex.2.2
* Що буде виведено за програмою?
*/

using namespace std;

int main()
{
    cout << '1'; cout << '\n'; // '1' і перехід на нову строку
    cout << 'Y'; cout << 'e';
    cout << 's'; cout << endl; // 'Yes' і перехід на нову строку

    system("pause");
    return 0;
}