#include<iostream.h>
#include<conio.h>

class Factorial
{
	float num,fact;
	public:
	/*Factorial()
	{
	    cout<<"Enter number"<<endl;
	    cin>>num;
	}*/
	void getData()
	{
	    cout<<"Enter number"<<endl;
	    cin>>num;
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
	Factorial ob;
	ob.getData();
	ob.calculate();
	getch();
}