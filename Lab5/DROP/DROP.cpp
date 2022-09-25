	#include <cstdlib>
	#include <iostream>

	using namespace std;

	int main()
	{
		string student_name;
		double grade1,grade2,grade3,lowest_grade;
		
		cout << "Enter student's name: ";
		cin >> student_name;

		cout << "Enter 3 grades" << endl << endl;
		
		//Input for first grade
		cout << "First grade: ";
		cin >> grade1;
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

	if (grade1 < grade2 )
	{
		lowest_grade = grade1;
	}
	if (grade2 < lowest_grade)
	{
		lowest_grade = grade2
	}
		cout << grade1 << endl;
		cout << grade2 << endl;
		cout << grade3 << endl;



		system("PAUSE");
		return 0;
	}
