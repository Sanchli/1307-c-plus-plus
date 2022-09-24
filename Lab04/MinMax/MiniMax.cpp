//Edgar Sanchez
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    system("clear");
    
    //Prompt user for inputs
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    //if statements determining which number is greater
    if (num1 > num2)
        cout << num1 << " is the greater number." << endl;
    else if (num2 > num1)
        cout << num2 << " is the greater number." << endl;
    else
        cout << "These numbers are equal" << endl;

}