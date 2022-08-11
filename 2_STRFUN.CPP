 #include<iostream.h>
 #include<conio.h>
 #include<string.h>
 void main()
 {
	clrscr();
	int n;
	char s1[25]="abcd",s2[25]="xyz",s3[25],*s4;
	cout<<"\n STRLEN S1:"<<" "<<strlen(s1);
	strcpy(s3,s1);
	cout<<"\n S3:"<<s3<<"S1:"<<s1;
	strcat(s2,s1);
	cout<<"\n S2:"<<s2<<" S1:"<<s1<<" S3:"<<s3;
	n=strcmp(s1,s2);
	cout<<"\n"<<n;
	s4=strrev(s1);
	cout<<"\n S4:"<<" "<<s4;
	getch();
 }
