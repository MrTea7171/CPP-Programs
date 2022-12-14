#include<iostream.h>
#include<conio.h>

class Factorial
{
	float num,fact;
	public:
	Factorial(int x)
	{
	    num=x;
	}
	void calculate()
	{
		int i;
		fact=1;
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		cout<<"Factorial = "<<fact<<endl;
	}
};
void main()
{
	clrscr();
	cout<<"Enter number : ";
	int p;
	cin>>p;
	Factorial ob(p);
	ob.calculate();
	getch();
}