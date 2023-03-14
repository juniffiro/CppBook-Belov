/**
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 * | ( Created ) ( by ) ( @juniffiro ) |
 * | 07/06/2022                        |
 * +-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+
 */


#include "ControlPoint.h"
#include "IOUtils.h"

void ControlPoint::updateStartTime(int newTime)
{
    ControlPoint::startTime = newTime;
}

void ControlPoint::handleCar()
{
    int arrivHours,
            arrivMinutes,
            checkedHours,
            checkedMinutes;
    try {
        int timeArriv = IOUtils::newInputIntWithFilter(
                "Введіть час прибуття авто на КПП",
                arrivHours,
                arrivMinutes);
        if (startTime >= timeArriv)
        {
            cout << "Час вже минув" << endl;
            return;
        }
        int t = IOUtils::newInputInt("Введіть час перевірки авто (скільки часу потрібно щоб перевірити авто)",
                                     checkedHours,
                                     checkedMinutes);
        if (t == 0)
        {
            cout << "Вихід" << endl;
            return;
        }

        cout << "Авто прибуло об " << arrivHours << "год. " << arrivMinutes << "хв." << endl;
        cout << "На перевірку авто пішло: " << checkedHours << "год. " << checkedMinutes
             << "хв." << endl;

        int time = timeArriv + t;

        updateStartTime(time);

        checkedHours = MathUtils::toHours(time);
        int days = MathUtils::toDays(checkedHours);

        if (checkedHours > 24)
        {
            startTime = 0;
        }
        while (checkedHours >= 24)
        {
            int timeLeft = checkedHours - 24;
            checkedHours = timeLeft;
            checkedMinutes = checkedMinutes + MathUtils::toMinutes(timeLeft);
        }

        checkedMinutes = time % 60;
        info(days, checkedHours, checkedMinutes);

    } catch (exception &e) {
        cerr << e.what() << endl;
    }
}

void ControlPoint::info(int days, int hours, int minutes)
{
    if (days == 1) {
        cout << "Авто відправиться об " << hours << "." << minutes <<
             " завтра" << endl;
    } else if (days >= 1) {
        cout << "Авто відправиться об " << hours << "." << minutes <<
             " через " << days << " днів" << endl;
    } else {
        cout << "Авто відправиться об " << hours << "." << minutes << endl;
    }
}
