#include<conio.h>
#include<iostream.h>
/*
Conditional Statement - Switch Case
*/
void main()
{
	int month;
	clrscr();
	cout<<"Enter month number to see month name : ";
	cin>>month;
	
	switch(month)
	{
		case 1:
			cout<<"January";
		break;
		case 12:
			cout<<"December";
		break;
		case 5:
			cout<<"May";
		break;
		default:
			cout<<"Invalid Month Number";
	}
	getch();
}