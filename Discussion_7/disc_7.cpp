
//Week 7 Discussion

//50 coins were put into an automatic coin counter and the total value the machine calculated was 1 dollar. 
//Can you find out how many of the coins were pennies, nickles, dimes, and half-dollars? 
//Can you explain how you found the answer?


#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int coins = 0, penny = 0 ,dimes = 0, nickle = 0, half_dollar = 0;
    double penny_value = 0.01, nickle_value = 0.05, dimes_value = 0.10, half_dollars_value = 0.50, dollar = 1.0 , live_count = 0.0;
    

     cout << setiosflags(ios::fixed);
    cout << setprecision(2);

    cout << dollar << endl;
    cout << live_count << endl;
    cout << coins << endl;
    cout << half_dollar << endl;
    cout << nickle << endl;
    cout << dimes << endl;
    cout << penny << endl;
}