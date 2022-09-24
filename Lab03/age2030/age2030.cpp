#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int age, current_year, future_age, years_apart;
    const int twenty_thirty = 2030;

    //Prompt user for age and year
    cout << "What is your current age? " << endl;
    cin >> age;
    cout << "Now what is the current year? " << endl;
    cin >> current_year;

    years_apart = twenty_thirty - current_year;
    future_age = years_apart + age;
    
    //output result
    cout << "Your age in 2030 will be " << future_age;



}