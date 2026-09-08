#include<iostream>
using namespace std;
class Result
{
private:
float marks[5];
float total,percentage;
public:
void accept()
{
cout<<"Enter marks of 5 subjects:\n";
for(int i=0;i<5;i++)
{
cout<<"subject"<<i+1<<":";
cin>>marks[i];
}
}
void calculate()
{
total=0;
for(int i=0;i<5;i++){
total=total+marks[i];
}
percentage=total/5;
cout<<"\nTotal Marks ="<<total;
cout<<"\nPercentage ="<<percentage<<"%";
bool pass = true;
for(int i=0;i<5;i++)
{
if (marks[i]<40)
{
pass=false;
break;
}
}
if(pass)
cout<<"\nResult = Pass"<<endl;
else
cout<<"\nResult = Fail"<<endl;
}
};
int main()
{
Result r;
r.accept();
r.calculate();
return 0;
}
