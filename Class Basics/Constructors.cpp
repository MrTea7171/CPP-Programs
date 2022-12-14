# include<iostream>
using namespace std;
    
/*program for creating default constructors

*/
class rectangle
{
private:
	int length;
	int breadth;
public:
	rectangle()
	{
		length=1;
		breadth=1;
	}

    rectangle(int l,int b)
	{
		length=l;
		breadth=b;
	}

    rectangle(rectangle &r)
	{
		length=r.length;
		breadth=r.breadth;
	}

	int area()
	{
		return length*breadth;
	}
};
int main()
{
	rectangle r1;
	cout<<r1.area()<<endl;
    rectangle r2(20,10);
	cout<<r2.area()<<endl;
    rectangle r3(r2);
	cout<<r3.area()<<endl;
}