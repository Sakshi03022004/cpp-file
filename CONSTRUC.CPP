#include<iostream.h>
#include<conio.h>
class demo
{ public:
demo()
{
  cout<<"constructor are called"<<endl;
}
demo(int x)
{
  cout<<"value of a"<<x<<endl;
}
demo(int a,int b)
{
  cout<<"addtion is:->"  << a+b<<endl;
  }
  };
  void main()
  {
  demo d1;
  demo d2(12);
  demo d3(10,10);
  getch();
}