// Taylor Golden
// Status: Complete
// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed.

#include <iostream>
using namespace std;

int main()
{
    // Fill in the code to define and initialize to 1 the variable month
    float total = 0, month = 1, rain;

    cout << "Enter the total rainfall for month " << month << endl;
    cout << "Enter -1 when you are finished" << endl;

    // Fill in the code to read in the value for rain
    cin >> rain;

    // Fill in the code to start a while loop that iterates
    // while rain does not equal -1
    while (rain != -1)
    {
        total = total + rain; // Fill in the code to update total by adding it to rain
        month++;              // Fill in the code to increment month by one

        cout << "Enter the total rainfall in inches for month " << month << endl;
        cout << "Enter -1 when you are finished" << endl;

        // Fill in the code to read in the value for rain
        cin >> rain;
    }

    if (month == 1)
        cout << "No data has been entered" << endl;

    else
        cout << "The total rainfall for the " << month - 1
             << " months is " << total << " inches." << endl;

    return 0;
}
//Run 1
// Enter the total rainfall for month 1
// Enter -1 when you are finished
// 5
// Enter the total rainfall in inches for month 2
// Enter -1 when you are finished
// 10
// Enter the total rainfall in inches for month 3
// Enter -1 when you are finished
// 15
// Enter the total rainfall in inches for month 4
// Enter -1 when you are finished
//-1
// The total rainfall for the 3 months is 30 inches.

//Run 2
// Enter the total rainfall for month 1
// Enter -1 when you are finished
// 11
// Enter the total rainfall in inches for month 2
// Enter -1 when you are finished
// 22
// Enter the total rainfall in inches for month 3
// Enter -1 when you are finished
// -1
// The total rainfall for the 2 months is 33 inches.

//Run 3
// Enter the total rainfall for month 1
// Enter -1 when you are finished
// 12
// Enter the total rainfall in inches for month 2
// Enter -1 when you are finished
// 5
// Enter the total rainfall in inches for month 3
// Enter -1 when you are finished
// 8
// Enter the total rainfall in inches for month 4
// Enter -1 when you are finished
// -1
// The total rainfall for the 3 months is 25 inches.

//Entering -1 First
// Enter the total rainfall for month 1
// Enter -1 when you are finished
// -1
// No data has been entered

//Entering only 0
// Enter the total rainfall for month 1
// Enter -1 when you are finished
// 0
// Enter the total rainfall in inches for month 2
// Enter -1 when you are finished
// 0
// Enter the total rainfall in inches for month 3
// Enter -1 when you are finished
// 0
// Enter the total rainfall in inches for month 4
// Enter -1 when you are finished
// -1
// The total rainfall for the 3 months is 0 inches.

//Invalid Values
//There aren't really any values that you can't enter, it allows you
//to put in both positive and negative values even though it wouldn't
//make sense for your data
// Enter the total rainfall for month 1
// Enter -1 when you are finished
// -10
// Enter the total rainfall in inches for month 2
// Enter -1 when you are finished
// 10
// Enter the total rainfall in inches for month 3
// Enter -1 when you are finished
// -1
// The total rainfall for the 2 months is 0 inches.
