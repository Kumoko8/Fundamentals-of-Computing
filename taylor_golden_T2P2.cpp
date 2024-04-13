
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes

//Returns the number of the ratings
int getRatings(int[]);

//shows the current ratings
void showArray(int[], int);

//gets avg of ratings to one decimal place

double computeAvgRating(int[], int);


int main()
{
	const int SIZE = 20;
	int ratingArray[SIZE],
		numRatings;

	// Explain the program to the user
	cout << "This program will allow you to enter up to 20 ratings of the Apple 15 iPhone Pro Max"
		 << "and report how many ratings were entered and the overall Average Rating \n\n";

	// Call getRating to input the ratings into ratingArray and return the number of ratings.
	numRatings = getRatings(ratingArray);  

// Display the array and the ratings
    cout  << "The ratings entered are the following. \n\n";
    showArray (ratingArray, numRatings);

    //Sets cout to show 1 decimal place for average
 cout << setprecision(1) << fixed << showpoint;

	// Report the number of ratings and the average
	cout << "\nThe " << numRatings << " ratings you entered give an average of " 
		 << computeAvgRating (ratingArray, numRatings) << endl;
if(computeAvgRating (ratingArray, numRatings) >=4)
{
    cout<< "Great product - Strong buy recommendations.\n";
}

	return 0;
}

/*******************************************************
 *                     getRatings                      *
 * Accepts ratings input by the user, stores them in an *
 * array, and counts them.                             *
 *******************************************************/
int getRatings (int array[])
{
   int num,
	   pos = 0;
   
   do
   {   cout << "Enter a rating 1 - 5  (or 0 to quit): ";
	   cin  >> num;

	   if (num >= 1 && num <= 5)  // If num is valid,
	   {   array[pos] = num;        // store it and go
		   pos++;                   // to the next array position.
	   }
	   else if (num < 0 || num > 5)          // If num is invalid, display an error message.
	   {   cout << "\nSorry. Ratings must only be 1 - 5. \n\n";
	   }
	   // else the end sentinel was entered, so do nothing.

   } while (num !=0 && pos < 20);  // Loop again as long as the end sentinel
	                                // has not yet been entered and the number
								    // of array locations has not been exceeded.
  
   return pos;   // The current value of pos equals the number of scores.
}


/*******************************************************
 *                  showArray                      *
 * Show the content of the current array               *
 *                                                     *
 *******************************************************/
void showArray (int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Rating of Customer" << i+1 << " = " << array [i] << endl;
	}

	cout << endl;
}
/*******************************************************
 *                  computeAvgRating                      *
 * Takes in the ratings array and size and totals   *
 * ratings and divides by the size.              *
 *******************************************************/
double computeAvgRating(int array[], int size)
{
	double total = 0;
    double avg;

	for (int i = 0; i < size; i++)
	{
		total+= array[i];
	}
    avg = total/size;

    return avg;
}

//

/*

OUTPUT RESULTS


This program will allow you to enter up to 20 ratings of the Apple 15 iPhone Pro Max and report how many ratings were entered and the overall Average Rating 

Enter a rating 1 - 5  (or 0 to quit): 3
Enter a rating 1 - 5  (or 0 to quit): 5
Enter a rating 1 - 5  (or 0 to quit): 5
Enter a rating 1 - 5  (or 0 to quit): 4
Enter a rating 1 - 5  (or 0 to quit): 4
Enter a rating 1 - 5  (or 0 to quit): 5
Enter a rating 1 - 5  (or 0 to quit): 4
Enter a rating 1 - 5  (or 0 to quit): 5
Enter a rating 1 - 5  (or 0 to quit): -1

Sorry. Ratings must only be 1 - 5. 

Enter a rating 1 - 5  (or 0 to quit): 6

Sorry. Ratings must only be 1 - 5. 

Enter a rating 1 - 5  (or 0 to quit): 5
Enter a rating 1 - 5  (or 0 to quit): 2
Enter a rating 1 - 5  (or 0 to quit): 0
The ratings entered are the following. 

Rating of Customer1 = 3
Rating of Customer2 = 5
Rating of Customer3 = 5
Rating of Customer4 = 4
Rating of Customer5 = 4
Rating of Customer6 = 5
Rating of Customer7 = 4
Rating of Customer8 = 5
Rating of Customer9 = 5
Rating of Customer10 = 2


The 10 ratings you entered give an average of 4.2
Great product - Strong buy recommendations.


=== Code Execution Successful ===
*/
//