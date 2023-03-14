#include <iostream>
#include <string>

/**
 * Page 34, ex.2.9
 * Поясніть, у чому різниця між 12.151 та "12.151".
 */

using namespace std;

int main()
{
    // string str = "12.151";
    // double d = 12.151;
    cout << typeid(12.151).name() << " | " << typeid("12.151").name() << endl;

    system("pause");
    return 0;
}
