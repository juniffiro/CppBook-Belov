/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 18/05/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#include "Charsets.h"
#include "Windows.h"

// Кодування в форматі UTF-8
void Charsets::setUTF8()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
}
