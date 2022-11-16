#include <iostream>
using namespace std;
int main()
{
// Declare a variable to hold the
// user's menu selection.
int menuSelection;
// Declare variables to hold the units
// of measurement.
double inches, centimeters, feet, meters,
miles, kilometers;
// Display the menu.
cout << "1. Convert inches to centimeters." << endl;
cout << "2. Convert feet to meters." << endl;
cout << "3. Convert miles to kilometers." << endl;
cout << endl;
// Prompt the user for a selection
cout << "Enter your selection." << endl;
cin >> menuSelection;
// Validate the menu selection.
while (menuSelection < 1 || menuSelection > 3)
{
cout << "That is an invalid selection." << endl;
cout << "Enter 1, 2, or 3." << endl;
cin >> menuSelection;
}
// Perform the selected operation.
switch(menuSelection)
{
case 1:
// Convert inches to centimeters.
cout << "Enter the number of inches." << endl;
cin >> inches;
centimeters = inches * 2.54;
cout << "That is equal to " << centimeters 
<< " centimeters." << endl;
break;
case 2:
// Convert feet to meters.
cout << "Enter the number of feet." << endl;
cin >> feet;
meters = feet * 0.3048;
cout << "That is equal to " << meters 
<< " meters." << endl;
break;
case 3:
// Convert miles to kilometers.
cout << "Enter the number of miles." << endl;
cin >> miles;
kilometers = miles * 1.609;
cout << "That is equal to " << kilometers
<< " kilometers." << endl;
break;
}
return 0;
}