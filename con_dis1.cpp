#include <iostream.h>
#include <conio.h>

class demo
{
  public:
  demo()
  {
  cout<<"constructor is called\n";
  }
  ~demo()
  {
  cout<<"destructor is called\n";
  }
};
void main()
{
  //clrscr();
  demo d1;
  getch();
}