#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //varibles
    double item_price, total_tax, total, tax = .08, sum = 0;

    //Prompts user to enter price for each item  
    cout << "Enter the price of your item (or enter 0 to exit): " << endl;
    cin >> item_price;

    //Sentinel loop that exits after entering 0
    while(item_price != 0)
    {
        sum = sum + item_price;
        cout << "Enter next item (Enter 0 to exit): ";
        cin >> item_price;
    }

    //total of all items with tax
    total_tax = sum * tax;
    total = sum + total_tax;

    //Precision setting to make sure answer is only 2 decimal places long. 
    cout << setiosflags(ios::fixed);
    cout << setprecision(2);
    

    //Outputs answer to screen. It is the total with tax. 
    cout << "The total for all your items with tax is  $" << total << endl;
    return 0;
    system("PAUSE");
}                   