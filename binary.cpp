#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    
    Number(int v = 0) {
        value = v;
    }

    Number operator+(Number const& obj) {
        Number result;
        result.value = this->value + obj.value; 
        return result;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(15); 
    Number num2(25); 
    Number sum;

    sum = num1 + num2; 

    cout << "First ";
    num1.display();
    cout << "Second "; 
    num2.display();
    cout << "Total "; 
    sum.display();

    return 0;
}

