#include<iostream>
using namespace std;
class time
{
private:
int hours,minutes,seconds;
public:
time(int h=0,int m=0,int s=0):hours(h),minutes(m),seconds(s){}
time add(const time &t);
int h=hours+t.hours;
int m=minutes+t.minutes;
int s=seconds+t.seconds;
if(s>=60)
{
s=s-60;m++;
}
if(m>=60)
{
m=m-60;h++;
}
return time(h,m,s);
}
time sub(const time &t)
int h=hours-t.hours;
int m=minutes-t.minutes;
int s=seconds-t.seconds;
if(s<0)
{
s=s+60;m--;
}
if(m<0)
{
m=m+60;h--;
}
return time(h,m,s);
}
void display() const
{
cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}
};
int main()
{
time t1(5,45,30),t2(2,30,45);
time sum=t1,add(t2);
time diff=t1.sub(t2);
cout<<"First Time: ";
t1.display();
cout<<"Second Time: ";
t2.display();
cout<<"Addition: ";
sum.display();
cout<<"Substraction: ";
diff.display();
return 0;
}
