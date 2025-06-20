#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Define structs
struct MonthlyBudget
{
    double housing;
    double util;
    double householdItems;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;

};
struct UserInfo
{
    double housing;
    double util;
    double householdItems;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;

};

// Prototypes
void placeCursor(int row, int col);
void displayPrompts(MonthlyBudget&);
void getUserInput(UserInfo&);
void displayData(UserInfo, MonthlyBudget);

int main()
{
//Member instances
    MonthlyBudget b1;
    UserInfo user1;


    // Function calls

    displayPrompts(b1);
    getUserInput(user1);
    displayData(user1, b1);

    return 0;
}
// Place Cursor function
void placeCursor(int row, int col)
{
    cout << "\033[" << row << ";" << col << "H";
}
// Display prompts function
void displayPrompts(MonthlyBudget& b1)
{
    b1.housing = 1200;
    b1.util = 215;
    b1.householdItems = 65;
    b1.transportation = 50;
    b1.food = 250;
    b1.medical = 30;
    b1.insurance = 100;
    b1.entertainment = 120;
    b1.clothing = 75;
    b1.miscellaneous = 50;

    cout << "\033[2J\033[H";
    // Title
    placeCursor(2, 25);
    cout << " ------ Monthly Budget ------" << endl;
    // Heading 1
    placeCursor(3, 12);
    cout << "Category " << endl;
    //Heading 2
    placeCursor(3, 35);
    cout << "Budget Amount " << endl;
    // Heading 3
    placeCursor(3, 51);
    cout << " Spent " << endl;
    // Budget Items
    placeCursor(5, 12);
    cout << left << setw(29) << "Housing: " << b1.housing << endl;
    placeCursor(6, 12);
    cout << left << setw(29) << "Utilities, Internet & Phone: "<< b1.util  << endl;
    placeCursor(7, 12);
    cout << left << setw(29) << "Household Expenses: " << b1.householdItems << endl;
    placeCursor(8, 12);
    cout << left << setw(29) << "Transportation: " << b1.transportation << endl;
    placeCursor(9, 12);
    cout << left << setw(29) << "Food: " << b1.food << endl;
    placeCursor(10, 12);
    cout << left << setw(29) << "Medical: " << b1.medical << endl;
    placeCursor(11, 12);
    cout << left << setw(29) << "Insurance: " << b1.insurance << endl;
    placeCursor(12, 12);
    cout << left << setw(29) << "Entertainment: " << b1.entertainment << endl;
    placeCursor(13, 12);
    cout << left << setw(29) << "Clothing: " << b1.clothing << endl;
    placeCursor(14, 12);
    cout << left << setw(29) << "Miscellaneous: " << b1.miscellaneous << endl;
    
}
//Get user spent amounts function
void getUserInput(UserInfo& user1)
{
    placeCursor(5, 53);
    cin >> user1.housing;
    placeCursor(6, 53);
    cin >> user1.util;
    placeCursor(7, 53);
    cin >> user1.householdItems;
    placeCursor(8, 53);
    cin >> user1.transportation;
    placeCursor(9, 53);
    cin >> user1.food;
    placeCursor(10, 53);
    cin >> user1.medical;
    placeCursor(11, 53);
    cin >> user1.insurance;
    placeCursor(12, 53);
    cin >> user1.entertainment;
    placeCursor(13, 53);
    cin >> user1.clothing;
    placeCursor(14, 53);
    cin >> user1.miscellaneous;

}
// Display Data

