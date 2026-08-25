#include<iostream>
using namespace std;
class employee
{
int empld;
string name;
float salary;

public:
     employee(){
        empld=0;
        name="Unknown";
        salary=0;
     }
   employee(int id ,string n,float s)
   {
        empld=id;
        name=n;
        salary=s;
   }
  employee(const employee &e)
  {
       empld=e.empld;
       name=e.name;
       salary=e.salary;
  }
void display()
{
       cout<<"employee id:33"<<endl;
       cout<<"name:Tejswini"<<endl;
       cout<<"salary:100000"<<endl;
       cout<<"------"<<endl;
}
};
int main ()
{
    employee e1;
    cout<<"default constructor:"<<endl;
    e1.display();
    employee e2(33,"Tejswini",100000);
    cout<<"parameterized constructor:"<<endl;
    e2.display();
   employee e3(e2);
   cout<<"copy constructor:"<<endl;
   e3.display();

return 0;
}



