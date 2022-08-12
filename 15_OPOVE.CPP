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
			cout<<"Enter String:";
			cin>>s;
		}
		int operator/(char c)
		{
			int i,v=0;
			for(i=0;i<strlen(s);i++)
			{
				if(s[i]==c)
					v++;
			}
			return v;
		}
};
void main()
{
	clrscr();
	str s;
	char c;
	s.g();
	cout<<"Enter Character to Search:";
	cin>>c;
	cout<<"\n Total="<<s/c;
	getch();
}