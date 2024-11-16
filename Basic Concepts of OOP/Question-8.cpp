//Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.


#include <iostream>

#include <string>

class Person 

{
private:
    std::string name;

    int age;

    std::string country;

public:

    void setValues(const std::string& personName,

     int personAge, const std::string& personCountry) 
    
    {
        name = personName;

        age = personAge;

        country = personCountry;

    }


    std::string getName() const 
    {
       return name;
    }


    int getAge() const
    
     {
        return age;
    }


    std::string getCountry() const 
    {
        return country;
    }


    void display() const
    
     {
        std::cout << "Name: " << name << std::endl;

        std::cout << "Age: " << age << std::endl;

        std::cout << "Country: " << country << std::endl;
    }
};

int main() 

{
    Person person;

    std::string name;

    int age;

    std::string country;

    std::cout << "Enter name: ";

    std::getline(std::cin, name);

    std::cout << "Enter age: ";

    std::cin >> age;

    std::cin.ignore(); 

    std::cout << "Enter country: ";

    std::getline(std::cin, country);


    person.setValues(name, age, country);

    person.display();

    return 0; 
}
