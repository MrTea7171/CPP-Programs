#include<iostream.h>
#include<conio.h>
/* 
	Function Definition Outside Class
*/
class Addition
{
	public:
	int res,num1,num2,num3;
	void rishabh(int,int,int);
	void add();
	void sub();
};
/*
return_type classname::functionname(parameters);
:: Scope resolution operator
*/
void Addition::rishabh(int x,int y,int z)
{
	num1=x;
	num2=y;
	num3=z;
}
void Addition::add()
{
	res=num1+num2+num3;
	cout<<"Addition = "<<res<<endl;
}
void Addition::sub()
{
	res=num1-num2-num3;
	cout<<"Subtraction = "<<res<<endl;
}
void main()
{
	clrscr();
	int p,q,r;
	cout<<"Enter 1st No. : ";
	cin>>p;
	cout<<"Enter 2nd No. : ";
	cin>>q;
	cout<<"Enter 3rd No. : ";
	cin>>r;
	Addition ob;
	ob.rishabh(p,q,r);
	ob.add();
	ob.sub();
	getch();
}