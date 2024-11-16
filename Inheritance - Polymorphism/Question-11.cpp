//Write a program to swap the two numbers using friend function ut using third variable 



#include <iostream>
using namespace std;

class Number 

{
    int num;

public:

    Number(int n) : num(n) {}
    friend void swapNumbers(Number &n1, Number &n2);


    void display() 
    {
        cout << num << endl;
    }
};


void swapNumbers(Number &n1, Number &n2) 

{
    n1.num = n1.num + n2.num;
    n2.num = n1.num - n2.num;
    n1.num = n1.num - n2.num;
}

int main() {
    Number num1(50), num2(36);

    cout << "Before swapping:" << endl;
    cout << "Number 1: "; num1.display();
    cout << "Number 2: "; num2.display();


    swapNumbers(num1, num2);

    cout << "After swapping:" << endl;
    cout << "Number 1: "; num1.display();
    cout << "Number 2: "; num2.display();

    return 0;
}
