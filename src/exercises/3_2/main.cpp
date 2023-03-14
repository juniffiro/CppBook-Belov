#include <iostream>

/**
 * Page 46, ex.3.2
 * Що буде виведено на екран за такими інструкціями?
 */

using namespace std;

int main()
{
    cout << 7/3 << ' ' << 1/6 << endl;
    cout << 7./3. << ' ' << 1./6. << endl;
    /**
     * Result
     * 2 0
     * 2.33333 0.166667
     */
    system("pause");
    return 0;
}
