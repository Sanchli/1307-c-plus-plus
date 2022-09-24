#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int gallons, quarts, pints, fluid_ounces;
    system("clear");
    
    //requesting user input for gallons
    cout << "Enter amount of gallons: " << endl;
    cin >> gallons;

    //equations
    quarts = gallons * 4;
    pints = gallons * 8;
    fluid_ounces = gallons * 128;
    
    //clears terminal
    system("clear");
    
    //output of Sizes for gallon conversion
    cout << gallons << " gallons will come out to: " << endl;
    cout << quarts << " quarts" << endl;
    cout << pints <<  " pints" << endl;
    cout << fluid_ounces << " fluid ounces" << endl;
    return 0;
}