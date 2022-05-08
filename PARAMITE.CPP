#include<iostream.h>
#include<conio.h>
class demo
{
  public:
  demo(int x,int y)
  {
  cout<<"value of x="<<"x"<<x<<"\t"<<"y"<<y<<endl;
  }
  void show()
  {
  cout<<"simple function called";
  }
  };
  void main()
  {
  clrscr();
  demo d1(12,13);
  d1.show();
  getch();
  }