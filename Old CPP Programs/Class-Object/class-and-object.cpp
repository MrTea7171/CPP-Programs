#include<iostream.h>
#include<conio.h>

class Addition
{
	public:
	int num1,num2,res;
};
void main()
{
	clrscr();
	Addition ob;
	cout<<"Enter 1st Number : ";
	cin>>ob.num1;
	cout<<"Enter 2nd Number : ";
	cin>>ob.num2;
	ob.res=ob.num1+ob.num2;
	cout<<"Addition = "<<ob.res;
	getch();
}