
#include <iostream>
#include <iomanip>
using namespace std;

class SkiTrip
{

private:
    int dates[7];
    int inchesSnow[7];
    // We want the user to enter a name of the month (July for ex) and a start date in that month (like 14) and then a seven day period end date(which I might just make it startDate + 6) and be able to then enter the day and number of inches for each of the seven days, this means:
    // that the name of the month they set is just for display *
    // the start and end dates shouldn't really affect the objects because the dates should all be real dates, I mean I suppose I could make an array of days of the month so that they choose from it or something so you can't have like Sept 31 but that seems like a lot
    //

public:
    SkiTrip()
    {
        for (int i = 0; i < 7; i++)
        {
            dates[i] = 0;
            inchesSnow[i] = 0;
        }
    }

    void setSnowfall()
    {
        for (int i = 0; i < 7; i++)
        {
            cout << "Enter date for day" << (i + 1) << endl;
            cin >> dates[i];

            cout << "Enter inches of snow for day" << (i + 1) << endl;
            cin >> inchesSnow[i];
        }
    }

    void displaySnowfall()
    {
        for (int i = 0; i < 7; i++)
        {
            cout << "Dates: " << dates[i] << "Inches: " << inchesSnow[i] << endl;
        }
    }
};

int main()
{
    const int SIZE = 12;
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int dates[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int endDate;
    int startDate;
    string snowMonth;
    int monthIndex = -1;
    SkiTrip trip;

    while (monthIndex == -1)
    {

        cout << "Enter the name of the month for the snow fall period ";
        cin >> snowMonth;

        for (int i = 0; i < SIZE; i++)
        {
            if (snowMonth == months[i])
            {
                monthIndex = i + 1;
                // this now stores the index from the months array in monthIndex for the number of the month (ex: July (7))
                // dates[monthIndex] is the number of days in that month
                break;
            }
        }
        if (monthIndex == -1)
        {
            cout << "Invalid month! (Check your spelling, no abbreviations)";
        }
    }

    cout << "Enter the start date of the week ";
    cin >> startDate;

    while (startDate <= 0 || startDate > dates[monthIndex])
    {
        cout << "Invalid date! Enter start date ";
        cin >> startDate;
    }

    cout << "Enter the end date of the week of snowfall (add 6 days) ";
    cin >> endDate;

    while (endDate <= 0)
    {
        cout << "Invalid end date! Enter valid end date. ";
        cin >> endDate;
    }
    trip.setSnowfall();

    cout << "Snow Report " << snowMonth << " " << startDate << " - " << endDate << endl;
    trip.displaySnowfall();

    return 0;
}
