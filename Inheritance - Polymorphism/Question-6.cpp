//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance



#include <iostream>
using namespace std;

 
class Base 
{
public:
    Base() 
    {
        cout << "Base class constructor called" << endl;
    }
};

 
class Derived1 : public Base 
{
public:
    Derived1() 
    {
        cout << "Derived1 class constructor called" << endl;
    }
};


class Derived2 : public Derived1 
{
public:
    Derived2() 
    {
        cout << "Derived2 class constructor called" << endl;
    }
};

int main() 
{
    Derived2 obj;
    return 0;
}
