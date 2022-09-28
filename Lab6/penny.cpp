#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int days;
    double pay = 0.01, sum = 0.01;
    
    //Prompt user for amount of days worked
    cout << "How many days did you work?" << endl;
    cin >> days;

    //while loop to multiply payment by 2 and adding to existing pay
while (days > 1)
    {
        pay = pay * 2;
        sum = sum + pay;
        days--;

        //Will allow only 2 decimal places.
        cout << setiosflags(ios::fixed);
        cout << setprecision(2);

    } 
    //Output message with amount
    cout <<"Your total pay will be $" << sum << endl;
    system ("PAUSE");
    return 0;
}