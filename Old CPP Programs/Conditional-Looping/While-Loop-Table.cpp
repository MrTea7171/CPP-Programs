#include<conio.h>
#include<iostream.h>
/*
Looping Statement - While Loop
*/
void main()
{
	int number,res,i=1;
	clrscr();
	cout<<"Enter number : ";
	cin>>number;
	
	while(i<=10)
	{
		res=number*i;
		cout<<number<<" X "<<i<<" = "<<res<<"\n";
		i++;
	}
	getch();
}