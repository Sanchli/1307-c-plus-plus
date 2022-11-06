#include <cstdlib>
#include <iostream>

int main()
{
    int array_size = 10;
    int nums[array_size];
    int minValue,minIndex,temp;


    for(int p=0;p<10;p++)
    {
        std::cout << "Input some numbers: " << std::endl;
        std::cin >> nums[p];
    }

    for(int j=0; j < (array_size -1); j++)
    {
        minIndex = j;
        for(int i = j+1; i < array_size; i++)
            {
                if(nums[i] < nums[minIndex])
                {
                    minIndex = i;
                }
            }
        if(minIndex != j)
        {
            temp = nums[minIndex];
            nums[minIndex] = nums[j];
            nums[j] = temp;
        }
    }
    for (int t=0; t < array_size; t++) 
    {
        std::cout << nums[t]<< " ";
    }   

}