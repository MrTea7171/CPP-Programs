#include<iostream.h> 
#include<conio.h> 
class Box 
{
	private:
		double length;     
		double breadth;    
		double height;     
	public:
		int objectCount;
		Box(double l = 2.0, double b = 2.0, double h = 2.0) 
		{
			objectCount=0;
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
		int getCount() 
		{
			return objectCount;
		}
	
};
void main() 
{
	Box Box1(3.3, 1.2, 1.5);    // Declare box1
	Box Box2(8.5, 6.0, 2.0);    // Declare box2
	cout << "Inital Stage Count: " << Box1.getCount() << endl;
	cout << "Final Stage Count: " << Box1.getCount() << endl;
}