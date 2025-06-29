#include <iostream>
using namespace std;

const int SIZE = 5;
int salsaAmounts[SIZE];
int amountTotal = 0;
int bestSellerIndex = 0;
int worstSellerIndex = 0;

int main()
{

    string salsaNames[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};

    // Get amount of each type sold

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter number of " << salsaNames[i] << " jars sold ";
        cin >> salsaAmounts[i];

        while (salsaAmounts[i] < 0)
        {
            cout << "Please enter a positive number for the amounts sold ";
            cin >> salsaAmounts[i];
        }
    }
    // Display amounts of each sold
    cout << "The sales for each are: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << salsaAmounts[i] << " " << salsaNames[i] << " jars" << endl;
    }

    // Display total sales
    cout << "The total sales for the month are: ";
    for (int i = 0; i < SIZE; i++)
    {
        amountTotal += salsaAmounts[i];
    }
    cout << amountTotal << endl;

    // Display best and worst seller
    int bestSeller = salsaAmounts[0];
    int worstSeller = salsaAmounts[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (salsaAmounts[i] > bestSeller)
        {
            bestSeller = salsaAmounts[i];
            bestSellerIndex = i;
        }
        if (salsaAmounts[i] < worstSeller)
        {
            worstSeller = salsaAmounts[i];
            worstSellerIndex = i;
        }
    }
    cout << " The best selling salsa is: " << endl;
    cout << salsaNames[bestSellerIndex] << " with " << bestSeller << " jars sold " << endl;
    cout << " The worst selling salsa is: " << endl;
    cout << salsaNames[worstSellerIndex] << " with " << worstSeller << " jars sold ";

    return 0;
}
