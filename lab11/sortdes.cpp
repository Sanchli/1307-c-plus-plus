#include <cstdlib>
#include <iostream>

int main()
{
    int num[10];

    for(int i=0;i<10;i++)
    {
        std::cout << "Input some numbers: " << std::endl;
        std::cin >> num[i];
    }
}