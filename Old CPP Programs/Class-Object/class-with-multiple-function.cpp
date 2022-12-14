#include<iostream.h>
#include<conio.h>
class Addition
{
	public:
	int res,num1,num2,num3;
	void getData(int x,int y,int z)
	{
		num1=x;
		num2=y;
		num3=z;
	}
	void add()
	{
		res=num1+num2+num3;
		cout<<"Addition = "<<res<<endl;
	}
	void sub()
	{
		res=num1-num2-num3;
		cout<<"Subtraction = "<<res<<endl;
	}
};
void main()
{
	clrscr();
	int p,q,r;
	cout<<"Enter 1st No. :: ";
	cin>>p;
	cout<<"Enter 2nd No. :: ";
	cin>>q;
	cout<<"Enter 3rd No. :: ";
	cin>>r;
	Addition ob;
	ob.getData(p,q,r);
	ob.add();
	ob.sub();
	getch();
}