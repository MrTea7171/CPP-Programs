#include<conio.h>
#include<iostream.h>
/*
Looping Statement - For Loop
*/
void main()
{
	int number,fact=1,i;
	clrscr();
	cout<<"Enter number : ";
	cin>>number;
	
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<number<<" is "<<fact;
	getch();
}

