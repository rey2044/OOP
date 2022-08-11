#include<iostream.h>
#include<conio.h>
class stud
{
		int sid;
		char sn[25];
	public:
		void g()
		{
			cout<<"Enter Student Id:";
			cin>>sid;
			cout<<"Enter Student Name:";
			cin>>sn;
		}
		void p()
		{
			cout<<"\n Student ID:"<<sid;
			cout<<"\n Student Name:"<<sn;
		}
}s;
void main()
{
	clrscr();
	s.g();
	s.p();
	getch();
}