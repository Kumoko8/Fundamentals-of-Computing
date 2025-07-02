// Taylor Golden
// Status: Complete
// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

#include <iostream>
using namespace std;

int main()
{
    float average;

    cout << "Input your average:" << endl;
    cin >> average;
    // Before adding the >=, if 60 was input nothing would happen, there would be no message or output, but when we change it to >=, it says You pass
    if (average >= 60){
        cout << "You pass" << endl;
    }

    else{
        cout << "You fail" << endl;
    }

    return 0;
}
