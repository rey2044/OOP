#include<iostream.h>
#include<conio.h>
class mark
{
	private:
		int m1,m2,m3;
	protected:
		void gm()
		{
			cout<<"\n Enter Marks:";
			cin>>m1>>m2>>m3;
		}
		void pm()
		{
			cout<<"\n Mark1:"<<m1;
			cout<<"\n Mark2:"<<m2;
			cout<<"\n Mark3:"<<m3;
		}
};
class stud:private mark
{
	private:
		int sid;
		char sn[25];
	public:
		void g()
		{
			cout<<"\n Enter Sid & Name:";
			cin>>sid>>sn;
			gm();
		}
		void p()
		{
			cout<<"\n Sid:"<<sid;
			cout<<"\n Name:"<<sn;
			pm();
		}
};
void main()
{
	clrscr();
	stud s;
	s.g();
	s.p();
	getch();
}