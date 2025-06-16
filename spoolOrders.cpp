#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int spoolNumber;
    double spoolStock;
    double extraShipping;
    int readytoShip;
    double backorderSpools;
    double baseSpoolPrice;
    double totalShipping;
    double orderTotal;



    int spoolPrice = 100;
    int shipFee = 10;

    cout << "This program will display the status of the spool order. ";
    cout << "Enter the number of spools ordered ";
    cin >> spoolNumber;

    cout << "Enter the number of spools in stock ";
    cin >> spoolStock;

    cout << "Enter any additional shipping and handling costs (above the default $10) ";
    cin >> extraShipping;

    cout << "The number of spools ordered is: " << spoolNumber  << endl;
    cout << "There are " << spoolStock - spoolNumber <<  " spools left in stock ";






}

