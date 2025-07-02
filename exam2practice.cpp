// Taylor Golden
// Status: Complete
//  This program counts the number of perfect scores stored in an integer array.
#include <iostream>
using namespace std;

// Function prototypes
int getScores(int[], int);
int countPerfect(int[], int);

int main()
{
    const int SIZE = 20;
    int array[SIZE],
        numScores;

    // Explain the program to the user
    cout << "This program will allow you to enter up to 20 scores \n"
         << "and will then report how many perfect scores were entered. \n\n";

    // Call a function to input the scores into array.
    numScores = getScores(array, SIZE);

    // Report the results
    cout << "\nThe " << numScores << " scores you entered include "
         << countPerfect(array, numScores) << " perfect scores. \n";

    return 0;
}

int getScores(int array[], int size)
{
    int count = 0;
    cout << "Please enter a score 0 to 100 (or -1 to quit)" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        if (array[i] == -1)
            break;
        count++;
    }
    return count;
}

int countPerfect(int array[], int size)
{
int count = 0;
for (int i = 0; i < size; i++) {
    if(array[i] ==100){
        count++;
    }
} return count;
}
