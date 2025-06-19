// A menu driven program with options 1-4 to calculate areas of three different shapes and an option to end program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constant for calculating area
    const double PI = 3.1415;

    // necessary variables for user input
    int user_choice;
    double radius;
    double circ_area;
    double rect_length;
    double rect_width;
    double rect_area;
    double tri_base;
    double tri_height;
    double tri_area;

    // Menu Display and user input choice

    cout << "   Calculate Area Menu    ";
    cout << " 1. Area of a Circle ";
    cout << " 2. Area of a Rectangle ";
    cout << " 3. Area of a Triangle ";
    cout << " 4. Quit ";

    cout << " Select your desired shape ";
    cin >> user_choice;

    // Format the output of the area
    cout << fixed << showpoint << setprecision(2);

    // Configure calculations for each option

    if (user_choice == 1)
    {
        cout << " Enter the radius of the circle ";
        cin >> radius;
        if (radius > 0)
        {

            circ_area = PI * radius * radius;
            cout << " The area of the circle is " << circ_area << endl;
        }
        else
        {
            cout << " Positive numbers only. Try again.";
        }
    }
    else if (user_choice == 2)
    {
        cout << " Enter the length of the rectangle";
        cin >> rect_length;
        if (rect_length > 0)
        {

            cout << " Enter the width of the rectangle";
            cin >> rect_width;
            rect_area = rect_length * rect_width;
            cout << "  The area of the rectangle is " << rect_area << endl;
        }
        else
        {
            cout << " Positive numbers only. Try again.";
        }
    }
    else if (user_choice == 3)
    {
        cout << " Enter the base of the triangle";
        cin >> tri_base;
        if (tri_base > 0)
        {

            cout << " Enter the height of the triangle";
            cin >> tri_height;
            tri_area = tri_base * tri_height / 2;
            cout << "  The area of the triangle is " << tri_area << endl;
        }
        else
        {
            cout << " Positive numbers only. Try again.";
        }
    }
    else if (user_choice != 4)
    {
        cout << " Invalid option. Please choose an option 1 -4. Restart program";
    }

    cout << " Goodbye.";

    return 0;
}
