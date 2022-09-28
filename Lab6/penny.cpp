#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int days;
    double pay = 0.01, sum = 0.01;
    
    cout << "How many days did you work?" << endl;
    cin >> days;
while (days > 1)
    {
        pay = pay * 2;
        sum = sum + pay;
        days--;
        cout << setiosflags(ios::fixed);
        cout << setprecision(2);

    }   
    cout <<"Your total pay will be $" << sum << endl;
    system ("PAUSE");
    return 0;
}