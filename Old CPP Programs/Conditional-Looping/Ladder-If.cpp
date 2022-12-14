#include<conio.h>
#include<iostream.h>
/*
Conditional Statement - Ladder if (if else if)
*/
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter 1st No. : ";
	cin>>a;
	cout<<"Enter 2nd No. : ";
	cin>>b;
	cout<<"Enter 3rd No. : ";
	cin>>c;
	
	if(a>b && a>c)
	{
		cout<<"Number 1 is greater";
	}
	else if(b>a && b>c)
	{
		cout<<"Number 2 is greater";
	}
	else if(c>a && c>b)
	{
		cout<<"Number 3 is greater";
	}
	getch();
}