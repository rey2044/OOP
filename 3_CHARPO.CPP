#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char s1[25]="ABCD";
	char *s2="ABCD";
	cout<<"\n S1:"<<s1<<" "<<sizeof(s1)<<" "<<strlen(s1);
	cout<<"\n S2:"<<s2<<" "<<sizeof(s2)<<" "<<strlen(s2);
	getch();
}