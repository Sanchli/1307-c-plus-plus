#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string student_name;
    double questions, correct_answers, test_percentage;
    
    system("clear");
    //prompt user for Total exam question, correct answer and name.
    cout << "Input the number of questions on exam" << endl;
    cin >> questions;
    cout << "What is the number of correct answer?" << endl;
    cin >> correct_answers;
    cout << "What is the name of student?" << endl;
    cin >> student_name;
    
    //Formula for test result
    test_percentage = (correct_answers / questions) * 100;
    cout << setiosflags(ios::fixed);
    cout << setprecision(2);

    //output
    cout << student_name << "'s grade for the exam was " << test_percentage << "%"<< endl;
}