#include<iostream>
using namespace std;
class intrest
{
  private:
  double principal;
  double rate;
  double time;
  public:
  void acceptdetails()
  {
    cout<<"Enter principal:";
    cin>>principal;
    cout<<"Enter the rate of intrest(%):";
    cin>>rate;
    cout<<"Enter the time(in year):";
    cin>>time;
  }
  void displaydetails()
  {
    double simpleintrest=(principal*rate*time)/100;
    cout<<"Simple intrest:"<<simpleintrest<<endl;
  }
};
int main()
{
  intrest si;
  si.acceptdetails();
  si.displaydetails();
  return 0;
}
