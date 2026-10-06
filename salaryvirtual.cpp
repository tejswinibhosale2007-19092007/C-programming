#include <iostream>

class Employee {
protected:
    double baseSalary = 30000.0; 

public:
  
    virtual double calculateSalary() {
        return baseSalary;
    }
};

class Manager : public Employee {
private:
    double bonus = 15000.0;

public:
    double calculateSalary() override {
        return baseSalary + bonus;
    }
};

class Developer : public Employee {
private:
    double allowance = 8000.0;

public:
    double calculateSalary() override {
        return baseSalary + allowance;
    }
};

int main() {
    Manager mgr;
    Developer dev;

    Employee* emp1 = &mgr;
    Employee* emp2 = &dev;

    std::cout << "Manager Salary: $" << emp1->calculateSalary() << "\n";
    std::cout << "Developer Salary: $" << emp2->calculateSalary() << "\n";

    return 0;
}

