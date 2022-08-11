#include<iostream.h>
#include<conio.h>
class test
{
	public:
		void fun()
		{
			cout<<"Function Call";
		}
		test()
		{
			cout<<"Constructor Call";
		}
		~test()
		{
			cout<<"Destructor Call";
		}
};
void main()
{
	clrscr();
	test t;
	t.fun();
	getch();
}





