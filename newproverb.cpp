// Taylor Golden
// Status: Complete
//  This program will allow the user to input from the keyboard
//  whether the last word to the following proverb should be party or country:
//  "Now is the time for all good men to come to the aid of their ___"
//  Inputting a 1 will use the word party. Any other number will use the word country

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
void writeProverb(int);

int main()
{
	int wordCode;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___"
		 << endl;

	cout << "Input a 1 if you want the sentence to be finished with party"
		 << endl;
	cout << "Input a 2 if you the sentence to be finished with country" << endl;

	cout << "Please input your choice now" << endl;
	cin >> wordCode;
	cout << endl;

	writeProverb(wordCode);

	return 0;
}

//	******************************************************************************
//	writeProverb
//
//	task:	  This function prints a proverb. The function takes a number
//	          from the call. If that number is a 1 it prints "Now is the time
//	          for all good men to come to the aid of their party."
//	          Otherwise, it prints "Now is the time for all good men
//	          to come to the aid of their country."
//	data in:  code for ending word of proverb (integer)
//	data out: no actual parameter altered
//
//	*****************************************************************************

void writeProverb(int number)
{
	// Fill in the body of the function to accomplish what is described above
		while (number != 1 && number != 2) {

		cout << "Error please enter a 1 or a 2" << endl;
		cin >> number;
		}

	if (number == 1)
	{
		cout << "Now is the time for all good men and women to come to the aid of their party" << endl;
	}
	else if (number == 2)
	{
		cout << "Now is the time for all good men and women to come to the aid of their country" << endl;
	}

	return;
}

// Exercise 1
// entering a float such as -3.97 just returns the phrase ending in country

// Exercise 2
// code now modified to accept only 1 or 2 and repeat prompt otherwise
