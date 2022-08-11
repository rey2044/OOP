#include<iostream.h>
#include<conio.h>
class cric
{
		int cid;
		char cn[25];
	public:
		void get();
		void put();

};
void main()
{
	clrscr();
	cric c;
	c.get();
	c.put();
	getch();
}
void cric::get()
{
	cout<<"Enter Cricketer Id:";
	cin>>sid;
	cout<<"Enter Cricketer's Name:";
	cin>>sn;
}
void cric::put()
{
	cout<<"\n Cricketer's ID:"<<sid;
	cout<<"\n Cricketer's Name:"<<sn;
}

