#include<iostream.h>
#include<conio.h>
class num
{
	private:
		int a;
	public:
		void g()
		{
			cout<<"\n Enter A:";
			cin>>a;
		}
		friend void operator+(num);
		friend void operator-(num);
		friend void operator*(num);
};
void operator+(num n)
{
	cout<<"\n Double:"<<n.a*2;
}
void operator-(num n)
{
	cout<<"\n Square:"<<n.a*n.a;
}
void operator*(num n)
{
	cout<<"\n Cube:"<<n.a*n.a*n.a;
}
void main()
{
	clrscr();
	num n;
	n.g();
	+n;
	-n;
	*n;
	getch();
}