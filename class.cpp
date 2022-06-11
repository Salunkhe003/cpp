#include <iostream.h>
#include <conio.h>

class operate
{
  public:
  int a,b,c,m,d,e;
  void read()
  {
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
  }
    void add()
    {
      c=a+b;
      cout<<"\n addition of two numbers is:"<<c;
    }
      void mul()
      {
	m=a*b;
	cout<<"\n multiplication of twonumbers is:"<<m;
      }
	void div()
      {
	d=a/b;
	cout<<"\n division of twonumbers is:"<<d;
      }
	void mod()
      {
	e=a%b;
	cout<<"\n modulation of twonumbers is:"<<e;
      }
};
void main()
{
  clrscr();
  operate  a1;
    a1.read();
    a1.add();
    a1.mul();
    a1.div();
    a1.mod();
    getch();
}