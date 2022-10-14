#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int volume(double,double, double);

int jellybeans(double,double);

int main()
{
    system("clear");

    double height, radius, cylinder_volume, pi = 3.14159,total;
    
    //Prompt user for the Height and radius of the cylinder
    cout << "Enter the height in inches for your cylinder: " << endl;
    cin >> height;
    cout << "Enter the radius in inches for your cylinder: " << endl;
    cin >> radius;

    //calls two functions the cylinder volume and total
    cylinder_volume = volume(height,radius,pi);
    total = jellybeans(cylinder_volume, pi);

    //Outputs the total of jellybeans in the containter 
    cout << "The total amount of jellybeans in your container is " << total << endl;
}

int volume(double num1, double num2, double pi)
{
    //This Funtions get the volume of the containter size then returns the value to the main function
    int cylinder_volume;

    //equation to obtain the cylinder volume
    cylinder_volume = pi * (num1 * pow(num2,2));
    
    //return value
    return cylinder_volume;
}

int jellybeans(double cylinder_volume,double pi)
{
    //function for the amount of jellybeans in containter.
    int bean_count;
    double bean_volume, bean_height = .7874, bean_radius = .2952;

    //equation for jellbean volume
    bean_volume = pi * (bean_height * pow(bean_radius,2));

    //for loop to subtract a single jelly bean from the cylinder volume and increment until the cylinder volume is less than the bean volume
    for (bean_count = 0; bean_volume < cylinder_volume; bean_count++)
    {
        cylinder_volume = cylinder_volume - bean_volume;
        cout << cylinder_volume << endl;
    }

    //bean count return value. 
    return bean_count;
}