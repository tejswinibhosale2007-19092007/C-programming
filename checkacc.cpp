#include <iostream>
using namespace std;
class SavingAccount {
    string acc_name;
    int acc_no;
    float balance;
    float interest_rate;

public:
    SavingAccount(string name, int no, float bal, float rate) {
        acc_name = name;
        acc_no = no;
        balance = bal;
        interest_rate = rate;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance in Savings Account!\n";
    }

    void applyInterest() {
        balance += (balance * interest_rate / 100);
    }

    float getBalance() {
        return balance;
    }

    void display() {
        cout << "\n--- Savings Account Info ---\n";
        cout << "Name: " << acc_name << "\n";
        cout << "Acc No: " << acc_no << "\n";
        cout << "Balance: $" << balance << "\n";
        cout << "Interest Rate: " << interest_rate << "%\n";
    }
};

class CheckingAccount {
    string acc_name;
    int acc_no;
    float balance;

public:
    CheckingAccount(string name, int no, float bal) {
        acc_name = name;
        acc_no = no;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance in Checking Account!\n";
    }

    float getBalance() {
        return balance;
    }

    void display() {
        cout << "\n--- Checking Account Info ---\n";
        cout << "Name: " << acc_name << "\n";
        cout << "Acc No: " << acc_no << "\n";
        cout << "Balance: $" << balance << "\n";
    }
};
int main() {

    SavingAccount mySavings("Tejswini", 1920, 50000.0, 6.5);

    CheckingAccount myChecking("Tejswini", 1921, 20000.0);
    mySavings.display();
    myChecking.display();
    float amount;
    cout << "\nEnter amount to deposit in Savings Account: $";
    cin >> amount;
    mySavings.deposit(amount);
    cout << "\nApplying interest to Savings Account...";
    mySavings.applyInterest();
    cout << "\n\nEnter amount to deposit in Checking Account: $";
    cin >> amount;
    myChecking.deposit(amount);
    cout << "\nEnter amount to withdraw from Checking Account: $";
    cin >> amount;
    myChecking.withdraw(amount);
    mySavings.display();
    myChecking.display();
    return 0;
}
    
