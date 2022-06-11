#include <iostream.h>
#include <conio.h>

void swap(int x,int y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;

     cout<<"after swapping"<<endl;
      cout<<"\n value of x is:-"<<x;
       cout<<"\n value of y is:-"<<y;
}
void main()
{
  int a,b;
  clrscr();

    cout<<"enter value of a"<<endl;
     cin>>a;
      cout<<"enter value of b"<<endl;
       cin>>b;

	 swap(a,b);

	   cout<<"\n before swapping"<<endl;
	    cout<<"\n value of a is:-"<<a;
	     cout<<"\n value of b is:-"<<b;
	      getch();
}