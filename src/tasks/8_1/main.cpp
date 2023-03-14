/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 07/06/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */

#include <Windows.h>
#include "ControlPoint.h"

using namespace std;

/*
 * 1. Вводимо час прибуття авто
 * Час прибуття у форматі
 * Години
 * Хвилини
 *
 * 2. Вводимо час перевірки авто
 * Час перевірки авто у форматі
 * Години
 * Хвилини
 *
 * 3. Конвертуємо час прибуття авто
 */

/*
 * Змінні
 *
 * timeArrivHours (data type int) - час прибуття авто
 * timeArrivMinutes (data type int) - час прибуття авто
 * timeCheck (data type int) - час перевірки авто
 * timeChecked (data type int) - час відправки авто
 */

void setCharsetUTF8()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
}

int main()
{
    setCharsetUTF8();

    ControlPoint cp;
    while (true)
    {
        cp.handleCar();
    }
}



