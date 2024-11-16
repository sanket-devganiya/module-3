//Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.

#include <iostream>
#include <string>
using namespace std;

class Car

 {
private:
    string company;
    string model;
    int year;

public:
    void setCompany(const string &c) 
    {
        company = c;
    }


    string getCompany() const 
    {
        return company;
    }


    void setModel(const string &m) 
    
{
        model = m;
    }

    string getModel() const 

    {
        return model;
    }

    void setYear(int y)

     {
        year = y;
    }

    int getYear() const 

    {
        return year;
    }

    void displayDetails() const 
    {
        cout << "Company: " << company << endl;

        cout << "Model: " << model << endl;

        cout << "Year: " << year << endl;
    }
};

int main() 
{
    Car myCar;


    string company, model;

    int year;

    cout << "Enter car company: ";

    getline(cin, company);

    myCar.setCompany(company);

    cout << "Enter car model: ";

    getline(cin, model);
    
    myCar.setModel(model);

    cout << "Enter car year: ";

    cin >> year;

    myCar.setYear(year);

    cout << "\nCar Details:\n";

    myCar.displayDetails();

    return 0;
}
