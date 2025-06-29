// How to  a class

#include <iostream>
#include <iomanip>
using namespace std;

class Tips
{

private:
    double taxRate;

public:
    // tax rate constructor

    Tips(double rate = 0.085)
    {
        taxRate = rate;
    }

    double computeTip(double totalBill, double tipRate)
    {
        double mealCost = totalBill / (1 + taxRate);
        return mealCost * tipRate;
    }
};

int main()
{
    double totalBill;
    double tipRate;
    double totalTip;
    double taxRate;

    cout << fixed << setprecision(2);

    cout << "Enter the tax rate as a decimal (ex: .05) or enter -99 to exit ";
    cin >> taxRate;
while(taxRate > 0) {
    
    Tips meal1(taxRate);
    
    cout << "Enter the total bill amount(tax included) ";
    cin >> totalBill;
    
    cout << "Enter the tip rate as a decimal (ex: .25) ";
    cin >> tipRate;
    
    totalTip = meal1.computeTip(totalBill, tipRate);
    
    
    cout << "The tip amount is " << totalTip << endl;
    cout << "The total bill was " << totalBill << endl;
    cout << "The cost of your meal was " << (totalTip / tipRate) << endl;

    break;
}
cout << "See you next time!";
    return 0;
}
