//to get factorial of a number
#include <iostream.h>
#include <conio.h>

void main()
{
  int i,fact=1,num;
  clrscr();

    cout<<"enter the number"<<endl;
    cin>>num;

      for(i=1;i<=num;i++)
      {
	fact=fact*i;
      }

	cout<<" \n factorial of a number is";
	cout<<fact<<endl;
	getch();
}