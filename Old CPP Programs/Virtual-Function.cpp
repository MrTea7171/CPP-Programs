#include <iostream.h> 
#include <conio.h> 
class Shape 
{
	protected:
		int width, height;
	public:
		Shape( int a = 0, int b = 0)
		{
			width = a;
			height = b;
		}
		void area() 
		{
			cout << "Parent class area :" <<endl;
		}
};
class Rectangle: public Shape 
{
	public:
		Rectangle( int a = 0, int b = 0):Shape(a, b) { }
		void area() 
		{ 
			cout << "Rectangle class area :" <<endl;
			cout<<"Area = "<<(width * height)<<endl; 
		}
};
class Triangle: public Shape 
{
	public:
		Triangle( int a = 0, int b = 0):Shape(a, b) { }
		void area () 
		{ 
			cout << "Triangle class area :" <<endl;
			cout<<"Area = "<<(width * height / 2)<<endl; 
		}
};
void main() 
{
	clrscr();
	Shape *shape;
	Rectangle rec(10,7);
	Triangle tri(10,5);
	
	// store the address of Rectangle
	shape = &rec;
	// call rectangle area.
	shape->area();

	// store the address of Triangle
	shape = &tri;
	// call triangle area.
	shape->area();
	
	getch();
}
