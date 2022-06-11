//drmonstrate destructor
#include <iostream.h>
#include <conio.h>

class sum
{
  int a;
  public:
  int b,c,z;
  void read();
  void display();
    ~sum()
    {
      a=100;
    }
};
void sum::read()
{
  cout<<"enter value of b and c"<<endl;
  cin>>b>>c;
}
  void sum::display()
  {
    z=a+b+c;
    cout<<"addition of given numbers is:"<<z;
  }
void main()
{
  clrscr();
  sum s1;
  s1.read();
  s1.display();
  getch();
}