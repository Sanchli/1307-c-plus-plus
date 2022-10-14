#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");
    int pumpkins = 0, i;
    double weight,total, average, largest, amount = 0,count = 0 ;

    cout << "Pumpkin weight average" << endl;

    //Prompts user for pumpkins weights
cout << "How many pumpkins would you like to weight?" << endl;
cin >> pumpkins;

while(pumpkins > amount)
{
    for(i = 1; i <= pumpkins; i++)
    {
        cout << "Enter the amount for pumpkin #" << i << ":" << endl;
        cin >> weight;

        while(largest < weight)
        {
            largest = weight;
        }
        total = total + weight; 
        amount ++;
   }
}
//average equation with precision setting making sure result only prints two decimal places. 
average = total / pumpkins;
cout << setiosflags(ios::fixed);
cout << setprecision(2);

//Outputs the result of pumpkin average
cout << "The average for " << pumpkins <<" pumpkins is " << average << " pounds." << endl;
cout << "And the largest pumpkin weighs " << largest << " pounds." << endl;
return 0;    
system("PAUSE");



}