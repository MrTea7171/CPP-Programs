#include<conio.h>
#include<iostream.h>
/*
Looping Statement - Do While Loop
*/
void main()
{
	int number,rev=0,rem=0;
	clrscr();
	cout<<"Enter number : ";
	cin>>number;
	
	do
	{
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
	}
	while(number!=0);
	
	cout<<"Reverse = "<<rev;
	getch();
}

