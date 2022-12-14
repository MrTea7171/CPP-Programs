#include<iostream.h>
#include<conio.h>
void add(*int,*int)
void main()
{
	int x,int y;
	clrscr();
	cin>>x>>y;
	add(&x,&Y);
	getch();
}
void add(int*a,int*b)
{
	int c;
	c=*a+*b;
	cout<<c;
}