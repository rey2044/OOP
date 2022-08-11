#include<iostream.h>
#include<conio.h>
class test
{
	public:
		void fun()
		{
			cout<<"\nFunction Call";
		}
		test()
		{
			cout<<"\nConstructor Call";
		}
		~test()
		{
			cout<<"\nDestructor Call";
		}
};
class demo
{
	public:
	void exm()
	{
		cout<<"\nDemo Function Call";
	}
	demo()
	{
		cout<<"\nDemo Constructor Call";
	}
	~demo()
	{
		cout<<"\nDemo Destructor Call";
	}
};
void main()
{
	clrscr();
	test t;
	demo d;
	t.fun();
	d.exm();
	getch();
}





