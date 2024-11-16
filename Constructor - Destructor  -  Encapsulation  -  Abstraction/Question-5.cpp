//Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.


#include <iostream>

class Triangle 
{
private:
    double side1, side2, side3;

public:

    Triangle(double a, double b, double c) : side1(a), side2(b), side3(c) {}


    bool isEquilateral() const 
    {
        return (side1 == side2) && (side2 == side3);
    }


    bool isIsosceles() const
     {
        return (side1 == side2) || (side2 == side3) || (side1 == side3);
    }


    bool isScalene() const
     {
        return (side1 != side2) && (side2 != side3) && (side1 != side3);
    }
};

int main() 
{
    double a, b, c;

    std::cout << "Enter the lengths of the three sides of the triangle: ";

    std::cin >> a >> b >> c;

    Triangle triangle(a, b, c);

    if (triangle.isEquilateral()) 
    
    {
        std::cout << "The triangle is equilateral." << std::endl;
    } else if (triangle.isIsosceles())
    
     {
        std::cout << "The triangle is isosceles." << std::endl;
    } else if (triangle.isScalene()) 
    
    {
        std::cout << "The triangle is scalene." << std::endl;
    } else
    
     {
        std::cout << "The sides do not form a valid triangle." << std::endl;
    }

    return 0;
}
