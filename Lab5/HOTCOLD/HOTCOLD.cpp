//HOTCOLD
//Edgar Sanchez
//ITSE 1307

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{

    double temp;

    //Prompt user for input
    cout << "Freezing and Boilding Points" << endl;
    cout << "Input a Random Temperature in Farenheit: " << endl;
    cin >> temp;

    //Ethyl Alcohol Freezing Point
    if (temp <= -173)
    {
        cout << "Ethyl Alcohol will freeze" << endl;
    
    }
    //Ethyl Alcohol boiling Point
    else
    if (temp >= 172)
    {
        cout << "Ethyl Alcohol will boil" << endl;
    }

    //Mercury freezing point
    if (temp <= -38)
    {
        cout << "Mercury will freeze" << endl;
    }
    //Mercury Boiling Point
    else
    if (temp >= 676)
    {
        cout << "Mercury will boil" << endl;
    }

    //Oxygen Freezing Point
    if (temp <= -362)
    {
        cout << "Oxygen will freeze" << endl;
    }
    //Oxygen boiling point
    else 
    if (temp >= -306)
    {
        cout << "Oxygen will boil" << endl;
    }

    //Water freezing point
    if (temp <= 32)
    {
        cout << "Water will freeze" << endl;
    }
    //Water boilding point
    else 
    if (temp >= 212)
    {
        cout << "Water will boil" << endl;
    }
    system ("PAUSE");
    return 0;

}