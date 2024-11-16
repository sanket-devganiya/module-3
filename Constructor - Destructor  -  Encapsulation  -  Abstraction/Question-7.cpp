//Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.


 #include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }


    bool isValidDate(int d, int m, int y) const 
    
    {
        if (y < 1 || m < 1 || m > 12 || d < 1) 
        
        {
            return false;
        }
        int daysInMonth[] = {31, (isLeapYear(y) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return d <= daysInMonth[m - 1];
    }

public:

    Date(int d = 1, int m = 1, int y = 2000) {
        setDate(d, m, y);
    }


    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else 
        
        {
            std::cout << "Invalid date! Setting to default (1/1/2000)." << std::endl;
            day = 1;
            month = 1;
            year = 2000;
        }
    }


    void getDate(int &d, int &m, int &y) const 
    {
        d = day;
        m = month;
        y = year;
    }


    void displayDate() const 
    
    {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main()

 {
    int day, month, year;

    std::cout << "Enter day, month, and year (e.g., 1/11/2006): ";
    std::cin >> day >> month >> year;

    Date date;
    date.setDate(day, month, year);
    date.displayDate();

    return 0;
}
