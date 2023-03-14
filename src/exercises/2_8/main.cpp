#include <iostream>

/**
 * Page 34, ex.2.8
 * Поясніть, у чому різниця між 314. та 314
 */

using namespace std;

int main()
{
    // double c = 314.;
    // int i = 314;
    cout << typeid(314.).name() << " | " << typeid(314).name() << endl;

    system("pause");
    return 0;
}
