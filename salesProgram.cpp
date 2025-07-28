#include <iostream>
#include <iomanip>
using namespace std;

class DivSales
{
private:
    // An array with four elements for holding four quarters of sales figures for the division.
    // A private static variable for holding the total corporate sales for all divisions for the entire year.
    double quarterlySales[4];
    static double totalCorporateSales;
    double totalQuarterSales;

public:
    // A member function that takes four arguments, each assumed to be the sales for a quarter.
    void setQuarterSales(double q1, double q2, double q3, double q4)
    {
        // The value of the four arguments should be copied into the array that holds the sales data.
        quarterlySales[0] = q1;
        quarterlySales[1] = q2;
        quarterlySales[2] = q3;
        quarterlySales[3] = q4;

        // The total of the four arguments should be added to the static variable that holds the total yearly corporate sales.

        totalQuarterSales = q1 + q2 + q3 + q4;

        totalCorporateSales += totalQuarterSales;
    }
    // A function that takes an integer argument within the range of 0-3. The argument is to be used as a subscript for the division quarterly sales array.
    double getQuarterSales(int quarter)
    {

        // The function should return the value of the array element with that subscript.
        if (quarter >= 0 && quarter < 4)
        {
            return quarterlySales[quarter];
        }
        else
        {
            cerr << "Invalid quarter amount" << endl;
            return 0.0;
        }
    }

    static double getTotalCorporateSales()
    {
        return totalCorporateSales;
    }
};

double DivSales::totalCorporateSales = 0.0;

int main()
{
    // Write a program that creates an array of six DivSales objects. The program should ask the user to enter the sales for four quarters for each division.

    const int DIVISION = 6;
    DivSales division[DIVISION];

    double q1, q2, q3, q4;

    for (int i = 0; i < DIVISION; i++)
    {
        cout << " Enter quarterly sales for Division " << (i + 1) << endl;

        for (int q = 0; q < 4; q++)
        {
            double quarterInput;
            do
            {
                cout << "For Quarter" << (q + 1) << " sales ";
                cin >> quarterInput;
                if (quarterInput < 0)
                {
                    cout << "Quarterly sales must be positive " << endl;
                }
                if (q == 0)
                {
                    q1 = quarterInput;
                }
                else if (q == 1)
                {
                    q2 = quarterInput;
                }
                else if (q == 2)
                {
                    /* code */ q3 = quarterInput;
                }
                else
                    q4 = quarterInput;

            } while (quarterInput < 0);
        }
        division[i].setQuarterSales(q1, q2, q3, q4);
    }

    // After the the data is entered, the program should display a table showing the division sales for each quarter. The program should then display the total corporate sales for the year.

    cout << fixed << setprecision(2);
    cout << " These are the Quarterly Sales for each Division " << endl;
    cout << setw(10) << " Division ";
    for (int q = 1; q <= 4; ++q)
    {
        cout << setw(12) << " Quarter " + to_string(q);
    }
    cout << endl;

    for (int i = 0; i < DIVISION; i++)
    {
        cout << setw(10) << (i + 1);
        for (int q = 0; q < 4; q++)
        {
            cout << setw(12) << division[i].getQuarterSales(q);
        }
        cout << endl;
    }

    cout << " Total Corporate Sales " << endl;
    cout << DivSales::getTotalCorporateSales() << endl;

    return 0;
}
