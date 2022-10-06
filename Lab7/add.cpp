#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int sum = 0, odd = 1;

    //for loop that will add to sum and also increment by 2 to obtain all the odd numbers
    for (odd = 1; odd <= 99; odd += 2)
    {
        sum = sum + odd;
    }
    //Will output the answer in terminal
    cout << "The Sum of all odd numbers is "<< sum << endl;
    return 0;
}