#include<iostream>
using namespace std;
class fraction
{
private:
int num,den;
public:
fraction(int n=0,int d=1):num(n),den(d){}
fraction add(const fraction &f)
{
return fraction(num*f.den + f.num*den,den*f.den);
}
fraction sub(const fraction &f)
{
return fraction(num*f.den - f.num*den,den*f.den);
}
void display() const
{
cout<<num<<"/"<<den<<endl;
}
};
int main()
{
fraction f1(1,2),f2(3,4);
fraction sum=f1.add(f2);
fraction diff=f1.sub(f2);
cout<<"First Fraction: ";
f1.display();
cout<<"Second Fraction: ";
f2.display();
cout<<"Addition: ";
sum.display();
cout<<"Substraction: ";
sum.display();
return 0;
}

