#include<iostream.h>
#include<conio.h>

class Addition
{
	public:
	int num1,num2,res;
	void add()
	{
		cout<<"Enter 1st Number : ";
		cin>>num1;
		cout<<"Enter 2nd Number : ";
		cin>>num2;
		res=num1+num2;
		cout<<"Addition = "<<res<<"\n";
	}
};
void main()
{
	clrscr();
	Addition ob;
	ob.add();
	getch();
}