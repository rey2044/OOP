#include<iostream.h>
#include<conio.h>
class test
{
	public:
		void fun()
		{
			cout<<"\n Function Call";
		}
		void operator+()
		{
			cout<<"\n Operator Plus";
		}
};
void main()
{
	clrscr();
	test t;
	t.fun();
	+t;
	getch();
}