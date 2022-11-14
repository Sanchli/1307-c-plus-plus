#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream students;
    ofstream averages;
    char last_name[15],first_name[15];
    double g1,g2,g3,g4,g5,student_average,class_average,added_averages = 0,highest;

    students.open("students.txt",ios::in);
    averages.open("Averages.txt",ios::out);
    if(!students.is_open())
    {
        cout << "Error opening input file" << endl;
        system("PAUSE");
        exit(1);
    }
    if(!averages.is_open())
    {
        cout << "Error opening input file" << endl;
        system("PAUSE");
        exit(1);
    }

    students >> first_name >> last_name >> g1 >> g2 >> g3 >> g4 >> g5;

    while(students)
    {
        student_average = (g1 + g2 + g3 + g4 + g5)/ 5; 
        averages << last_name << "," << first_name << " " << student_average << endl;
        if (student_average >= highest)
        {
            highest = student_average;
        }
        students >> first_name >> last_name >> g1 >> g2 >> g3 >> g4 >> g5;
    }
    averages << "The highest overall grade was " << highest;
    averages.close();
    students.close();
    system("PAUSE");
    return 0;

}