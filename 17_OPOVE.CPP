#include<iostream.h>
#include<conio.h>
#include<string.h>
class str
{
	private:
		char s[25];
	public:
		void g()
		{
			cout<<"\n Enter String:";
			cin>>s;
		}
		friend int operator+(str,char);
};
int operator+(str s,char c)
{
	int i,v=0;
	for(i=0;i<strlen(s.s);i++)
	{
		if(s.s[i]==c)
		v++;
	}
	return v;
}
void main()
{
	clrscr();
	str s;
	char c;
	s.g();
	cout<<"\n Enter Character to find:";
	cin>>c;
	cout<<"\n TOtal occurances:"<<s+c;
	getch();
}