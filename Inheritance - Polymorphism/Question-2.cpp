// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>

class Shape 
{
protected:
    float length;
    float width;

public:
    void setDimensions(float l, float w) 
    {
        length = l;
        width = w;
    }
};

class Rectangle : public Shape 
{
public:
    float area() {
        return length * width;
    }
};

int main() 
{
    Rectangle rect;
    float length, width;

    std::cout << "Enter length of the rectangle: ";

    std::cin >> length;

    std::cout << "Enter width of the rectangle: ";

    std::cin >> width;

    rect.setDimensions(length, width);

    std::cout << "Area of the rectangle: " << rect.area() << std::endl;

    return 0;
}
