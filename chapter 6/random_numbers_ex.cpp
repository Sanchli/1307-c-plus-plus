#include <cstdlib>
#include <iostream>
#include <ctime>


using namespace std;
int main()
{
    int number, counter;

    unsigned seed = time(0);
    srand(seed);

    for (counter = 1; counter <= 5; counter++)
    {
        number = 1 + rand() % 100;
        cout << number << endl;
    }
    return 0;
}