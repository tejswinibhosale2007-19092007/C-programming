#include<iostream>
using namespace std;
class Number{
int x;
public:Number(){
x=5;
}
void operator++(){
x++;
}
void operator--(){
x--;
}
void display(){
cout<<"value="<<x<<endl;
}
};
int main (){
Number n;
n.display();
++n;
cout<<"After increment :";
n.display();
--n;
cout<<"After decrement :";
n.display();
return 0;
}

