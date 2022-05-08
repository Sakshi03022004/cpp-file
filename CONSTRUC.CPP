#include<iostream.h>
#include<conio.h>
class demo
{
 private:  int a,b,c;
 public: demo();
 void show()
 {
 cout<<"\n"<<"a="<<a<<"b="<<b<<"c="<<c;
 }
 };
 demo::demo()
 {
 cout<<"\n constructor called";
 cout<<"\n enter value for a,b & c";
 cin>>a>>b>>c;
 }
 void main()
 {
 clrscr();
 class demo x;
 x.show();
 getch();
 }