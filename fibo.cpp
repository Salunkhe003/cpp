//to generate fibonacci series
#include <iostream.h>
#include <conio.h>

void main()
{
  int no,n1=0,n2=1,sum,i;
  clrscr();

    cout<<"enter number"<<endl;
    cin>>no;

     for(i=0;i<=no;i++)
     {
       cout<<n1<<endl;
       sum=n1+n2;
       n1=n2;
       n2=sum;
     }
     getch();
}