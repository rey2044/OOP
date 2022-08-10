#include<stdio.h>
#include<conio.h>
struct stud
{
  int sid;
  char sn[25];
}s;
void g();
void p();
void main()
{
    g();
    p();
}
void g()
{
    printf("Enter Student ID:-");
    scanf("%d",&s.sid);
    printf("Enter Student Name:-");
    scanf("%s",s.sn);
}
void p()
{
    printf("\n Student ID:-%d",s.sid);
    printf("\n student Name:-%s",s.sn);
}
