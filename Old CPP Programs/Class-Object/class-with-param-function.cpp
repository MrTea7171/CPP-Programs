#include<iostream.h>
#include<conio.h>

class Addition
{
	public:
	int res;
	void add(int x,int y)
	{
		res=x+y;
		cout<<"Addition = "<<res;
	}
};
void main()
{
	clrscr();
	int p,q;
	cout<<"Enter 1st No. :: ";
	cin>>p;
	cout<<"Enter 2nd No. :: ";
	cin>>q;
	Addition ob;
	ob.add(p,q);
	getch();
}