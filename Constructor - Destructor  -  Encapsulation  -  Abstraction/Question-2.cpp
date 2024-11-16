//Write a program of Addition, Subtraction, Division, Multiplication using constructor


#include <iostream>

using namespace std;

class Calculator
{
private:
    double num1;

    double num2;

public:

    Calculator(double a, double b) : num1(a), num2(b) {}


    double add() 
    {
        return num1 + num2;
    }

    double subtract()
     {
        return num1 - num2;
    }

    double multiply() 
    {
        return num1 * num2;
    }


    double divide() 

    {
        if (num2 != 0)
        
         {
            return num1 / num2;
        } else 
        
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main()

 {
    double a, b;

    cout << "Enter two numbers: ";

    cin >> a >> b;
 
    Calculator calc(a, b);

    cout << "Addition: " << calc.add() << endl;

    cout << "Subtraction: " << calc.subtract() << endl;

    cout << "Multiplication: " << calc.multiply() << endl;

    cout << "Division: " << calc.divide() << endl;

    return 0;
}
