//Write a program to find the multiplication values and the cubic values using inline function



 #include <iostream>

using namespace std;

inline int multiply(int a, int b) 
{
    return a * b;
}

inline int cube(int a) 
{
    return a * a * a;
}

int main() 
{
    int num1, num2;


    cout << "Enter two numbers for multiplication: ";

    cin >> num1 >> num2;

    int multiplicationResult = multiply(num1, num2);

    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiplicationResult << endl;


    cout << "Enter a number to find its cube: ";

    cin >> num1;


    int cubicResult = cube(num1);

    cout << "Cube of " << num1 << " is: " << cubicResult << endl;

    return 0;
}
