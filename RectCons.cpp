#include<iostream>
using namespace std;
class rectangle
{
private:
float length,width;
public:
rectangle()
{
length=0;
width=0;
}
rectangle(float l,float w)
{
length=l;
width=w;
}
rectangle(const rectangle &r)
{
length=r.length;
width=r.width;
}
void display()
{
cout<<"Length: "<<length<<endl;
cout<<"Width: "<<width<<endl;
cout<<"Area: "<<length*width<<endl;
}
};
int main()
{
rectangle r1;
cout<<"Rectangle 1(Default constructor): "<<endl;
r1.display();

rectangle r2(10,5);
cout<<"Rectangle 2(Parameterized constructor): "<<endl;
r2.display();

rectangle r3(r2);
cout<<"Rectangle 3(Copy constructor): "<<endl;
r3.display();
return 0;
}
