#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void substraction(Complex c1, Complex c2) {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }

    void display() {
        cout << real << " - " << imag << "i" << endl;
    }
};

int main() {
    
    Complex num1, num2, sub;
    
    cout << "For First Complex Number:\n" << endl;
    num1.input();

    cout << "For Second Complex Number:\n" << endl;
    num2.input();
    
    sub.substraction(num1, num2);

    cout << "The Sum is:\n ";
    sub.display();
     
    return 0;
}

