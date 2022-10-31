#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{   
    //array created for letters and grades
    string letters[5] = {"F","D","C","B","A"};
    int grades[5] = {};
    int input=0;
    //Prompting user for input for exam grades
    cout << "Enter every exam grade 0-4 (F-A)" << endl;
    cout << "(or -1 to quit): ";
    cin >> input;

    //while sentinel loop. will exit ones -1 is input. 
    while(input!=-1)
    {
        grades[input] += 1;
        cout << "Enter the next grade for student";
        cout << "(or -1 to quit): ";
        cin >> input;
    }
        cout << "This the exam grades are " << endl;

    //for loop to outpu the letter and the amount of times it was input for grades. 
    for(int i=0; i < 5; i++)
        {
        cout << grades[i] << " " << letters[i] << "'s" << endl;
        }
}