#include <iostream>
#include <string>

/**
 * Page 32, ex.2.5
 * Поясніть різницю між значеннями "a" та 'a'
 */

using namespace std;

int main()
{
    // "a" - строка
    // 'a' - символ
   // string str = "a";
   // char c = 'a';
    //cout << str << c;
    cout << typeid("a").name() << endl;
    cout << typeid('a').name() << endl;

    system("pause");
    return 0;
}
