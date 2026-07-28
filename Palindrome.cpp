#include<iostream>
using namespace std;
int main()
{
int i,num,reminder, reversenum=0;
cout<<"Enter a integer:";
cin>>i;
num=i;
while(num>0){
reminder=num%10;
reversenum = (reversenum*10)+reminder;
num=num/10;
}
if(i==reversenum){
cout<<i<<"is a palindrome no."<<endl;
}else{
cout<<i<<"is not a palindrome no."<<endl;
}
return 0;
}

