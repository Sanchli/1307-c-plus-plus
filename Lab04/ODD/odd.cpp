//Edgar Sanchez
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int num1;

    system("clear");

    cout << "Enter first number: " << endl;
    cin >> num1;

    if (num1 % 2 == 0)
    {
        cout << num1 << " is even." << endl;
    }
    else
    {
        cout << num1 << " is odd." << endl;
    }
}