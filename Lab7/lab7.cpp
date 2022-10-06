#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int sum = 0, odd =1;

    for(odd = 1; odd <= 99; odd+2)
    {
        sum = sum + odd;
    }

    cout << "The Sum of all odd numbers is "<< odd << endl;
    return 0;    
}