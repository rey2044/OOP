#include<iostream.h>
#include<conio.h>
class match
{
	private:
		int tm,tr,tw;
	protected:
		void gm()
		{
			cout<<"Enter Total Matches:";
			cin>>tm;
			cout<<"Enter Total Runs:";
			cin>>tr;
			cout<<"Enter Total Wickets:";
			cin>>tw;
		}
		void pm()
		{
			cout<<"\nTotal Matches:"<<tm;
			cout<<"\nTotal Runs:"<<tr;
			cout<<"\nTotal Wickets:"<<tw;
		}
};
class cri:private match
{
	private:
		int cid;
		char cn[25];
	public:
		void g()
		{
			cout<<"Enter Cid:";
			cin>>cid;
			cout<<"Enter Name:";
			cin>>cn;
			gm();
		}
		void p()
		{
			cout<<"\nCid:"<<cid;
			cout<<"\nName:"<<cn;
			pm();
		}
};
void main()
{
	clrscr();
	cri c;
	c.g();
	c.p();
	getch();
}