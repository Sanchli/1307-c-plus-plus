        #include <iostream>
        #include <cstdlib>
        #include <ctime>
        using namespace std;
        
        //Function prototype
        int sum(int,int,int);
        
        int main()
        {
        int number1,number2,number3,total;
        srand(time(0));

        //randomize the number generation
        system("clear");

        //Generates 3 random numbers with the rand function
        number1 = rand() % 9 + 0;
        number2 = rand() % 9 + 0;
        number3 = rand() % 9 + 0;

        //Function to obtain the sum of all three numbers
        total = sum(number1,number2,number3);

        //Outputs the program title, the three numbers chosen out of random, and the sum of all numbers to user.
        cout << "Lottery Number Helper\n" << endl;
        cout << "The numbers are " << number1 << ", " << number2 << ", and " << number3 << "." << endl;
        cout << "The total for all the numbers will be " << total <<  ".\n" << endl;
        return 0;
        }

        //Sum function for three numbers returns the result.
        int sum(int number1, int number2, int number3)
        {
                int result;
                result = number1 + number2 + number3;
                return result; 
        }
        //10 points - correct use of rand function
        //10 points - correct output



