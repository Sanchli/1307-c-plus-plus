//WIDGET
//Edgar Sanchez
//1307

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int widget,total;
    //Program title
    cout << "WIDGET" << endl << endl;
    
    //Informing user of prices in bulk
    cout << "Cost per widget is $10" << endl;
    cout << "2-4 units is $9" << endl;
    cout << "5-9 units is $8" << endl;
    cout << "10 and up will cost $6" << endl << endl;

    //Prompting user for input of purchase
    cout << "How many would you like to purchase?" << endl;
    cin >> widget;

    //2-4 units price
    if (widget >=2 && widget <=4)
    {
        total = widget * 9;
    }
    //5-9 units price
    else 
    if (widget >= 5 && widget <= 9)
    {
        total = widget * 8;
    }
    //10 or more unit price
    else
    if (widget >= 10)
    {
        total = widget * 6;
    }
    //single unit price
    else
    {
        total = widget * 10;
    }

    cout << "For " << widget << " widgets your total will come put to $" << total << endl;
    cout << "Thank you for your purchase!" << endl;
    system("PAUSE");
    return 0;

}