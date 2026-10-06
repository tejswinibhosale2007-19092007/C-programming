#include<iostream>
using namespace std;
class Shape
{
public:
  virtual void area()
  {
    cout<<"Area of Shape"<<endl;
  }
};
class Square:public Shape
{
  float s;
public:
  Square(float side )
  {
    s=side;
  }
  void area() override
  {
    cout<<"Area of Square="<<s*s<<endl;
  }
};
class Rectangle:public Shape
{
  float l,b;
public:
  Rectangle(float length,float breadth)
  {
    l=length;
    b=breadth;
  }
  void area() override
  {
    cout<<"Area of Rectangle="<<l*b<<endl;
  }
};
int main()
{
  Square s(12,6);
  Rectangle r(2,5);
  
  s.area();
  r.area();
  
  return 0;
}

