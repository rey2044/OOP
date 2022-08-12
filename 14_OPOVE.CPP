#include<iostream.h>
#include<conio.h>
class num
{
	private:
		int a,b;
	public:
		void operator*()
		{
			cout<<"Enter the value of A:";
			cin>>a;
			cout<<"Enter the value of B:";
			cin>>b;
		}
		void operator+(int n)
		{
			cout<<"\n Add A="<<a+n;
			cout<<"\n Add B="<<b+n;
		}
		void operator-(int n)
		{
			cout<<"\n Sub A="<<a-n;
			cout<<"\n Sub B="<<b-n;
		}
};
void main()
{
	clrscr();
	int n;
	num N;
	*N;
	cout<<"Enter the Number to Add and Subtract:";
	cin>>n;
	N+n;
	N-n;
	getch();
}