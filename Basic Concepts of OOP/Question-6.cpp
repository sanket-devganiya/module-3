//Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.


#include <iostream>
#include <cmath>

class Circle 

{
private:

double radius;

public:
    Circle(double r)
    
     {
        radius = r;
    }


    double area() 
    {
        return M_PI * radius *  radius; 
    }


    double circumference() 
    
    {
        return 2 * M_PI * radius;
    }


    void display() {
        std::cout << "Circle with radius: " << radius << std::endl;

        std::cout << "Area: " << area() << std::endl;

        std::cout << "Circumference: " << circumference() << std::endl;
    }

};

int main() 

{
    double radius;

    std::cout << "Enter the radius of the circle: ";

    std::cin >> radius;

    Circle circle(radius);

    circle.display();

    return 0; 
}
