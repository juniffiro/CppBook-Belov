#include <iostream>

using namespace std;

/**
 * Page 25, ex.2.1
 * З'ясуйте, що буде виведено за нижченаведеними
 * програмами. Поясніть різницю між ними.
 */

/**
 * Result : MicrosoftVisualStudio
 */
void example1()
{
    cout << "Microsoft";
    cout << "Visual";
    cout << "Studio";
    cout << endl;
}

/**
 * Result : Microsoft Visual Studio
 */
void example2()
{
    cout << "Microsoft ";
    cout << "Visual ";
    cout << "Studio";
    cout << endl;
}

/**
 * Result :
 *
 * Microsoft
 * Visual
 * Studio
 */
void example3()
{
    cout << "Microsoft";
    cout << endl;
    cout << "Visual";
    cout << endl;
    cout << "Studio";
    cout << endl;
}

int main()
{
    example1();
    example2();
    example3();

    /*
    * Виконання програми призупиняється й на екрані
    з'являється повідомлення, що треба натиснути будь-яку клавішу
    */
    system("pause");
    return 0;
}
