#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real; 
        temp.imag = imag + obj.imag; 
        return temp;
    }

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl; 
    }
};

int main() {
    
    Complex c1(10, 5);
    Complex c2(11, 7);  

    Complex c3 = c1 + c2; 

    cout << "First Complex Number: ";
    c1.display();
    
    cout << "Second Complex Number: ";
    c2.display();
    
    cout << "Sum: ";
    c3.display();

    return 0;
}

