#include<iostream.h>
#include<conio.h>
class test
{
	public:
		void t(char c)
		{
			cout<<"\n Function T with char parameter";
		}
		void t(int i)
		{
			cout<<"\n Function T with int parameter";
		}
};
void main()
{
	clrscr();
	test t;
	t.t('1');
	t.t(1);
	getch();
}