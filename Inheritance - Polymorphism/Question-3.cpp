//Create a class person having members name and age. Derive a class student
//ving member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)


#include <iostream>
#include <string>

class Person 

{
protected:
    std::string name;
    int age;

public:
    void initializePerson(const std::string& n, int a) 
    
    {
        name = n;
        age = a;
    }

    void displayPerson() const 
    
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : virtual public Person 

{
protected:
    float percentage;

public:
    void initializeStudent(const std::string& n, int a, float p) 
    
    {
        initializePerson(n, a);
        percentage = p;
    }

    void displayStudent() const {
        displayPerson();
        std::cout << "Percentage: " << percentage << std::endl;
    }
};

class Teacher : virtual public Person 
{
protected:
    float salary;

public:
    void initializeTeacher(const std::string& n, int a, float s) 
    {
        initializePerson(n, a);
        salary = s;
    }

    void displayTeacher() const 
    {
        displayPerson();
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main()
{
    Student student;
    Teacher teacher;

    student.initializeStudent("SANKET DEVGANIYA ", 18, 85.5);
    teacher.initializeTeacher("JAYDEEP RAMANUJ SIR ", 28, 70000);

    std::cout << "\nStudent Details:\n";
    student.displayStudent();

    std::cout << "\nTeacher Details:\n";
    teacher.displayTeacher();

    return 0;
}
