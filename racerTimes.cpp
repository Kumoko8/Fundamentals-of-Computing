#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // initiate variables

    string racerA;
    string racerB;
    string racerC;
    double racerAtime;
    double racerBtime;
    double racerCtime;

    // Take in the runner and time data
    cout << "Welcome to the Runner Program. Enter three runners and their times and we will place them in order for you based on their times! ";

    cout << "Enter the name of a runner ";
    cin >> racerA;
    cout << "Enter the time of " << racerA << endl;
    cin >> racerAtime;

    cout << "Enter the name of the next runner ";
    cin >> racerB;
    cout << "Enter the time of " << racerB << endl;
    cin >> racerBtime;

    cout << "Enter the name of the third runner ";
    cin >> racerC;
    cout << "Enter the time of " << racerC << endl;
    cin >> racerCtime;

    if (racerAtime < racerBtime)
    {
        if (racerAtime < racerCtime)
        {
            cout << racerA << " wins first place" << endl;
            if (racerCtime < racerBtime)
            {
                cout << racerC << " wins second place" << endl;
                cout << racerB << " wins third place" << endl;
            }
            else
            {
                cout << racerB << " wins second place" << endl;
                cout << racerC << " wins third place" << endl;
            }
        }
        else
        {
            cout << racerC << " wins first place" << endl;
            cout << racerA << " wins second place" << endl;
            cout << racerB << " wins third place" << endl;
        }
    }
    else if (racerBtime < racerAtime)
    {
        if (racerBtime < racerCtime)
        {
            cout << racerB << " wins first place" << endl;
            if (racerCtime < racerAtime)
            {
                cout << racerC << " wins second place" << endl;
                cout << racerA << " wins third place" << endl;
            }
            else
            {
                cout << racerA << " wins second place" << endl;
                cout << racerC << " wins third place" << endl;
            }
        }
        else
        {
            cout << racerC << " wins first place" << endl;
            cout << racerB << " wins second place" << endl;
            cout << racerA << " wins third place" << endl;
        }
    }
    else
    {
        cout << "An error occcured. Please run again.";
    }

    cout << "Results complete come again!";

    return 0;
}