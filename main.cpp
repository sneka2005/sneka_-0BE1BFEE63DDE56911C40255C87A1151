#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the attributes
    BankAccount(std::string accNumber, std::string accHolderName, double initialBalance)
        : accountNumber(accNumber), accountHolderName(accHolderName), accountBalance(initialBalance) {}

    // Method to deposit money into the account
    void deposit(double amount) {
        accountBalance += amount;
        std::cout << "Deposited $" << amount << " into the account." << std::endl;
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (accountBalance >= amount) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account." << std::endl;
        } else {
            std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder Name: " << accountHolderName << std::endl;
        std::cout << "Account Balance: $" << accountBalance << std::endl;
    }
};

int main() {
    // Create a BankAccount instance
    BankAccount myAccount("123456789", "John Doe", 1000.0);

    // Test deposit and withdrawal functionality
    myAccount.deposit(500.0);
    myAccount.displayBalance();

    myAccount.withdraw(200.0);
    myAccount.displayBalance();

    myAccount.withdraw(2000.0);  // Attempt to withdraw more than the balance
    myAccount.displayBalance();

    return 0;
}
