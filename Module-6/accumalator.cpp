#include <iostream>

using namespace std;

int main()

{
    int c = 0;
    double number, average;
    double sum = 0;
    while (c < 5)
    {
        cout << "Enter a number: ";
        cin >> number;
        sum = sum + number;
        c = c + 1;
    }
    average = sum/c;
    cout << "The total sum of the numbers is " << sum << endl;
    cout << "The average of the numbers is " <<average << endl;
    system("PAUSE");
    return 0;
}