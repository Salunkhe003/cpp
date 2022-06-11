//demonstrate the concept of constructor
#include <iostream.h>
#include <conio.h>
#include <string.h>

/*class harsh
{
  public:
  int a,b;
  harsh()//default constructor
  {
    a=20;
    b=50;
  }
};
void main()
{
  clrscr();
  harsh h1;
  cout<<"a:"<<h1.a<<endl;
  cout<<"b:"<<h1.b<<endl;
  getch();
}

//demonstrate parameterized constructor

class harsh
{
  private:
  int x,y;
  public:
  harsh(int x1,int y1)
  {
    x=x1;
    y=y1;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y;
  }
};
  void main()
  {
    clrscr();
    harsh h1(1,5);
    getch();
  }

//demonstrate copy constructor

class point
{
  private:
  double x,y;
  public:
  point(double px,double py)
  {
    x=px;
    y=py;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y;
  }
};
void main()
{
  clrscr();
  point b=point(5.4,6.8);
  getch();
}*/

//demonstrate copy constructor

class string
{
  private:
  char *s;
  int size;
  public:
  string(const char *str =NULL);
  ~string()
  {
    delete [] s;
  }
  string(const string&);
  void print()
  {
  cout<<s<<endl;
  }
  void change(const char *);

};
string::string(const char *str)
{
    size=strlen(str);
    s=new char[size + 1];
    strcpy(s,str);
}
void string::change(const char *str)
{
  delete[]s;
  size=strlen(str);
  s=new char[size+1];
  strcpy(s,str);
}
string::string(const string& old_str)
{
    size=old_str.size;
    s=new char[size+1];
    strcpy(s,old_str.s);
}
void main()
{
  clrscr();
  string str1("greeksquiz");
  string str2=str1;

  str1.print();
  str2.print();

  str2.change("greeksforgreek");

  str1.print();
  str2.print();
  getch();
}