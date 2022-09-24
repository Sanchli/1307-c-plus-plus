#include <cstdlib>
#include <iostream>

using namespace std;

int main ()

{
    
    double fahrenheit, celsius;
    
    system("clear");
    
    cout << "Temperature Converter" << endl;
    cout << endl;

    cout << "What is the current temperature in celsius?" << endl;
    cin >> celsius;
    
    fahrenheit = ((9.0 / 5.0) * celsius) + 32.0;

    cout << "Currently it is " << fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}