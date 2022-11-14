#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream pay;
    ofstream check;
    char name[20];
    double hourly_pay,hours,amount, total = 0;

    pay.open("payroll.dat",ios::in);
    check.open("check.dat",ios::out);

    if(!pay.is_open())
    {
        cout << "Error opening input file" << endl;
        system("PAUSE");
        exit(1);
    }
    if(!check.is_open())
    {
        cout << "Error opening output file" << endl;
        system("PAUSE");
        exit(1);
    }

    pay >> name >> hourly_pay >> hours;

    while (pay)
    {
        check << name << " " << "= ";
        amount = hourly_pay * hours;
        check << "$" << amount << endl;
        total = total + amount;
        pay >> name >> hourly_pay >> hours;
    }
    check << "The Total pay for all employees is " << "$" << total;

    pay.close();
    check.close();
    system("PAUSE");
    return 0;




    


}