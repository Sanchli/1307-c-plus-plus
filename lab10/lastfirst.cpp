#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int i;

    for(i=0;i<10;i ++)
    {
        cout << "Enter Number:";
        cin >> num[i];
    }
    for(i=9;i>=0;i--)
    {
        cout << num[i] << endl;
    }   
    system("PAUSE");
    return 0;
}