void displayData(UserInfo user1, MonthlyBudget b1)
{
    double underHouse;
    double underUtil;
    double underItems;
    double underTransportation;
    double underFood;
    double underMedical;
    double underInsurance;
    double underEntertainment;
    double underClothing;
    double underMisc;

    double overHouse;
    double overUtil;
    double overItems;
    double overTransportation;
    double overFood;
    double overMedical;
    double overInsurance;
    double overEntertainment;
    double overClothing;
    double overMisc;
    
    cout << fixed << setprecision(2);
//Place the cursor then display set the correct variable after seeing if its over or under
    placeCursor(16, 0);
    cout << "Here is how your budget is going!\n";
    placeCursor(17, 10);
    cout << left << setw(29) << "Housing: ";
    if(b1.housing - user1.housing >= 0) {
        cout << b1.housing - user1.housing << " left" << endl;
        underHouse = b1.housing - user1.housing;
        overHouse = 0;
    }
    else {
        cout << "You are over budget by " << user1.housing - b1.housing << "!" << endl;
        overHouse = user1.housing - b1.housing;
        underHouse = 0;
    }
    placeCursor(18, 10);
    cout << left << setw(29) << "Utilities, Internet, & Phone: ";
    if(b1.util - user1.util >= 0) {
        cout  << b1.util - user1.util << " left" << endl;
        underUtil = b1.util - user1.util;
        overUtil = 0;
    }
    else {
        cout << "You are over budget by " << user1.util - b1.util << "!" << endl;
        overUtil = user1.util - b1.util;
        underUtil = 0;

    }
    placeCursor(19, 10);
    cout << left << setw(29) << "Household Expenses: ";
    if(b1.householdItems - user1.householdItems >= 0) {
        cout  << b1.householdItems - user1.householdItems << " left" << endl;
        underItems = b1.householdItems - user1.householdItems;
        overItems = 0;
    }
    else {
        cout << "You are over budget by " << user1.householdItems - b1.householdItems << "!" << endl;
        overItems = user1.householdItems - b1.householdItems;
        underItems = 0;
    }
     placeCursor(20, 10);
    cout << left << setw(29) << "Transportation: ";
    if(b1.transportation - user1.transportation >= 0) {
        cout << b1.transportation - user1.transportation << " left" << endl;
        underTransportation = b1.transportation - user1.transportation;
        overTransportation = 0;
    }
    else {
        cout << "You are over budget by " << user1.transportation - b1.transportation << "!" << endl;
        overTransportation = user1.transportation - b1.transportation;
        underTransportation = 0;
    }
     placeCursor(21, 10);
    cout << left << setw(29) << "Food: ";
    if(b1.food - user1.food >= 0) {
        cout << b1.food - user1.food << " left" << endl;
        underFood = b1.food - user1.food;
        overFood = 0;
    }
    else {
        cout << "You are over budget by " << user1.food - b1.food << "!" << endl;
        overFood = user1.food - b1.food;
        underFood = 0;
    }
     placeCursor(22, 10);
    cout << left << setw(29) << "Medical: ";
    if(b1.medical - user1.medical >= 0) {
        cout  << b1.medical - user1.medical << " left" << endl;
        underMedical = b1.medical - user1.medical;
        overMedical = 0;
    }
    else {
        cout << "You are over budget by " << user1.medical - b1.medical << "!" << endl;
        overMedical = user1.medical - b1.medical;
        underMedical = 0;
    }
     placeCursor(23, 10);
    cout << left << setw(29) << "Insurance: ";
    if(b1.insurance - user1.insurance >= 0) {
        cout << b1.insurance - user1.insurance << " left" << endl;
        underInsurance = b1.insurance - user1.insurance;
        overInsurance = 0;
    }
    else {
        cout << "You are over budget by " << user1.insurance - b1.insurance << "!" << endl;
        overInsurance = user1.insurance - b1.insurance;
        underInsurance = 0;
    }
     placeCursor(24, 10);
    cout << left << setw(29) << "Entertainment: ";
    if(b1.entertainment - user1.entertainment >= 0) {
        cout << b1.entertainment - user1.entertainment << " left" << endl;
        underEntertainment = b1.entertainment - user1.entertainment;
        overEntertainment = 0;
    }
    else {
        cout << "You are over budget by " << user1.entertainment - b1.entertainment << "!" << endl;
        overEntertainment = user1.entertainment - b1.entertainment;
        underEntertainment =0;
    }
     placeCursor(25, 10);
    cout << left << setw(29) << "Clothing: ";
    if(b1.clothing - user1.clothing >= 0) {
        cout  << b1.clothing - user1.clothing << " left" << endl;
        underClothing = b1.clothing- user1.clothing;
        overClothing = 0;
    }
    else {
        cout << "You are over budget by " << user1.clothing - b1.clothing << "!" << endl;
        overClothing = user1.clothing - b1.clothing;
        underClothing = 0;
    }
     placeCursor(26, 10);
    cout << left << setw(29) << "Miscellaneous: ";
    if(b1.miscellaneous - user1.miscellaneous >= 0) {
        cout  << b1.miscellaneous - user1.miscellaneous << " left" << endl;
        underMisc = b1.miscellaneous- user1.miscellaneous;
        overMisc = 0;
    }
    else {
        cout << "You are over budget by " << user1.miscellaneous - b1.miscellaneous << "!" << endl;
        overMisc = user1.miscellaneous - b1.miscellaneous;
        underMisc = 0;
    }
    //Add up all the amounts over and under then take the difference and display based on whichever is greater
    double grandTotalOver = overHouse + overUtil + overItems + overTransportation + overFood + overMedical + overInsurance + overEntertainment + overClothing + overMisc;

    double grandTotalUnder = underHouse + underUtil + underItems + underTransportation + underFood + underMedical + underInsurance + underEntertainment + underClothing + underMisc; 

    double netTotal = grandTotalUnder - grandTotalOver;

     cout << "You are under budget a total of " << grandTotalUnder << endl;
    cout << "You went over budget a total of " << grandTotalOver << endl;
   

    if (netTotal >= 0){

        cout << "Your total amount left for the month is " << netTotal << "!";
    }
    else {
        cout << "You are " << netTotal << " this month!";
    }
}
