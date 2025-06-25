// How to  a class

#include <iostream>
using namespace std;

class Tips
{

private:
    double taxRate = 0.085;
    double totalBill;
    double tipRate;
    double totalTip;

public:
    // tax rate constructor

    Tips(double r)
    {
        taxRate = r;
    }

    double computeTip(double totalBill, double tipRate)
    {
        totalTip = totalBill * tipRate;

        return totalTip;
    }
};

int main()
{

    cout << "Enter the total bill amount";
    cin >> totalBill;

    cout << "Enter the tax rate";
    cin >> taxRate;

    cout << "Enter the tip rate";
    cin >> tipRate;

    return 0;
}