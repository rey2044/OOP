#include<iostream.h>
#include<conio.h>
class cric
{
		int cid;
		char cn[25];
		int scr;
	public:
		void get();
		void put();

};
void main()
{
	clrscr();
	int n;
	cric c[3];
	for(i=0;i<3;i++)
	{
		c[i].get();
	}
	for(i=1;i<3;i++)
	{
		c[i].put();
	}
	getch();
}
void cric::get()
{
	cout<<"Enter Cricketer Id:";
	cin>>cid;
	cout<<"Enter Cricketer's Name:";
	cin>>cn;
	cout<<"Enter Score Here:";
	cin>>scr;
}
void cric::put()
{
	cout<<"\nCricketer's ID:"<<cid;
	cout<<"\nCricketer's Name:"<<cn;
	cout<<"\n"<<cn<<"'s score:"<<scr;
}

