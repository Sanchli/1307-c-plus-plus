#include <iostream>
using namespace std;

int sum(int,int); // Funtion prototype

int main()
{
    int firstAge, secondAge, total;

    cout << "Enter you age: ";
    cin >> firstAge;
    cout << "Enter your best freind's age: ";
    cin >> secondAge;
    total = sum(firstAge, secondAge);

    cout << "Together you are " << total << " years old." << endl;
    return 0;
}

int sum(int num1, int num2)
{
    int result;
    result = num1 + num2;
    return result;
}
