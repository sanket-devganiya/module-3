//Write a program to find the max number from given two numbers using friend function 


 #include <iostream>
using namespace std;

class Number 
{
    int num;

public:
    Number(int n) : num(n) {}

    friend int findMax(Number &n1, Number &n2);

    void display() 
    
    {
        cout << num << endl;
    }
};

int findMax(Number &n1, Number &n2) 

{
    return (n1.num > n2.num) ? n1.num : n2.num;
}

int main() {
    Number num1(25), num2(40);

    cout << "Number 1: "; num1.display();

    cout << "Number 2: "; num2.display();

    cout << "Maximum number: " << findMax(num1, num2) << endl;

    return 0;
}
