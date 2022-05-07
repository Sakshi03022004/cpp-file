#include<iostream.h>
#include<conio.h>
class stud
{
private:  int m1,m2,m3,rollno,total;
	   float avg();
	   char name[20];
public:
	  void get();
	  void put();
};
void stud::get()
{
	cout<<"\nEnter roll Number:";
	cin>>rollno;
	cout<<"\nEnter the  Name:";
	cin>>name;
	cout<<"\nEnter Marks in subject 1:";
	cin>>m1;
	cout<<"\nEnter marks in subject 2:";
	cin>>m2;
}
void stud::put()
{
       tot
