#include<iostream>
using namespace std;
int main()
{
int i,n,sum=0;
cout<<"Enter a no.";
cin>>n;
for(int i=1; i<=n; ++i){
sum += i;
}
cout<<"The sum of n natural no."<<n<<"n natural no. is:"<< sum <<endl;
return 0;
}
