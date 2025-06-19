#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct UserInfo
{ string name;
    int age;
    char gender;

};

void placeCursor(int row, int col);
//Prototypes
void displayPrompts();
void getUserInput(UserInfo&);
void displayData(const UserInfo&);

int main(){

UserInfo input;


//Placing screen cursor


    displayPrompts();
    getUserInput(input);
    displayData(input);

    return 0;
}
//Place Cursor function
void placeCursor(int row, int col)
{
    cout << "\033[" << row << ";" << col << "H";
}
//Display prompts function
void displayPrompts(){
    placeCursor(3, 25);
    cout << " ------ Monthly Budget ------" << endl;
    placeCursor(5, 25);
    cout << " Housing" << endl;
    placeCursor(7, 25);
    cout << "Utilities, Internet & Phone" << endl;
}

void getUserInput(UserInfo &input){
    placeCursor(5, 31);
    getline(cin, input.name);
    placeCursor(7, 30);
    cin >> input.age;
    

}
// Display Data

void displayData(const UserInfo &input){
    placeCursor(10, 0);
    cout << "Here is the data you entered.\n";
    placeCursor(11, 10);
    cout << "Housing:  " <<input.name << endl;
    placeCursor(12, 0);
    cout << "Utilities, Internet & Phone:  " <<input.name << endl;

}

