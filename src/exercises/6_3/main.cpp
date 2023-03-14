#include <iostream>
#include <string>

/**
 * Page 110, ex.6.3
 * Написати функцію, що за цілим числом визначає:
 * а) кількість цифр його десяткового запису;
 * б) чи зустрічається в його десятковому запису задана цифра;
 * в) кількість входжень заданої цифри в його десятковий запис;
 * г) старшу цифру його десяткового запису;
 * д) мінімальну (максимальну) цифру його десяткового запису.
 */

using namespace std;

/**
* Метод визначає кількість цифр
* десяткового запису
*/
int digitsLength(int n)
{
    int a = 1;
    while ((n /= 10) != 0)
    {
        a++;
    }
    return a;
}

/**
* Чи зустрічається в десятковому
* запису числа задана цифра
*/
bool hasDigit(int num, int n)
{
    cout << "Find num " << n << endl;
    return to_string(num).find(to_string(n)) != string::npos;
}

/**
* Порахувати кількість потрібних чисел в записі
*/
int countDigit(int num, int n)
{
    int a = 0;
    while(num)
    {
        if(num % 10 == n)
            a++;
        num /= 10;
    }
    return a;
}

int minDigit(int n)
{
    int min = n % 10;
    n /= 10;
    while (n != 0)
    {
        if (min > n % 10)
            min = n % 10;
        n /= 10;
    }
    return min;
}


/**
* Знайти старшу цифру десяткового
* запису числа
*/
int maxDigit(int n)
{
    int max = n % 10;
    n /= 10;
    while (n != 0)
    {
        if (max < n % 10)
            max = n % 10;
        n /= 10;
    }
    return max;
}

int main()
{
    int a = 34405;
    cout << "Digits length: " << digitsLength(a) << endl;
    cout << hasDigit(a, 5) << endl;
    cout << "Count digit: " << countDigit(a, 4) << endl;
    cout << "Max number: " << maxDigit(a) << endl;
    cout << "Min number: " << minDigit(a) << endl;

    system("pause");
    return 0;
}
