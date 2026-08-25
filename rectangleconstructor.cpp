#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle() {
        length = 0;
        width = 0;
    }
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    Rectangle(const Rectangle &r) {
        length = r.length;
        width = r.width;
    }
    void displayArea() {
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Area = " << length * width << endl;
        cout<<"----------"<<endl;
    }
};

int main() {
    Rectangle r1;
    cout << "Default Constructor:" << endl;
    r1.displayArea();

    Rectangle r2(15 ,3);
    cout << "Parameterized Constructor:" << endl;
    r2.displayArea();

    Rectangle r3(r2);
    cout << "Copy Constructor:" << endl;
    r3.displayArea();

    return 0;
}

