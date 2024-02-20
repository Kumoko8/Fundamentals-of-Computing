// Taylor Golden
// Exam 1 practice
//  INPUTS
//  Allow  emtering Three Exam Scores (of Type Dounl;e) separated by a space from the end user
//  Verify the scores by showing to the end user
//  PROCESS
//  Compute the average of the three scores to the twio decimal places.
//  Verifying the average of three scores by shpwing to the end user.
//  DECISION and OUTPUTS
//  If the average is between 70 and 100 print a message saying that "Congradulaions - You Passe!!"
//  Else below 70 print a mesage saying that "Sorry - You Failed and try harder next time!".
//  -----------------------------------------------------------------------------------------------------------
//  Try to do it on your own and time your completed work in about an hour.
//  Comment on all input, process, decison and outputs
//  Copy and paste your outputs to the end of your program as comments for grading
//  Use 100 80 75 and 30 45 60 as twi sets of test data to confirm your logic correctness,

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double score1;
    double score2;
    double score3;
    double testAverage;

    // Code for changing output of average to be two point decimal
    cout << setprecision(2) << fixed << showpoint;

    //Take in, set, and validate user's first score
    cout << "Enter the first exam score" << endl;
    cin >> score1;
    cout << "You entered" << score1 << endl;
    //Take in, set, and validate user's second score
    cout << "Enter the second exam score" << endl;
    cin >> score2;
    cout << "You entered" << score2 << endl;
    //Take in, set, and validate user's third score
    cout << "Enter the third exam score" << endl;
    cin >> score3;
    cout << "You entered" << score3 << endl;

    //Calculate and display the average of the scores
    testAverage = (score1 + score2 + score3) / 3;
    cout << "The average of these scores is" << testAverage << endl;

    //Make output decisions based on the amount of the score
    if (testAverage >= 70 && testAverage <= 100){
        cout << "Congratulations, you PASS!" << endl;
    }
    else if (testAverage < 70){
        cout << "You failed. Try better next time." << endl;
    }
    else{
        cout << "Error occurred. Please try again." << endl;
    }

    return 0;
}
