#include <iostream>
#include <string>
#include <cctype>
using namespace std;
// The password should be at least six characters long.
//  #03	The password should contain at least one uppercase and at least one lowercase letter.
//  #04	The password should have at least one digit.
//  #05	Write a program that asks for a password and then verifies that it meets the stated criteria.
//  #06	If the password does not meet the criteria, the program should display a message telling the user why it is not sufficient.

class PasswordValidation
{
private:
    string password;

public:
    void setPassword(string pw)
    {
        password = pw;
    }

    bool isValid() const
    {
        if (password.length() < 6)
        {
            cout << "Please make the password at least 6 characters";
            return false;
        }

        bool containsUppercase = false;
        bool containsLowercase = false;
        bool containsDigit = false;

        for (size_t i = 0; i < password.length(); i++)
        {
            char ch = password[i];
            if (isupper(ch))
                containsUppercase = true;
            if (islower(ch))
                containsLowercase = true;
            if (isdigit(ch))
                containsDigit = true;
        }

        if (!containsUppercase)
            cout << " Must have at least one uppercase letter! " << endl;

        if (!containsLowercase)
            cout << " Must have at least one lowercase letter! " << endl;

        if (!containsDigit)
            cout << " Must have at least one digit! " << endl;

        return containsUppercase && containsLowercase && containsDigit;
    }
};

int main()
{

    PasswordValidation validate;
    string userPw;

    cout << " This program will validate a password with the following criteria! " << endl;
    cout << " at least 6 characters long " << endl;
    cout << " at least 1 uppercase letter " << endl;
    cout << " at least 1 lowercase letter " << endl;
    cout << " at least 1 digit " << endl;
    cout << " Please type your password " << endl;

    cin >> userPw;

    validate.setPassword(userPw);

    if (validate.isValid())
    {
        cout << " Your password " << userPw << " is valid! " << endl;
    }
    else
    {
        cout << " Password failed. Try again. " << endl;
    }
}
