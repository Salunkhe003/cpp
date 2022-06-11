#include <iostream.h>
using namespace std

class A
{
  int a;
  public:
  A()
  {
    a=0;
  }
  friend void showA(A&);
};
void showA(A& x)
{
  cout<<"A::a="<<x.a;
}
void main()
{
 
  A a;
  showA(a);
  
}