//(guess) Write a program that accepts a number as a guess between 1 an 100 as input and outputs if the guess is "too high", 
// "too low", or "correct". When the guess is correct the program should output how many guesses it took.
//10 points - correct use of loop statement
//10 points - correct use of if statements
//10 points - correct #include statements
//10 points - correct outputs 

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int guess,number;
    cout << "Guess a number between 1 and 100" << endl;
    cin >> guess;

    cout << guess << endl;
    cout << number << endl;

    number = rand() % 100 + 1;






}
