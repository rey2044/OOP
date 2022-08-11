#include<iostream.h>
#include<conio.h>
class emp
{
		int eid;
		char en[25];
		int sal;
	public:
		void g();
		void p();

};
void main()
{
	clrscr();
	int i;
	emp e[5];
	for(i=0;i<5;i++)
	{
		e[i].g();
	}
	for(i=1;i<5;i++)
	{
		e[i].p();
	}
	getch();
}
void emp::g()
{
	cout<<"Enter Employee Id:";
	cin>>eid;
	cout<<"Enter Employee's Name:";
	cin>>en;
	cout<<"Enter Salary:";
	cin>>sal;
}
void emp::p()
{
	cout<<"\nEmployee's ID:"<<eid;
	cout<<"\nEmployee's Name:"<<en;
	cout<<"\n"<<en<<"'s Salary:"<<sal;
}

