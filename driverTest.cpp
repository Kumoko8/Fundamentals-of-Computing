
#include <iostream>
#include <iomanip>
using namespace std;

class TestGrader
{

private:
    char correctAnswers[20] = {'b', 'd', 'a','a', 'c', 'a', 'b', 'a', 'c', 'd', 'b', 'c', 'd', 'a', 'd', 'c', 'c', 'b', 'd', 'a' };
    string responses;

public:
    // tax rate constructor

    TestGrader(string r)
    {
        responses = r;
    }

    double setKey(string answers)
    {
        
        return 0;
    }
};