#include <iostream.h>
#include <conio.h>

class reverseno
{
  public:
  int n,reverse,i;
  void read();
  void display();
};
  void reverseno::read()
  {
    cout<<"enter the number to reverse"<<endl;
    cin>>n;
  }

  void reverseno::display()
  {
    reverse=0;
    while(n>0)
    {
    i=n%10;
    reverse=reverse*10+i;
    n=n/10;
    }
    cout<<"\n reverse number is:"<<reverse;
  }

void main()
{
  clrscr();
  reverseno r1;
  r1.read();
  r1.display();
  getch();
}