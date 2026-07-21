#include<iostream>
using namespace std;
int main ()
{
int num1,num2,num3;
cout<<"Enter three no.";
cin>>num1>>num2>>num3;
if (num1>=num2 && num1>=num3){
cout<<"Largest no:"<<num1<<endl;
}
else if (num2>=num1 && num2>=num3){
cout<<"Largest no:"<<num2<<endl;
}
else{
cout<<"Largest no:"<<num3<<endl;
}
return 0;
}

