#include <iostream>

/**
 * Page 69, ex.4.5
 *  Що буде виведено на екран за інструкціями?
 *  int a = 3; bool b = (2 < 3) || (a = -1); cout << a << endl;
 */

using namespace std;

int main()
{
    int a = 3;
    bool b = (2 < 3) || (a = -1);
    cout << a << endl; // Result 3

    system("pause");
    return 0;
}
