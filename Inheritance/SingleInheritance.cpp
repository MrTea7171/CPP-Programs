#include<iostream>
using namespace std;
class Calc
{
	public:
	int a,b,c;
	void getData()
	{
		cout<<"Enter 1st No. : ";
		cin>>a;
		cout<<"Enter 2nd No. : ";
		cin>>b;
	}
	void add()
	{
		c=a+b;
		cout<<"Addition = "<<c<<endl;
	}
	void sub()
	{
		c=a-b;
		cout<<"Subtraction = "<<c<<endl;
	}
};
class SubCalc:public Calc
{
	public:
	void mul()
	{
		c=a*b;
		cout<<"Multiplication = "<<c<<endl;
	}
	void div()
	{
		c=a/b;
		cout<<"Division = "<<c<<endl;
	}
};
int main()
{
	SubCalc ca;
	ca.getData();
	ca.add();
	ca.getData();
	ca.sub();
	ca.getData();
	ca.mul();
	ca.getData();
	ca.div();
    return 0;
}