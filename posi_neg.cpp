//number is positive or negative
#include <iostream.h>
#include <conio.h>

void main()
{
  int no;
  clrscr();

    cout<<"enter number"<<endl;
    cin>>no;

      if(no>=0)
      {
	  if(no==0)
	  {
	    cout<<"number neither positive nor negative";
	  }
	  else
	  {
	    cout<<"number is positive";
	  }
      }
      else
      {
	cout<<"number is negative";
      }
      getch();

}