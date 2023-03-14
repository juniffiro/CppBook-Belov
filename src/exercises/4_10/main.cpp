#include <iostream>
#include "Windows.h"

/**
 * Page 71, ex.4.10
 * Написати умову того, що значенням змінної c символьного типу є:
 * а) велика латинська літера (від 'A' до 'Z');
 * б) шістнадцяткова цифра.
 */

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    //char c = 'B';
    char c;
    cin >> c;
    //int d = 0xF; // 15
    //c = c + 1;
    //cout << c << endl;
    c == 'A' || c == 'F' ? cout << "Умова виконана!" : cout << "Умова не виконана :(";
    cout << endl;
    system("pause");
    return 0;
}
