#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter a positive no.";
cin>>n;
cout<<"The first"<<n<<"natural no. are:"<<endl;
for(int i=1; i<=n; ++i){
cout<<i<<" ";
}
cout<<endl;
return 0;
}
