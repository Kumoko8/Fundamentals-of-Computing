// How to  a class

#include <iostream>
using namespace std;

class Tips
{

private:
    double taxRate = 0.085;
   

public:
    // tax rate constructor

    Tips(double rate)
    {
        taxRate = rate;
    }

    double computeTip(double totalBill, double tipRate)
    {
        double mealCost = totalBill - (totalBill * taxRate);
        return mealCost * tipRate;
        

        
    }
};

int main()
{
    double totalBill;
    double tipRate;
    double totalTip;
    double taxRate;


    cout << "Enter the tax rate as a decimal (ex: .05)";
    cin >> taxRate;

    Tips meal1(taxRate);

    cout << "Enter the total bill amount(tax included)";
    cin >> totalBill;

    cout << "Enter the tip rate as a decimal (ex: .25)";
    cin >> tipRate;

    meal1.computeTip(totalBill, tipRate);

    return 0;
}