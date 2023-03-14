#include <iostream>

/**
* Page 31, ex.2.3
* Написати програму, що друкує символи ', ", \.
*/

using namespace std;

int main()
{
    cout << '\u0027' << endl; //	'
    cout << '"' << endl;     //		"
    cout << '\u005C' << endl;   //		\

    system("pause");
    return 0;
}