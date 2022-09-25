	//Lab5 DROP
	//Edgar Sanchez
	//1307 Intro to C++
	
	
	#include <cstdlib>
	#include <iostream>
	#include <iomanip>

	using namespace std;

	int main()
	{
		string student_name;
		double grade1,grade2,grade3,lowest_grade=0,final_grade;
	
		//Prompt user for input
		cout << "Enter student's name: ";
		cin >> student_name;
		cout << "Enter 3 grades" << endl << endl;
		
		//Input for first grade
		cout << "First grade: ";
		cin >> grade1;

		//Will repeat if number is less than 0 or greater than 100 for all three grades
	 while (grade1 < 0 || grade1 > 100)
	{
		cout << "Error invalid input!" << endl;
		cout << "First grade: ";
		cin >> grade1;
	}

		//Input for second grade
		cout << "Second grade: ";
		cin >> grade2;
	while (grade2 < 0 || grade2 > 100)
	{
		cout << "Error invalid input!" << endl;
		cout << "Second grade: ";
		cin >> grade2;
	}
		//Input for third grade
		cout << "Third grade: ";
		cin >> grade3;
	while (grade3 < 0 || grade3 > 100)
	{
		cout << "Error invalid input!" << endl;
		cout << "Thirds grade: ";
		cin >> grade3;
	}

	//Determines which of the 3 inputs are the lowest
	if ( lowest_grade < grade1 )
	{
		lowest_grade = grade1;
	}

	if (grade2 < lowest_grade)
	{
		lowest_grade = grade2;
	}
	if (grade3 < lowest_grade)
	{
		lowest_grade = grade3;
	}

	//equation to drop the lowest grade with 2 decimal place precision
	final_grade = (grade1 + grade2 + grade3 -lowest_grade) / 2;
	cout <<setiosflags(ios::fixed);
	cout << setprecision(2);

	//Final output with studen name and grade
	cout << student_name << "'s score came out to a " << final_grade <<endl;
		system ("PAUSE");
		return 0;
	}
