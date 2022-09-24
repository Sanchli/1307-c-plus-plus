#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    system("clear");

    double shape = 0, height, length, sqft,cost_sqft, total, radius;
    const double pie = 3.14;

    cout << "Square foot Calculator" << endl << endl;
    
    cout << "What is the shape of your room?" << endl;
    cout << "Select a shape (or 0 to exit):" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Triangle" << endl;
    cin >> shape;
    
    while (shape != 0)
    {
        if(shape == 1)
        {
            cout << "Enter height in feet: " << endl;
            cin >> height;
            cout << "Enter length in feet1: " << endl;
            cin >> length;

            sqft = height * length;

            cout << "Enter cost per square foot." << endl;;
            cin >> cost_sqft;
            
            cout << setiosflags(ios::fixed);
            cout << setprecision(2);

            total = cost_sqft * sqft;

            cout << "Your total cost per sqft for your square floor will be $" << total << endl;
            

        }
        if(shape == 2)
        {
            cout << "Enter the radius of the circle" << endl;
            cin >> radius;
            sqft = pow((radius * pie),2);
            
            cout << "Enter the cost per sqaure foot: " << endl;
            cin >> cost_sqft;
            
            total = sqft * cost_sqft;
            
            cout << setiosflags(ios::fixed);
            cout << setprecision(2);
            
            cout << "Your total cost per sqft for your circle floor will be $" << total << endl;
            
        }
        else if (shape < 1 || shape > 2)
        {
            cout << "Error! Incorrect input! Try again" << endl;
            cout << endl;
        }
    
        cout << "Select a shape( or 0 to exit):" << endl;
        cout << "1. Rectangle" << endl;
        cout << "2. Triangle" << endl;
        cin >> shape;
    }
}
