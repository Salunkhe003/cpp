//check whether the number is amstrong or not
#include <iostream.h>
#include <conio.h>

void main()
{
  int no,ori_no,rem,result;
  clrscr();
  result=0;

    cout<<"enter the number"<<endl;
    cin>>no;

      ori_no=no;
      while(ori_no!=0)
      {
	rem=ori_no%10;
	result+=rem*rem*rem;ss
	ori_no=ori_no/10;
      }

	if(result==no)
	{
	  cout<<"number is amstrong"<<no;
	}
	else
	{
	  cout<<"number is not amstrong"<<no;
	}
	getch();
}