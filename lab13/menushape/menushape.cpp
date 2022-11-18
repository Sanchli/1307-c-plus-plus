#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double area;
int rectangle_square(double width, double length);

int main()
{
    int menuSelection;
    double radius, area, width, length, height, base;
    const double pie = 3.14159, half = 0.5;

    //Menu for area selection
    cout << "Shape Area Calculator" << endl;
    cout << endl;
    cout << "1. Calculate the area of a Circle" << endl;
    cout << "2. Calculate the area of a Rectangle" << endl;
    cout << "3. Calculate the area of a Square" << endl;
    cout << "4. Calculate the area of a Triangle" << endl;
    cout << "5. Quit" << endl;
    cout << endl;
    //User input
    cout << "Enter Selection" << endl;
    cin >> menuSelection;
    
    //Verifies if user enters a valid input
    while(menuSelection < 1 || menuSelection > 5)
    {
        cout << "Invalid Selection!" << endl;
        cout << "Please enter a number betwen 1-5" << endl;
        cin >> menuSelection;
    } 
//Area shape
switch(menuSelection)
{
    //　CIRCLE A=3.14 *radius^2
    case 1:
    cout << "Enter the Radius: " << endl;
    cin >> radius;
    area = pie * pow(radius,2);
    cout << "The area of your circle is: " << area << endl; 
    cout << endl;
    break;

    // RECTANGLE A=length * width
    case 2: 
    area = rectangle_square(width,length);
    cout << "The area do your rectangle is: " << area << endl;
    cout << endl;
    break;

    // SQAURE A= length * width
    case 3:
    area = rectangle_square(width,length);
    cout << "The area of your square: " << area << endl;
    cout << endl;
    break;
    
    //Triangle A= 1/2* base * height
    case 4:
    cout << "Enter the height of the triangle: " << endl;
    cin >> height;
    cout << "Enter the base of the triangle: " << endl;
    cin >> base;
    area = half*(base*height);
    cout << "The are of your triangle is: " << area << endl;
    cout << endl;
    break;

    case 5:
    break;
}
cout << "Thanks come again!" << endl;
return 0;
}

int rectangle_square(double width, double length)
{
    cout << "Enter the width: " << endl;
    cin >> width;
    cout << "Enter the length: " << endl;
    cin >> length;
    return length * width;
}