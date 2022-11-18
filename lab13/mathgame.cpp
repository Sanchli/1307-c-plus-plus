#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

//void randomNumbers();
void check(int answer,int total);

//Menu Function
void mathMenu() {
    cout << "MATH GAME" << endl << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Muliplication" << endl;
    cout << "4. Quit" << endl;
    cout << endl;
}

//Function Verifies if the answer is correct
void check(int answer,int total){
    while (answer != total)
    {
        cout << "Oh man!! Lets try that again..." << endl;
        cout << "Enter your answer: ";
        cin >> answer;
    }
}

int main(){
    int menuSelection,number1,number2, answer,total;
    //Random Number Generator
    srand(time(0));
        number1 = rand() % 12 + 0;
        number2 = rand() % 12 + 0;

    mathMenu();
    cin >> menuSelection;
    cout << endl;

    //input must be between 1-5
    while (menuSelection < 1 | menuSelection > 5)
    {
        cout << "Error invalid input!" << endl;
        cout << "Enter 1,2,3,4, or 5 from menu" << endl;
        cout << endl;
        mathMenu();
        cin >> menuSelection;
    }
    //Selection Menu
    switch(menuSelection)
    {

        //Addition
        case 1: 
        cout << "Addition" << endl; 
        cout << "What is the answer to: " << endl;
        cout << number1 << "+" << number2 << endl;
        cin >> answer;

        total =number1 + number2;
        check(answer,total);
        
        cout << endl;
        cout << "Wow your Math Wizard!" << endl;
        break;

        //Subtraction
        case 2:
        cout << "Subtraction" << endl;
        cout << "What is the answer to: " << endl;
        //statement to make sure no answer is negative
        if(number1 > number2)
        {
            total =number1-number2;
            cout << number1 << "-" << number2 << endl;
        }else {
            total = number2-number1;
            cout << number2 << "-" << number1 << endl;
        }
        cin >> answer;
        check(answer,total);
        cout << endl;
        cout << "Wow your Math Wizard!" << endl;
        break;

        //Multiplication
        case 3:
        cout << "Multiplication" << endl;
        cout << "What is the answer to: " << endl;
        cout << number1 << "*" << number2 << endl;
        cin >> answer;
        total = number1 * number2;
        check(answer,total);
        cout << endl;
        cout << "Wow your Math Wizard!" << endl;
        break;
        
        case 4:
        break;
    }
    cout << endl;
    cout << "Wanna try again? Select your choice!" << endl;
    mathMenu();
}

