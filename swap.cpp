#include <iostream.h>
#include <conio.h>

void main()
{
  int x,y,temp;
  clrscr();

    cout<<"enter value of x"<<endl;
    cin>>x;
    cout<<"enter value of y"<<endl;
    cin>>y;

       cout<<"value of x before swapping:-"<<x<<endl;
       cout<<"value of y before swapping:-"<<y<<endl;

	 temp=x;
	 x=y;
	 y=temp;

	   cout<<"value of x after swapping:-"<<x<<endl;
	   cout<<"value of y after swapping:-"<<y<<endl;

	   getch();

}