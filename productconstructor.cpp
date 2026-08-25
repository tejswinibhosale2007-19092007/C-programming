#include <iostream>
using namespace std;

class Product {
private:
    int productId;
    string name;
    float price;
    int quantity;

public:
    Product() {
        productId = 0;
        name = "Unknown";
        price = 0;
        quantity = 0;
    }
    Product(int id, string n, float p, int q) {
        productId = id;
        name = n;
        price = p;
        quantity = q;
    }
    Product(const Product &p) {
        productId = p.productId;
        name = p.name;
        price = p.price;
        quantity = p.quantity;
    }
    void display() {
        cout << "Product ID = " << productId << endl;
        cout << "Product Name = " << name << endl;
        cout << "Price = " << price << endl;
        cout << "Quantity = " << quantity << endl;
        cout << "Total Price = " << price * quantity << endl;
        cout<<"-------------"<<endl;
    }
};

int main() {

    Product p1;
    cout << "Default Constructor:" << endl;
    p1.display();

    Product p2(1920, "Camera", 150000, 2);
    cout << "Parameterized Constructor:" << endl;
    p2.display();
    
    Product p3(p2);
    cout << "Copy Constructor:" << endl;
    p3.display();

    return 0;
}

