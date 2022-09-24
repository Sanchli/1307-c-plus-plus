#include <cstdlib>
#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int days, result;
    const int twenty_four_hours = 24;

    system("clear");

    //User input for amounnt of day
    cout << "Convert days to hours\n" << endl;
    cout << "Enter the number of days: ";
    cin >> days;

    //formula for amout of hours
    result = twenty_four_hours * days;
    
    system("clear");

    cout << days << " days is equivilent to " << result << " hours." << endl;
    sleep (1);
    return 0;
}