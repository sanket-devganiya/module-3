//Define a class to represent a bank account. Include the following members: Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance


#include <iostream>

#include <string>

class BankAccount 

{
private:
    std::string depositorName;
    std::string accountNumber;
    std::string accountType;
    double balance;

public:

    BankAccount(std::string name, std::string accNumber, std::string accType, double initialBalance) 
    {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }


    void deposit(double amount)
     {
        if (amount > 0)
        
         {
            balance += amount;
            std::cout << "Deposited: " << amount << "\nNew Balance: " << balance << std::endl;
        } else 
        
        {
            std::cout << "Invalid deposit amount!" << std::endl;
        }
    }


    void withdraw(double amount)

     {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            std::cout << "Withdrawn: " << amount << "\nNew Balance: " << balance << std::endl;
        } else if (amount > balance) 
        
        {
            std::cout << "Insufficient balance!" << std::endl;
        } else 
        
        {
            std::cout << "Invalid withdrawal amount!" << std::endl;
        }
    }

    void display() const 
    {
        std::cout << "Depositor Name: " << depositorName << std::endl;

        std::cout << "Account Number: " << accountNumber << std::endl;

        std::cout << "Account Type: " << accountType << std::endl;
        
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main()
 {

    BankAccount account("*****SANKET DEVGANIYA***** ", "XXXX365450", "Savings", 1000.0);

    account.display();

    account.deposit(500.0);

    account.withdraw(200.0);

    account.withdraw(800.0);

    printf("\n");
{

    printf("**********State Bank of India**********");
}
    return 0; 
}
