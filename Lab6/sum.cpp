#include <cstdlib>
#include <iostream>

using namespace std;

int main ()
{
    int c = 0, sum = 0;

    while (c <= 100)
    {
        //Will add  to sum and increment by one every time the loop runs until it arrives to 100
        sum = sum + c;
        c = c + 1;
    }
    //Ouput the total
    cout << "The sum all number between 1-100 is " << sum << endl;
    system ("PAUSE");
    return 0;
}
