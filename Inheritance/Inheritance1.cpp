# include<iostream>
using namespace std;
    
/*program for inheritance

*/
class base
{
public:
	int a;
    void display()
	{
	 	cout<<"display of base"<<a<<endl;
	}
};
class derived:public base
{
public:
    void show()
	{
	   	cout<<"show of derived"<<a<<endl;
	}
};
int main()
{
    base b;
    b.a=10;
    b.display();
	derived d;
	d.a=100;
	d.display();
	d.show();
}