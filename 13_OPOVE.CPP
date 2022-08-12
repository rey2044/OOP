#include<iostream.h>
#include<conio.h>
class num
{
	private:
		int a,b;
	public:
		void operator-()
		{
			cout<<"Enter the value of A:";
			cin>>a;
			cout<<"Enter the value of B:";
			cin>>b;
		}
		void operator+()
		{
			cout<<"\n Square of A:"<<a*a;
			cout<<"\n Square of B:"<<b*b;
			cout<<"\n Total of Squares:"<<a*a+b*b;
		}
};
void main()
{
	clrscr();
	num n;
	-n;
	+n;
	getch();
}