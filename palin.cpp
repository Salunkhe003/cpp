//check the number is palimdrome or not
#include<iostream.h>
#include<conio.h>

void main()
{
  int no,rem,rev,temp;
  clrscr();
  rev=0;

    cout<<"enter the number"<<endl;
    cin>>no;

      temp=no;
      while(no>0)
      {
	rem=no%10;
	rev=(rev*10)+rem;
	no=no/10;
      }

	if(temp==rev)
	{
	  cout<<"number is palindrome";
	}
	else
	{
	  cout<<"number is not palindrome";
	}
	getch();
}