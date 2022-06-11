#include <iostream.h>
#include <conio.h>

class add
{
  public:
  int no,i,sum;
  void read();
  void display();
};

void add::read()
{
  cout<<"enter the number:"<<endl;
  cin>>no;
}

  void add::display()
  {
    sum=0;
    while(no>0)
    {
      i=no%10;
      sum=sum+1;
      no=no/10;
    }
    cout<<"\n addition of digit:"<<sum;

  }
  void main()
  {
  clrscr();
  add a1;
  a1.read();
  a1.display();
  getch();
  }




