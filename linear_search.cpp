
// Taylor Golden
//Status: Complete
// This program performs a linear search on a character array

#include <iostream>
using namespace std;

int searchList(int[], int, int); // function prototype 

const int SIZE = 8;

int main()
{
	int nums[SIZE] = {3, 6, -19, 5, 5, 0, -2, 99};
	int found;
	int number;

do {
	cout << "Enter a number to search for: (enter 111 to end)" << endl;
	cin >> number;

	found = searchList(nums, SIZE, number);


	if (found == -1) {

		cout << "The number " << number
		     << " was not found in the list" << endl;
    }
	else
		cout << "The number " << number << " is in the " << found + 1
		     << " position of the list" << endl;
}
while (number != 111);


	return 0;
}

//*******************************************************************
//	searchList
//
//  task:	       This searches an array for a particular value
//  data in:	   List of values in an array, the number of
//	               elements in the array, and the value searched for
//	               in the array
//  data returned: Position in the array of the value or -1 if value
//	               not found
//
//*******************************************************************

int searchList(int List[], int numElems, int value)
{
	for (int count = 0; count < numElems; count++)
	{
		if (List[count] == value)
			// each array entry is checked to see if it contains
			// the desired value. 
			return count;
			// if the desired value is found, the array subscript
			// count is returned to indicate the location in the array
	}

	return -1;	// if the value is not found, -1 is returned
}
/*

//Exercise 1:
//Output
//Enter a number to search for:
4
The number 4 was not found in the list

Enter a number to search for:
11
The number 11 was not found in the list

Enter a number to search for:
0
The number 0 is in the 6 position of the list

Enter a number to search for:
-2
The number -2 is in the 7 position of the list

Exercise 2:
//Output
//You would need a postest loop because you want the statement to run at least once then test the expression

Enter a number to search for: (enter 111 to end)
50
The number 50 was not found in the list
Enter a number to search for: (enter 111 to end)
1
The number 1 was not found in the list
Enter a number to search for: (enter 111 to end)
11
The number 11 was not found in the list
Enter a number to search for: (enter 111 to end)
0
The number 0 is in the 6 position of the list
Enter a number to search for: (enter 111 to end)
111
The number 111 was not found in the list


*/

