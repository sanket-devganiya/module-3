//Write a program to Mathematic operation like Addition, Subtraction,
//ltiplication, Division Of two number using different parameters and
// Overloading


#include <iostream>

using namespace std;

class MathOperations 

{
public:

    int operate(int a, int b) 
    
    {
        return a + b;
    }


    int operate(int a, int b, char op) 
    
    {
        if (op == '-') 
        {
            return a - b;
        }
        return 0;
    }


    double operate(double a, double b) 
    
    {
        return a * b;
    }

    double operate(int a, int b, double op) 
    
    {
        if (op == '/')
     {
            if (b != 0) 
            
            {
                return static_cast<double>(a) / b;
            } else 
            
            {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        }
        return 0;
    }
};

int main()

{
    MathOperations math;


    cout << "Addition: " << math.operate(10, 5) << endl;


    cout << "Subtraction: " << math.operate(10, 5, '-') << endl;


    cout << "Multiplication: " << math.operate(10.0, 5.0) << endl;

    cout << "Division: " << math.operate(10, 5, '/') << endl;

    return 0;
}
