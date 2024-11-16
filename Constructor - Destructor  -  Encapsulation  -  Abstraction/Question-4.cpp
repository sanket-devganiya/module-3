//Write a C++ program to implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.



#include <iostream>

using namespace std;

class BankAccount 
{
private:
    int accountNumber;

    double balance;

public:

    BankAccount(int accNum, double initialBalance) 
    {
        accountNumber = accNum;

        balance = initialBalance >= 0 ? initialBalance : 0;
    }


    void deposit(double amount) 

    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Successfully deposited: " << amount << endl;
        } else 
        
        {
            cout << "Deposit amount must be positive!" << endl;
        }
    }


    void withdraw(double amount)
     {
        if (amount > 0 && amount <= balance)
        
         {
            balance -= amount;
            cout << "Successfully withdrew: " << amount << endl;
        } else if (amount > balance)
        
         {
            cout << "Insufficient funds for this withdrawal!" << endl;
        } else 
        
        {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }


    void displayAccountDetails() const 
    {
        cout << "Account Number:  " << accountNumber << endl;

        cout << "Current Balance: " << balance << endl;
    }
};

int main() 

{
    int accNum;
    double initialBalance;


    cout << "Enter account number: ";
    cin >> accNum;

    cout << "Enter initial balance: ";
    cin >> initialBalance;


    BankAccount myAccount(accNum, initialBalance);

    myAccount.displayAccountDetails();


    double depositAmount;

    cout << "Enter amount to deposit: ";

    cin >> depositAmount;

    myAccount.deposit(depositAmount);

    myAccount.displayAccountDetails();


    double withdrawAmount;

    cout << "Enter amount to withdraw: ";

    cin >> withdrawAmount;

    myAccount.withdraw(withdrawAmount);

    myAccount.displayAccountDetails();

    return 0;
}
