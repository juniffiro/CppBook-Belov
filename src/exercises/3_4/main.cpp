#include <iostream>

/**
 * Page 46, ex.3.4
 * Нехай значення цілої змінної sizeOfFile задає розмір файлу в байтах.
 * Написати вираз, значенням якого є розмір файлу в кілобайтах.
 */

using namespace std;

int main() {
    int sizeOfFile = 460000;
    cout << "File size bytes: " << sizeOfFile << endl;
    int kBytes = sizeOfFile / 1000;
    cout << "File size kilobytes: " << kBytes << endl;

    system("pause");
    return 0;
}
