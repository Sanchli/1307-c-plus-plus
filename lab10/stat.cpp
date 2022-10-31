#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int counter[10];
    int num;
    double average = 0, sum =0, difference = 0;
    for(num = 0 ;num < 10; num++)
    {
        cout << "Enter a number: ";
        cin >> counter[num];
        sum = counter[num] + sum ;
        average = sum / counter[9];
    }
    cout << "The numbers you input were" << endl;
    for (num = 0 ;num < 10 ; num++)
    {
        cout << counter[num]<< endl;
    }

    cout << "The Average of all numbers and difference for each number with average." << endl;
    for (num = 0 ;num < 10 ; num++)
    {
        difference = average - counter[num];
        cout << average << " - "<< counter[num]<< " = " << difference << endl;
    }
}