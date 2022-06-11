//to demonstrate cunstuctor
#include <iostream.h>
#include <conio.h>

class add
{
  int a;
  public:
  int b,c,z;
  void read();
  void display();
  add()
  {
  a=100;
  }
};
  void add::read()
  {
    cout<<"enter value of  b and c"<<endl;
    cin>>b>>c;
  }
    void add::display()
    {
      z=a+b+c;
      cout<<"\n addition of two numbers is:"<<z;
    }
void main()
{
  clrscr();
  add a1;
  a1.read();
  a1.display();
  getch();
}