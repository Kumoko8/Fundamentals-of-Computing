#include <iostream>
#include <string>

using namespace std;

// Write a class named DayOfYear that takes an integer representing a day of the year and translates it to a string consisting of the month followed by day of the month.
//   Examples: Day 2 => January 2, Day 32 => February 1, Day 200 => July 19.
class DayOfYear
{
    // The class should have an integer member variable to represent the day, and should have static member variables of type string to assist in the translation from the integer format to the month-day format.
private:
    /* data */
    int dayInput;
    static string monthNames[12];
    static int daysInMonth[12];

public:
    // The constructor for the class should take as a parameter an integer representing the day of the year, and the class should have a member function print() that prints the day in the month-day format like the example in the textbook.
    DayOfYear(int day)
    {
        dayInput = day;
    };

    //  #07	Modify the DayOfYear class, written above to add a constructor that takes two parameters: a string representing month and an integer (0-31) for the day of the month.
    //  #08	The constructor should then initialize the integer member of the class to represent the day specified by the month and day of month parameters.

    DayOfYear(string month, int day)
    {
        int total = 0;

        for (int i = 0; i < 12; i++)
        {
            if (month == monthNames[i])
            {
                //  #09	The constructor should terminate the program with an appropriate error message if the number entered for a day is outside the range of days for the month given.
                if (day < 1 || day > daysInMonth[i])
                {
                    cout << "Error day for " << month << " does not exist " << endl;
                    exit(1);
                }

                dayInput = total + day;
                break;
            }
            total += daysInMonth[i];
        }
    }
    void print() const
    {
        int total = 0;
        for (int i = 0; i < 12; i++)
        {
            if (dayInput <= total + daysInMonth[i])
            {
                int selectedDay = dayInput - total;
                cout << "Day " << dayInput << " is " << monthNames[i] << " " << selectedDay << endl;
                return;
            }
            total += daysInMonth[i];
        }
    }
    //  #11	++prefix and postfix increment operators. These operators should modify the DayOfYear object so that it represents the next day. If the day is already the end of the year, the new value of the object will represent the first day of the year.

    DayOfYear &operator++()
    {
        dayInput = (dayInput == 365) ? 1 : dayInput + 1;
        return *this;
    }
    DayOfYear operator++(int)
    {
        DayOfYear temp = *this;
        ++(*this);
        return temp;
    }
    //  #12	--prefix and postfix decrement operators. These operators should modify the DayOfYear object so that it represents the previous day. If the day is already the first day of the year, the new value of the object will represent the last day of the year.
    DayOfYear &operator--()
    {
        dayInput = (dayInput == 1) ? 365 : dayInput - 1;
        return *this;
    }

    DayOfYear operator--(int)
    {
        DayOfYear temp = *this;
        --(*this);
        return temp;
    }
};
string DayOfYear::monthNames[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};

int DayOfYear::daysInMonth[12] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31};
int main()
{
    int dayOfYear;
    string nextPreviousDay;
    char choice;

    cout << "This is a day of the year calculator. Enter a day of the year as a number out of 365 like Day 100 ";

    cin >> dayOfYear;

    while (dayOfYear < 1 || dayOfYear > 365)
    {
        cout << "Please enter a number between 1 and 365 ";
        cin >> dayOfYear;
    }

    DayOfYear d1(dayOfYear);
    d1.print();

    do
    {
        cout << "---------------------------- " << endl;
        cout << "Choose another option below " << endl;
        cout << "  [n] Move to the next day " << endl;
        cout << "  [p] Move to the previous day " << endl;
        cout << "  [q] Quit " << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        if (choice == 'n')
        {
            ++d1;
            d1.print(); // prefix increment
        }
        else if (choice == 'p')
        {
            --d1;
            d1.print(); // prefix decrement
        }
        else if (choice != 'q')
        {
            cout << "Invalid input. Try again. " << endl;
        }

    } while (choice != 'q');

    cout << "Program is complete. Until next time! " << endl;

    return 0;
}
