#include <iostream>

/**
 * Page 71, ex.4.6
 * Написати умову того, що значенням змінної a символьного
 * типу є:
 * а) цифра 1;
 * б) літера h.
 */

using namespace std;

int main()
{
    char a = 'c';

    if (a == 1)
    {
        // Logic...
        cout << "char a equal 'c'" << endl;
    } else
    {
        cout << "char a is not equal 'c'" << endl;
    }
    if (a == 'h')
    {
        cout << "char a equal 'h'" << endl;
    } else
    {
        cout << "char a is not equal 'h'" << endl;
    }

    system("pause");
    return 0;
}
