#include<iostream.h> 
#include<conio.h> 
class Box 
{
	private:
		double length;     
		double breadth;    
		double height; 
	public:
		static int objectCount;
		Box(double l = 2.0, double b = 2.0, double h = 2.0) 
		{
			cout <<"Constructor called." << endl;
			length = l;
			breadth = b;
			height = h;
			objectCount++;
		}
		double Volume() 
		{
			return length * breadth * height;
		}
		static int getCount() 
		{
			return objectCount;
		}    
};
int Box::objectCount = 0;
void main() 
{
	cout << "Inital Stage Count: " << Box::getCount() << endl;
	Box Box1(3.3, 1.2, 1.5);    // Declare box1
	Box Box2(8.5, 6.0, 2.0);    // Declare box2
	cout << "Final Stage Count: " << Box::getCount() << endl;
}