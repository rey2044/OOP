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
	cin>>cid;
	cout<<"Enter Cricketer's Name:";
	cin>>cn;
}
void cric::put()
{
	cout<<"\n Cricketer's ID:"<<cid;
	cout<<"\n Cricketer's Name:"<<cn;
}

