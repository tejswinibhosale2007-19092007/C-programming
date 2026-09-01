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
            cout << "Insufficient balance!\n";
    }

    void applyInterest() {
        balance += (balance * interest_rate / 100);
    }

    void display() {
        cout << "\n--- Account Info ---\n";
        cout << "Name: " << acc_name << "\n";
        cout << "Acc No: " << acc_no << "\n";
        cout << "Balance: $" << balance << "\n";
        cout << "Interest Rate: " << interest_rate << "%\n";
    }
};


int main() {
    SavingAccount myAccount("Tejswini", 1920, 50000.0, 6.5);

    myAccount.display();

    float amount;
    cout << "\nEnter deposit amount: $";
    cin >> amount;

    myAccount.deposit(amount);

    cout << "\nApplying interest...";
    myAccount.applyInterest();

    myAccount.display();

    return 0;
}

