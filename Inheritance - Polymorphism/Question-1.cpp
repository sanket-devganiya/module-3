//. Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)



#include <iostream>
#include <string>

class Cricketer 

{
protected:
    std::string name;
    int age;

public:
    void inputCricketerData() {
        std::cout << "Enter cricketer's name: ";
        std::getline(std::cin, name);
        std::cout << "Enter cricketer's age: ";
        std::cin >> age;
        std::cin.ignore();
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    int inningsPlayed;
    int bestPerformance;

public:
    void inputData() {
        inputCricketerData();
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter innings played: ";
        std::cin >> inningsPlayed;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
        std::cin.ignore();
    }

    float calculateAverageRuns() const
 {
        if (inningsPlayed > 0) 
        {
            return static_cast<float>(totalRuns) / inningsPlayed;
        }
        return 0.0;
    }

    void displayData() const 
    {
        std::cout << "Cricketer Name: " << name << std::endl;

        std::cout << "Age: " << age << std::endl;

        std::cout << "Total Runs: " << totalRuns << std::endl;

        std::cout << "Innings Played: " << inningsPlayed << std::endl;

        std::cout << "Best Performance: " << bestPerformance << std::endl;
        
        std::cout << "Average Runs: " << calculateAverageRuns() << std::endl;
    }
};

int main() 
{
    Batsman batsman;
    batsman.inputData();
    batsman.displayData();

    return 0;
}
