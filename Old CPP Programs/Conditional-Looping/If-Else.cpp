#include<conio.h>
#include<iostream.h>
/*
Conditional Statement - If Else
*/
void main()
{
	char name[10];
	int age;
	clrscr();
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter your age : ";
	cin>>age;
	
	if(age>18)
	{
		cout<<"Hello "<<name<<", you are eligible for vote";
	}
	else
	{
		cout<<"Hello "<<name<<", you are not eligible for vote";
	}
	getch();
}