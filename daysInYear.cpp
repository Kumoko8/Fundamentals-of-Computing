#include <iostream>
#include <string>
using namespace std;


// The class should have an integer member variable to represent the day, and should have static member variables of type string to assist in the translation from the integer format to the month-day format.
//  #06	Test your class by entering various integers representing days and printing out their representation in the month-day format.
//  #07	Modify the DayOfYear class, written above to add a constructor that takes two parameters: a string representing month and an integer (0-31) for the day of the month.
//  #08	The constructor should then initialize the integer member of the class to represent the day specified by the month and day of month parameters.
//  #09	The constructor should terminate the program with an appropriate error message if the number entered for a day is outside the range of days for the month given.
//  #10	Add the following overloaded operators:
//  #11	++prefix and postfix increment operators. These operators should modify the DayOfYear object so that it represents the next day. If the day is already the end of the year, the new value of the object will represent the first day of the year.
//  #12	--prefix and postfix decrement operators. These operators should modify the DayOfYear object so that it represents the previous day. If the day is already the first day of the year, the new value of the object will represent the last day of the year.

class DayOfYear {
private:
    int dayOfYear;
    static string monthNames[12];
    static int daysInMonth[12];

public:
    // Constructor from day of year
    DayOfYear(int day) {
        if (day < 1 || day > 365) {
            cerr << "Error: Day must be between 1 and 365." << endl;
            exit(1);
        }
        dayOfYear = day;
    }

    // Constructor from month name and day of month
    DayOfYear(string month, int day) {
        int total = 0;
        bool found = false;

        for (int i = 0; i < 12; i++) {
            if (month == monthNames[i]) {
                if (day < 1 || day > daysInMonth[i]) {
                    cerr << "Error: Invalid day for " << month << endl;
                    exit(1);
                }
                dayOfYear = total + day;
                found = true;
                break;
            }
            total += daysInMonth[i];
        }

        if (!found) {
            cerr << "Error: Invalid month name." << endl;
            exit(1);
        }
    }

    void print() const {
        int total = 0;
        for (int i = 0; i < 12; i++) {
            if (dayOfYear <= total + daysInMonth[i]) {
                int day = dayOfYear - total;
                cout << monthNames[i] << " " << day << endl;
                return;
            }
            total += daysInMonth[i];
        }
    }

    // Prefix ++
    DayOfYear& operator++() {
        dayOfYear = (dayOfYear == 365) ? 1 : dayOfYear + 1;
        return *this;
    }

    // Postfix ++
    DayOfYear operator++(int) {
        DayOfYear temp = *this;
        ++(*this);
        return temp;
    }

    // Prefix --
    DayOfYear& operator--() {
        dayOfYear = (dayOfYear == 1) ? 365 : dayOfYear - 1;
        return *this;
    }

    // Postfix --
    DayOfYear operator--(int) {
        DayOfYear temp = *this;
        --(*this);
        return temp;
    }
};

// Static member definitions
string DayOfYear::monthNames[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int DayOfYear::daysInMonth[12] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31
};

// Example usage
void testDayOfYear() {
    DayOfYear day1(200);      // July 19
    day1.print();

    DayOfYear day2("March", 1); // March 1
    day2.print();

    ++day2;
    day2.print();             // March 2

    --day1;
    day1.print();             // July 18

    DayOfYear end(365);
    ++end;
    end.print();              // January 1

    DayOfYear start(1);
    --start;
    start.print();            // December 31
}

int main() {
    testDayOfYear();
    return 0;
}
