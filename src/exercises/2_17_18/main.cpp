#include <iostream>

/**
 * Page 43, ex.2.17 & 2.18
 * Запустіть на виконання програму, наберіть
 * 100e777 і натисніть на Enter.
 *
 * Що зміниться у виконанні попередньої програми, якщо
 * замість інструкцій int i; double x; записати
 * int i=0; double x=0;?
 */

using namespace std;


void ex2_17()
{
    int i;
    double x;

    cout << "Enter one real:" << endl;
    cin >> x;
    cout << "Enter one integer:" << endl;
    cin >> i;
    cout << "Entered numbers: " << x << ", " << i << endl;
}

void ex2_18()
{
    // Compile error
    //
    //int i = 0, double x = 0;
    //
    // cout << "Enter one real:" << endl;
    //cin >> x;
    //cout << "Enter one integer:" << endl;
    //cin >> i;
    //cout << "Entered numbers: " << x << ", " << i << endl;
}

int main() {
    ex2_17();
    //ex2_18();

    system("pause");
    return 0;
}
