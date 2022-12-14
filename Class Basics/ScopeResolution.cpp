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
    rectangle(int l,int b)
	{
		length=l;
		breadth=b;
	}

	int area()
	{
		return length*breadth;
	}

    // inline int perimeter();
    int perimeter();
};

int rectangle::perimeter()
{
    return 2*(length+breadth);
}
int main()
{

    rectangle r2(20,10);
	cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
    
}