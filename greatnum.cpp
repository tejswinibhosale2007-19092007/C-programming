#include<iostream>
using namespace std;
class greatest
{
  private:
  int num1,num2;
  public:
  void acceptnumbers()
  {
    cout<<"Enter the two numbers:";
    cin>>num1>>num2;
  }
  void displaynum()
  {
    if(num1>num2)
    {
    cout<<"num1 is greater than num2"<<num1<<endl;
    }
    else if(num2>num1)
    {
    cout<<"num2 is greater than num1"<<num2<<endl;
    }
    else
    {
      cout<<"Both number are equal."<<endl;
    }
  }
};

int main()
{
  greatest g;
  g.acceptnumbers();
  g.displaynum();
  return 0;
}
