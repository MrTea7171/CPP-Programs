#include<iostream.h>
#include<conio.h>

class Addition
{
	float num1,num2,sum;
	public:
	Addition(int x,int y)
	{
	    num1=x;
	    num2=y;
	}
	void calculate()
	{
		sum=num1+num2;
		cout<<"Addition = "<<sum<<endl;
	}
};
void main()
{
	clrscr();
	cout<<"Enter numbers : ";
	int p,q;
	cin>>p>>q;
	Addition ob(p,q);
	ob.calculate();
	getch();
}