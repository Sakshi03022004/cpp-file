#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int a;
 void read()
 {
 a=10;
 }
 };
 class demo1:public demo
 {
 public:
 int b;
 void read_b()
 {
 b=10;
 }
 };
 class demo2:public demo1
 {
 public:
 int c;
 void display()
 {
 c=a*b;
 cout<<c;
 }
 };
 void main()
 {
 clrscr();
 demo2 d1;
 d1.read();
 d1.read_b();
 d1.display();
 getch();
 }