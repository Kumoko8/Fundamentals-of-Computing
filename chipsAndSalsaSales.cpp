#include <iostream>
using namespace std;

int mildJars;
int mediumJars;
int sweetJars;
int hotJars;
int zestyJars;

//array for salsa names

const int SIZE = 5;
int salsaAmounts[SIZE];

int main()
{
string salsaNames[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
for (int i = 0; i < SIZE; i++)
{
     cout << "Enter number of" << salsaNames[i] << "jars sold";
    cin >> salsaAmounts[i];
}

   
    cout << "The sales for each are: ";
    for (int i : salsaAmounts)
    {
       cout << i << endl;
    }
    



    return 0;
}