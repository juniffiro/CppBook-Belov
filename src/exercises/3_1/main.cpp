#include <iostream>

/**
 * Page 46, ex.3.1
 * Що буде виведено на екран за такими інструкціями?
 */

using namespace std;

int main()
{
    cout << 9/5 << ' ' << -9/5 << ' ' << 9/-5 << ' ' << -9/-5 << endl;
    cout << 9%5 << ' ' << -9%5 << ' ' << 9%-5 << ' ' << -9%-5 << endl;
    cout << 9./5. << endl;
    /**
     * Result
     * 1 -1 -1 1
     * 4 -4 4 -4
     * 1.8
     */
    system("pause");
    return 0;
}
