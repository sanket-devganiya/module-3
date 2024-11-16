//Write a program to calculate the area of circle, rectangle and triangle
// Function Overloading
// breadth
//rea* breadth
//i * Area *Area


#include <iostream>
using namespace std;

class AreaCalculator 

{
public:
 
    double area(double length, double breadth) 
    {
        return length * breadth;
    }
 
    double area(double base, double height, char triangle) 
    {
        return 0.5 * base * height;
    }

 
    double area(double radius) 
    {
        const double Pi = 3.14159;
        return Pi * radius * radius;
    }
};

int main() 

{
    AreaCalculator calculator;

    double length = 5.0, breadth = 4.0;
    double base = 6.0, height = 3.0;
    double radius = 7.0;

    cout << "Area of Rectangle: " << calculator.area(length, breadth) << endl;
    cout << "Area of Triangle: " << calculator.area(base, height, 't') << endl;
    cout << "Area of Circle: " << calculator.area(radius) << endl;

    return 0;
}
