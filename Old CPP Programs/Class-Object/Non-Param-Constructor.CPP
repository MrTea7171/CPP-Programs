#include<iostream.h>
#include<conio.h>
/*
1. special type of function
2. constructor name should be same as class name
3. always public
4. No return type
5. automatically called when we create object of class
*/
class Addition
{
	float num1,num2,res;
	public:
	Addition()
	{
		cout<<"Constructor Block"<<endl;
		num1=0;
		num2=0;
	}
	void setValue()
	{
		cout<<"Function Block"<<endl;
		num1=7;
		num2=8;
	}
	void displayData()
	{
		cout<<"Num1 = "<<num1<<endl;
		cout<<"Num2 = "<<num2<<endl;
		res=num1+num2;
		cout<<"Res = "<<res<<endl;
	}
};
void main()
{
	clrscr();
	Addition ob;
	ob.displayData();
	ob.setValue();
	ob.displayData();
	getch();
}