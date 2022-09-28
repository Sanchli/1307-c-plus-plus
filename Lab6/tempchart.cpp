#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int celsius = 0, fahrenheit;
    cout << "Temperature Chart" << endl;
    cout << "Celsius"<< "     " << "Fahrenheit" << endl;

    while(celsius <= 100)
    {
        fahrenheit = celsius * 1.8 + 32;
        cout << celsius << "              " << fahrenheit << endl;
        celsius = celsius + 10 ;
    }
}