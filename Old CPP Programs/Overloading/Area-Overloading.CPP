#include<stdio.h>
#include<conio.h>
class Functionoverload
{
	double ar;
	public:
	void area(float r)
	{
		ar=3.142f*r*r;
		cout<<"the area of circle is"<<ar<<endl;
	}
	void area(float h,int b)
	{
		ar=0.5f*b*h;
		cout<<"the area of triangle"<<ar<<endl;
	}
	void area( int l,int b1)
	{
		ar=l*b;
		cout<<"the area of rectanle"<<ar<<end;
	}
};
void main()
{
	clrscr();
	Functionoverload ob;
	float r,h;
	int l,b,b1;
	cout<<"enter value of r";
	cin>>r;
	cout<<"enter value of h";
	cin>>h;
	cout<<"enter value of b";
	cin>>b;
	cout<<"enter the value of b1";
	cin>>b1;
	cout<<"enter the value of l";
	cin>>l;
	ob.area(float r);
	ob.area(float h,int b);
	ob.area(int l,int b1);
	getch();
}




