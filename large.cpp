//demonstrate conditional statements
#include <iostream.h>
#include <conio.h>

void main()
{
  int a,b,c;
  clrscr();

    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    cout<<"enter value of c"<<endl;
    cin>>c;

       if((a>b)&&(a>c))
       {
	 cout<<"a is larger than b and c";
       }
       else if((b>a)&&(b>c))
       {
	 cout<<"b is larger than a and c";
       }
       else
       {
	 cout<<"c is larger than a and b";
       }
       getch();
}
