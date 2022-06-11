//number is even or odd
#include <iostream.h>
#include <conio.h>

void main()
{
  int num;
  clrscr();

    cout<<"enter the number"<<endl;
    cin>>num;

      if(num%2==0)
      {
	cout<<"number is even";
      }
      else
      {
	cout<<"number is odd";
      }
      getch();
}