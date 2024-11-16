//Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor


 #include <iostream>
#include <string>

class Employee
 {
private:
    std::string name;
    int employeeID;
    double salary;

public:

    Employee(const std::string& empName, int empID, double initialSalary)

        : name(empName), employeeID(empID), salary(initialSalary) {}


    void setSalaryBasedOnPerformance(int performanceRating) 
    
    {
        if (performanceRating >= 1 && performanceRating <= 5)
        
     {
            switch (performanceRating) 
            {
                case 5:
                    salary += salary * 0.20; 
                    break;
                case 4:
                    salary += salary * 0.10; 
                    break;
                case 3:
                    salary += salary * 0.05; 
                    break;
                case 2:
                    salary -= salary * 0.05; 
                    break;
                case 1:
                    salary -= salary * 0.10; 
                    break;
            }
        } else
        
         {
            std::cout << "Invalid performance rating. It must be between 1 and 5." << std::endl;
        }
    }


    void displayEmployeeDetails() const
     {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Current Salary: " << salary << std::endl;
    }
};

int main() 
{
    std::string name;
    int employeeID;
    double initialSalary;
    int performanceRating;


    std::cout << "Enter employee name: ";
    std::getline(std::cin, name);
    std::cout << "Enter employee ID: ";
    std::cin >> employeeID;
    std::cout << "Enter initial salary: ";
    std::cin >> initialSalary;


    Employee employee(name, employeeID, initialSalary);


    std::cout << "Enter performance rating (1-5): ";
    std::cin >> performanceRating;

    employee.setSalaryBasedOnPerformance(performanceRating);

    employee.displayEmployeeDetails();

    return 0;
}
