#include<iostream.h>
#include<conio.h>
class test
{
	public:
		void t()
		{
			cout<<"\n Function T without any parameter";
		}
		void t(int i)
		{
			cout<<"\n Function T with one parameter";
		}
};
void main()
{
	clrscr();
	test t;
	t.t();
	t.t(1);
	getch();
}