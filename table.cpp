//to genarate table of a given number
#include <iostream.h>
#include <conio.h>

class table
{
  public:
  int a,i,c;
  void read();
  void display();
};
void table::read()
{
  cout<<"enter a number"<<endl;
  cin>>a;
}
void table::display()
{
  for(i=1;i<=10;i++)
  {
    c=a*i;
    cout<<c<<endl;
  }
}
  void main()
  {
  clrscr();
  table t1;
  t1.read();
  t1.display();
  getch();
  }
