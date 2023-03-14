#include <iostream>
#include <string>
#include "Charsets.h"
#include "IOUtils.h"

/**
* Page 65, task 3.1
*
* Написати програму, що запитує в користувача два дійсних
* числа, а потім виводить їх суму й різницю.
*
* Також була додана певна обробка вхідних даних.
*/

using namespace std;

int main()
{
    Charsets::setUTF8();

    try {
        cout << "Введіть перше число: " << endl;
        int a = IOUtils::newInputParse();
        cout << "Введіть друге число: " << endl;
        int b = IOUtils::newInputParse();
        cout << "Сума: " << (a + b) << endl;
        cout << "Різниця: " << (a - b) << endl;
    } catch (exception &e) {
        cerr << e.what();
    }

    cout << endl;

    system("pause");
    return 0;
}
