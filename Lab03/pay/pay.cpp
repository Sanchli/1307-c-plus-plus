#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double hours, hourly_rate, total_pay;

    system("clear");

    
    cout << "Hourly Rate Calculator\n" << endl;
    
    //prompt user for hours and hourly_rate
    cout << "What are the amount of hours worked for this week?" << endl;
    cin >> hours;
    cout << "What is your hourly rate? " << endl;
    cin >> hourly_rate;

    //Formula for total pay
    total_pay = hours * hourly_rate;
    cout << setiosflags(ios::fixed);
    cout << setprecision(2);

    cout << "Your total pay will come out to $" << total_pay << endl;

}