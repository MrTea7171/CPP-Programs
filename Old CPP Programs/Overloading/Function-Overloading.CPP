#include<iostream.h>
#include<conio.h>
//same function name but different sets parameter
/* 1. Number
   2. Data type
   3. Order
*/
class Addition
{
	public:
	int num1,num2,res;
	void add()
	{
		num1=5;
		num2=6;
		res=num1+num2;
		cout<<"Non Param Addition = "<<res<<endl;
	}
	void add(int a,int b)
	{
		num1=a;
		num2=b;
		res=num1+num2;
		cout<<"Integer Addition = "<<res<<endl;
	}
	void add(float a,float b)
	{
		num1=a;
		num2=b;
		res=num1+num2;
		cout<<"Float Addition = "<<res<<endl;
	}
	/*add(int a,int b)
	add(int a,float b)
	add(float b,int a)*/
};
void main()
{
	clrscr();
	Addition ob;
	ob.add();
	int p,q;
	cin>>p>>q;
	ob.add(p,q);
	float x,y;
	cin>>x>>y;
	ob.add(x,y);
	getch();
}