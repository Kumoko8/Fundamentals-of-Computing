
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class TestGrader
{
private: 
    char correctAnswers[20];

public:
    // tax rate constructor

    void setKey(string answers)
    {
        
       for (size_t i =0; i < 20; i++)
       {
        correctAnswers[i] = answers[i];
       }
        
        
    }
    void gradeTest(string responses){
        int score = 0;
        string gotWrong = "";
        
        for (size_t i = 0; i < 20; i++)
        {
            if (responses[i] == correctAnswers[i])
            {
                score++;
            }
            else{
                gotWrong += to_string(i+1) + " ";
                  
                }
            }
        int incorrect = 20 - score;
        cout << "You got " << score << " correct and " << incorrect << " wrong" << endl;
        if(score >= 15){
            cout << "You passed " << endl;
        }
        else {
            cout << "You failed " << endl;
        }

        if(incorrect > 0) {
            cout << " These are the questions you missed: " << gotWrong << endl;
        }

    }
};
bool isValidResponse(char ans)
{
    return ans == 'a' || ans == 'b' || ans == 'c' || ans == 'd';
}

int main(){

string answerKey = "bdaacabacdbcdadccbda";

TestGrader test;

test.setKey(answerKey);
string responses;
string moreGrading;
do {
    while(true){

        cout << " This is a test grader program. Enter each of your responses to be graded (a, b, c , or d) without any spaces.";
        cin >> responses;

        if(responses.length() != 20){
            cout << "Please enter 20 answers with no spaces ";
            continue;
        }
        
        
        bool allValid = true;
        for (size_t i = 0; i < 20; i++)
        {
           if(!isValidResponse(responses[i])) {
            cout << "Invalid response make sure you have 20 responses, no spaces and only a,b,c, or d";
            allValid = false;
           }
        }
        if (allValid) {
            break;
        }
        cout << "Please submit all 20 in one line with valid letters. ";
    }
    
   

    char userAnswers[20];
    for(size_t i = 0; i < 20; i++){
        userAnswers[i] = responses[i];
    }   
    test.gradeTest(responses);
    
    cout << "Would you like to grade another test? (Y or N): ";
    cin >> moreGrading;
    
} while(toupper(moreGrading[0]) == 'Y');

cout << "See you next time ";


    return 0;
}
