#include <iostream>
#include <ctime>

using namespace std;

bool isLeapYear(int year)
{
    if (year % 100 == 0)
        return (year % 400 == 0);
    else
        return (year % 4 == 0);
}

int getDaysInMonth(int month, int year)
{
    switch (month)
    {
        // Since these are the months with 31 days in them
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        // Since these are the months with 30 days
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        // February is the only month that changes days in a leap year so if it is a leap year and the function returns true we will need to return 29 days instead of 28
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return -1;
    }
}

int main()
{
    const int SIZE = 12;

    int month;
    int year;
    string monthName;
    string months[SIZE] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    
    

    while (true)
    {
        // with ctime, the current month is tm_mon +1 and the current year is tm_year + 1900

        time_t now = time(0);
        tm *ltm = localtime(&now);

        int currentMonth = 1 + ltm->tm_mon;
        int currentYear = 1900 + ltm->tm_year;
        // input: a number representing the month and a 4 digit year ex: 2(Feb) 2008
        //  output: the number of days in that year
        cout << "Enter the single digit month (1 -12) and year (xxxx) separated by a space. ";
        cin >> month >> year;

        for (int i = 0; i < SIZE; i++)
    {       if(currentMonth - 1 == i){
            monthName = months[i];
    }
        
    }

        if (month == 0 && year == 0)
        {
            cout << "The current month, " << monthName << " " << currentYear << " has " << getDaysInMonth(currentMonth, currentYear) << " days." << endl;
            break;
        }
       cout << getDaysInMonth(month, year) << " days" << endl;
    }
    return 0;
}
