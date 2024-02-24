#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // declare variables
    float temp1, temp2, temp3, average, averageCelsius;

    // Prompt
    cout << "Give three temperatures in Farenheit to average" << endl;
    cin >> temp1 >> temp2 >> temp3;
    // verify entries
    cout << "You entered " << endl
         << temp1 << endl
         << temp2 << endl
         << temp3 << endl;

    // average the three temps and display to one decimal place
    average = (temp1 + temp2 + temp3) / 3;
    cout << setprecision(1) << fixed << showpoint;
    cout << "The average of the three temperatures in Farenheit is " << average << endl;

    // convert the average to celsius and display
    averageCelsius = (average - 32) * 5 / 9;
    cout << "The average of the three temperatures in Celsius is " << averageCelsius << endl;

    // if statement for temperature average
    if (averageCelsius >= 30){
        cout << "Texas is just too hot!";
    }
    else{
        cout << "It is a fine day.";
    }

    return 0;
}
// Output: for 100 80 and 75
// the average in Farenheit is 85.0
// the average in Celsius is 29.4
// it is a fine day

// for 30, 45, 60
// the average in Farenheit is 45.0
// the average in Celsius is 7.2
// It is a fine day