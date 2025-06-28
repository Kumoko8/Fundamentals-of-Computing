#include <iostream>
using namespace std;

const int SIZE = 5;
int salsaAmounts[SIZE];

int main()
{
    string salsaNames[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter number of " << salsaNames[i] << " jars sold ";
        cin >> salsaAmounts[i];
    }

    cout << "The sales for each are: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << salsaAmounts[i] << " " << salsaNames[i] << " jars" << endl;
    }

    return 0;
}