#include<iostream>
using namespace std;
class Animal{
public:
string color;
int legs;
string eat;
};
class Bear:public Animal{
public:
int legs=2;
string eat="bear eats meet fish";
string color="black";
void display1(){
cout<<"legs="<<legs<<endl;
cout<<"eat food:"<<eat<<endl;
cout<<"color of animal:"<<color<<endl;
}
};
class Jiraf:public Animal {
public:
int legs=4;
string eat="Jiraf eats grass";
string color="yellow";
void display2(){
cout<<"legs="<<legs<<endl;
cout<<"eat food:"<<eat<<endl;
cout<<"color of animal:"<<color<<endl;
}
};
int main (){
Bear b;
b.display1();
Jiraf j;
j.display2();
return 0;
}


