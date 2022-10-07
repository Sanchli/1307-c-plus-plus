#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double item_price, total_tax, total, tax = .08, sum = 0;

    cout << "Enter the price of your item (or enter 0 to exit): " << endl;
    cin >> item_price;

    while(item_price != 0)
    {
        sum = sum + item_price;
        cout << "Enter next item (Enter 0 to exit): ";
        cin >> item_price;
    }
    total_tax = sum * tax;
    total = sum + total_tax;

    cout << setiosflags(ios::fixed);
    cout << setprecision(2);
    
    cout << "The total for all your items with tax is  $" << total << endl;
    return 0;
    system("PAUSE");
}                   