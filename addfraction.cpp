#include <iostream>
using namespace std;

class Fraction {
    int numerator, denominator;

public:
    void getData() {
        cin >> numerator >> denominator;
    }

    void add(Fraction f1, Fraction f2) {
        numerator = (f1.numerator * f2.denominator) +
                    (f2.numerator * f1.denominator);
        denominator = f1.denominator * f2.denominator;
    }

    void display() {
        cout << "Sum = " << numerator << "/" << denominator;
    }
};

int main() {
    Fraction f1, f2, f3;

    cout << "Enter first fraction (numerator denominator): ";
    f1.getData();

    cout << "Enter second fraction (numerator denominator): ";
    f2.getData();

    f3.add(f1, f2);

    f3.display();

    return 0;
}
