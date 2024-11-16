//WAP to create simple calculator using class



#include <iostream>

class Calculator 

{
public:

    double add(double a, double b)
    
     {
   return a + b;
    }

    double subtract(double a, double b) 
    
    {
        return a - b;
    }


    double multiply(double a, double b) 
    
    {
        return a * b;
    }

    double divide(double a, double b) 
    
    {
        if (b != 0) 
        {
            return a / b;
        } else 
        
        {
            std::cout << "Error: Division by zero." << std::endl;
            return 0; 
        }
    }
};

int main() 
{
    Calculator calc;
    double num1, num2;
    char operation;

    std::cout << "Simple Calculator" << std::endl;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Choose operation (+, -, *, /): ";
    std::cin >> operation;

    double result;

    switch (operation) 
    {
        case '+':
            result = calc.add(num1, num2);
            break;
        case '-':
            result = calc.subtract(num1, num2);
            break;
        case '*':
            result = calc.multiply(num1, num2);
            break;
        case '/':
            result = calc.divide(num1, num2);
            break;
        default:
            std::cout << "Invalid operation!" << std::endl;
            return 1; 
    }

    std::cout << "Result: " << result << std::endl;
    return 0; 
}
