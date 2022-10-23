#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// Constant for the unit price.
const double UNIT_PRICE = 99.0;

int unitsSold; // Number of units sold
double discountPct; // Discount percentage
double discountCost; // Unit cost after discount
double totalCost; // Total cost
double savings;

// Input for the number of units sold.
cout << "Enter the number of units sold: ";
cin >> unitsSold;

// Make sure a positive number was entered.
while (unitsSold  < 0)
{
    cout << "Invalid input" << endl;
    cout << "Enter the number of unit sold:";
    cin >> unitsSold;
}

// Determine the discount percentage.
if (unitsSold < 10)
discountPct = 0.00;
else if (unitsSold >= 10 && unitsSold <= 19)
discountPct = 0.20;
else if (unitsSold >= 20 && unitsSold <= 49)
discountPct = 0.30;
else if (unitsSold >= 50 && unitsSold <= 99)
discountPct = 0.40;
else if (unitsSold >= 100 && unitsSold <= 149)
discountPct = 0.45;
else 
discountPct = 0.50;

// Calculate the unit cost after the discount.
discountCost = UNIT_PRICE - (UNIT_PRICE * discountPct);

// Calculate total cost.
totalCost = unitsSold * discountCost;

//Calculating Savings
savings = (UNIT_PRICE * unitsSold) - totalCost ;

// Display the total cost.
cout << fixed << showpoint << setprecision(2);
cout << "The total cost of the purchase is $" << totalCost << endl;
cout << "You saved $" << savings << " dollars today.";

return 0;
}