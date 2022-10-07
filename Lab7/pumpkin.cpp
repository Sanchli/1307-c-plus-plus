#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");
    int pumpkins = 0;
    double weight,total, average, largest;

    cout << "Pumpking weight average" << endl;

    //Prompts user for pumpkins weights
    cout << "Enter the weights of all your pumpkins(0 to exit):";
    cin >> weight;


//for loop will add all pumpkin weights together and counts pumpkins for a total.
//Sentinel loop will continue to run until 0 is entered. 
for (weight; weight != 0; pumpkins++)
{
    //if statement to input largest pumpkin in variable. Will check until a larger pumpkin is entered. 
    if(weight > largest)
    {
        largest = weight;
    }
    total = total + weight;
    cout << "Enter next pumkin weight(0 to exit)" << endl;
    cin >> weight;
}

//average equation with precision setting making sure result only print two decimal places. 
average = total / pumpkins;
cout << setiosflags(ios::fixed);
cout << setprecision(2);

//Outputs the result of pumpkin average
cout << "The average for " << pumpkins <<" pumpkins is " << average << " pounds." << endl;
cout << "And the largest pumpkin weighs " << largest << " pounds." << endl;
return 0;    
system("PAUSE");



}