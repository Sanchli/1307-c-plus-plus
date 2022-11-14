#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //variable to create and append to file
    ofstream outfile;
    int celsius = 0, fahrenheit;

    //open the temfile.txt and stays open until program closes it. 
    outfile.open("tempfile.txt",ios::out);

    //prints to text file the Temperature Conversion
    outfile << "Temperature Chart" << endl;
    outfile << "Celsius"<< "     " << "Fahrenheit" << endl;

    while(celsius <= 100)
    {
        //Runs formula  then outputs to chart; increments by 10 
        fahrenheit = celsius * 1.8 + 32;
        outfile << celsius << "           " << fahrenheit << endl;
        celsius = celsius + 10 ;
    }
    //closes the text file for temperature conversion
    outfile.close();
    system("PAUSE");
    return 0;    
}