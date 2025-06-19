#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int spoolNumber;
    double spoolStock;
    double extraShipping;
    int readytoShip;
    double baseSpoolPrice;
    double totalShipping;
    double orderTotal;

    int spoolPrice = 100;
    int shipFee = 10;

    cout << "This program will display the status of the spool order. ";
    cout << "Enter the number of spools ordered ";
    cin >> spoolNumber;

    while (spoolNumber < 1)
    {
        cout << "Enter a number greater than 1 for spools ordered";
        cin >> spoolNumber;
    }

    cout << "Enter the number of spools in stock ";
    cin >> spoolStock;

    while (spoolStock < 0)
    {
        cout << "Enter a positive number for spools in stock please";
        cin >> spoolStock;
    }

    cout << "Enter any additional shipping and handling costs (above the default $10) ";
    cin >> extraShipping;

    while (extraShipping < 0)
    {
        cout << "Please enter a positive amount for extra shipping or 0 for none.";
        cin >> extraShipping;
    }

    cout << "The number of spools ordered is: " << spoolNumber << endl;
    cout << "There are " << spoolStock - spoolNumber << " spools left in stock ";

    if (spoolNumber > spoolStock)
    {
        cout << "There are " << spoolNumber - spoolStock << "spools on backorder ";
    }
    else
    {
        cout << "There are no spools on backorder right now. ";
    }

    baseSpoolPrice = spoolNumber * spoolPrice;
    cout << "The base price of spools ready to ship is " << baseSpoolPrice;

    totalShipping = shipFee + extraShipping;
    cout << "The total amount of shipping and handling is " << totalShipping;

    orderTotal = baseSpoolPrice + totalShipping;
    cout << "The order total is " << orderTotal;
}
