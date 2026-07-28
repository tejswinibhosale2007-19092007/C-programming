#include<iostream>
using namespace std;
int main()
{
int num,reversenum=0,reminder;
cout<<"Enter an integer:";
cin>>num;
while (num !=0){
reminder = num %10;
reversenum=reversenum*10+reminder;
num/=10;
}
cout<<"Reversed Number="<<reversenum<<endl;
return 0;
}
