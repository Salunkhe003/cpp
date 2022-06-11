#include <iostream.h>
#include <conio.h>

class account
{
  public:
  float salary;
  void display();
};
void account::display()
{
  salary=60000;
  cout<<"salary is:"<<salary<<endl;
}
class programmer:public account
{
  public:
  float bonus;
  void display1();
};
void programmer::display1()
{
  bonus=5000;
  cout<<"bonus is:"<<bonus<<endl;
}
void main()
{
  clrscr();
  programmer p1;
  p1.display();
  p1.display1();
  getch();
}