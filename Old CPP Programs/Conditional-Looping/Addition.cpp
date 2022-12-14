#include<conio.h>
#include<iostream.h>
/*
iostream.h (input output stream)
1. Cout = Print
2. Cin = user input
*/
void main()
{
	int num1,num2,result;
	clrscr();
	cout<<"Enter First Number : ";
	cin>>num1;
	cout<<"Enter Second Number : ";
	cin>>num2;
	result=num1+num2;
	cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<result;
	getch();
}