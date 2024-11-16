//Write a C++ Program to show access to Private Public and Protected using Inheritance


#include <iostream>
using namespace std;

class Base 
{
private:
    int privateVar = 10;

protected:
    int protectedVar = 20;

public:
    int publicVar = 30;

    int getPrivateVar()
{
        return privateVar;
    }
};

class Derived : public Base 
{
public:
    void showAccess() 
    {
        cout << "Protected Var: " << protectedVar << endl;
        cout << "Public Var: " << publicVar << endl;
    }
};

int main() 
{
    Derived obj;

    obj.showAccess();

    cout << "Public Var : " << obj.publicVar << endl;

    cout << "Private Var : " << obj.getPrivateVar() << endl;

    return 0;
}
