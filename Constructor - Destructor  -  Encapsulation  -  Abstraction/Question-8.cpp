//Write a C++ program to implement a class called Student that has private
//member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display
//the student's information. Accept address from each student implement
//using of aggregation


 #include <iostream>
#include <string>

class Address 

{
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zipCode;

public:
    Address(const std::string& str, const std::string& cty, const std::string& st, const std::string& zip)
        : street(str), city(cty), state(st), zipCode(zip) {}

    void displayAddress() const
    
     {
        std::cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode << std::endl;
    }
};

class Student 

{
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    float marks;
    Address address;

public:
    Student(const std::string& n, const std::string& cls, int roll, float m, const Address& addr)
        : name(n), studentClass(cls), rollNumber(roll), marks(m), address(addr) {}

    char calculateGrade() const 
    
    {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 50) return 'D';
        else return 'F';
    }

    void displayStudentInfo() const 
    
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
        address.displayAddress();
    }
};

int main()

 {
    std::string name, studentClass, street, city, state, zipCode;
    int rollNumber;
    float marks;

    std::cout << "Enter student name: ";
    std::getline(std::cin, name);
    std::cout << "Enter class: ";
    std::getline(std::cin, studentClass);
    std::cout << "Enter roll number: ";
    std::cin >> rollNumber;
    std::cout << "Enter marks: ";
    std::cin >> marks;
    std::cin.ignore();

    std::cout << "Enter street: ";
    std::getline(std::cin, street);
    std::cout << "Enter city: ";
    std::getline(std::cin, city);
    std::cout << "Enter state: ";
    std::getline(std::cin, state);
    std::cout << "Enter zip code: ";
    std::getline(std::cin, zipCode);

    Address address(street, city, state, zipCode);

    Student student(name, studentClass, rollNumber, marks, address);

    student.displayStudentInfo();

    return 0;
}
