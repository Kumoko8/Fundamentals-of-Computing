#include <iostream>

using namespace std;

int main() {
  //Create a number accumulator that adds any amount of numbers you choose
  //I set the number and total to double to be able to handle large decimals as well
  double number;
  int counterMax;
  double total = 0;
  
  cout << "Enter how many numbers you wish to add together " << endl;
  cin >> counterMax;
  
  for (int counter = 1; counter <= counterMax; counter++){
      cout << "Enter number ";
      cin >> number;
      total = total + number;
  }
cout << "The total is " << total;
    return 0;
}

//I used programiz to play around with and make a program that adds any amount of numbers
//My first mistake was forgetting the semicolons, very important!
//then I had to edit my pseudocode to have the correct syntax for for loops (initialization; condition; increment)
// I learned that if you don't include the increment for counter, then counter will never equal the counterMax and thus will forever ask for another number without exiting the loop and displaying the total