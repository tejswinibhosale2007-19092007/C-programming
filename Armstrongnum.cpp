#include<iostream>
using namespace std;
int main()
{
int n,temp,rem,sum=0;
cout<<"Enter a no.";
cin>>n;
temp=n;
while(n>0){
rem =n%10;
sum=sum+(rem*rem*rem);
n=n/10;}
if(temp==sum)
cout<<"is an Armstrong no.";
else
cout<<"is not an Armstrong no.";
return 0;
}

