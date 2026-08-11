#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

     void sub(Complex c)
    {
        cout << "Subtraction = "
             << real - c.real << " + "
             << imag - c.imag << "i";
    }

};

int main()
{
    Complex c1, c2;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    c1.sub(c2);

    return 0;
    }
