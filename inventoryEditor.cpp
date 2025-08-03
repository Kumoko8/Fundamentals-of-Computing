#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const int DESC_SIZE = 50;
struct Invtry {
    char desc[DESC_SIZE];
    int qty;
    double wholesaleCost;
    double retailCost;
    char dateAdded[11];
};

void addRecord();
void displayRecord();
void changeRecord();
void invtryMenu();

int main() {

    cout << "This program is used to manage your inventory. Please choose from the menu by selecting a number! " << endl;
    invtryMenu();
    return 0;
}

void invtryMenu() {
    int userChoice;

    do {

        cout << " \n Inventory Menu: \n";
        cout << " 1. Add a record \n";
        cout << " 2. Display a record \n";
        cout << " 3. Change a record \n";
        cout << " 4. End \n";
        cin >> userChoice;
        cin.ignore();

        switch (userChoice)
        {
        case 1: addRecord();
        break;
        case 2: displayRecord();
        break;
        case 3: changeRecord();
        break;
        case 4: cout << " Goodbye! ";
        break;
        
        default: cout << " Please choose a menu option! ";
            break;
        }
    } while(userChoice !=4);
}

void addRecord(){

    Invtry record;
    ofstream inventory("invtry.dat", ios::binary | ios::app);

    cout << " Enter the item description ";
    cin.getline(record.desc, 50);
    cout << " Enter the quantity on hand ";
    cin >> record.qty;
    cout << " Enter the wholesale cost ";
    cin >> record.wholesaleCost;
    cout << " Enter the retail cost ";
    cin >> record.retailCost;
    cin.ignore();
    cout << " Enter the date added (MM-DD-YYYY) ";
    cin.getline(record.dateAdded, 11);

    inventory.write(reinterpret_cast<char*>(&record), sizeof(record));
    inventory.close();

    cout << " New record added successfully! ";
    cout << endl;



}

void displayRecord(){

    Invtry record;
    unsigned long recNum;
    fstream inventory("invtry.dat", ios::in | ios::binary);
        if(!inventory){
            cout << "Error in opening the file. ";
            exit(1);
        }
    cout << " Enter record number to display (start from 0) ";
    cin >> recNum;

    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char*>(&record), sizeof(record));

    cout << fixed << setprecision(2);
    cout << "\n Description: " << record.desc << endl;
    cout << " Quantity: " << record.qty << endl;
    cout << " Wholesale Cost: $" << record.wholesaleCost << endl;
    cout << " Retail Cost: $" << record.retailCost << endl;
    cout << " Date Added: " << record.dateAdded << endl;

    inventory.close();

    cout << endl;


}

void changeRecord(){

    Invtry record;
    unsigned long recNum;

    fstream inventory("invtry.dat", ios::binary | ios::in | ios::out);
    if(!inventory){
            cout << "Error in opening the file. ";
            exit(1);
        }
    cout << " Enter record number to change (start from 0) ";
    cin >> recNum;
    cin.ignore();

    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char*>(&record), sizeof(record));

    cout << "\n Current Record: \n";
    cout << " Description: " << record.desc << endl;
    cout << " Quantity: " << record.qty << endl;
    cout << " Wholesale Cost: $" << record.wholesaleCost << endl;
    cout << " Retail Cost: $" << record.retailCost << endl;
    cout << " Date Added: " << record.dateAdded << endl;

    cout << " \n Enter the new item data below: \n";
    cout << " Enter the item description ";
    cin.getline(record.desc, 50);
    cout << " Enter the quantity on hand ";
    cin >> record.qty;
    cout << " Enter the wholesale cost ";
    cin >> record.wholesaleCost;
    cout << " Enter the retail cost ";
    cin >> record.retailCost;
    cin.ignore();
    cout << " Enter the date added (MM-DD-YYYY) ";
    cin.getline(record.dateAdded, 11);

    inventory.seekp(recNum * sizeof(record), ios::beg);
    inventory.write(reinterpret_cast<char*>(&record), sizeof(record));
    cout << "Record updated successfully! ";

    inventory.close();

    cout << endl;



}

