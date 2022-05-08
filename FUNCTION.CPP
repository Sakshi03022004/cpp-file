#include<iostream.h>
#include<conio.h>
class demo
{
 public:
	  int a,b;
	  void show()
	  {
	   cout<<"function called"<<endl;
	   }
	   void show(int x)
	   {
	   a=x;
	   cout<<"value of a"<<endl<<a;
	   }
	   void show(int i,int j)
	   {
	   a=i;
	   b=j;
	   cout<<a+b;
	   }
	   };
	   void main()
	   {
	   clrscr();
	   demo d1;
	   d1.show();
	   d1.show(5);
	   d1.show(7,8);
	   getch();
	   }