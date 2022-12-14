#include <iostream.h>
#include <conio.h>
/* 
	Operator Overloading
*/
class Distance 
{
	private:
		int feet;             
		int inches;           
	public:
		Distance(int f, int i) 
		{
			feet = f;
			inches = i;
		}
		void displayDistance() 
		{
			cout << "F: " << feet << " I:" << inches <<endl;
		}
		// overloaded minus (-) operator
		Distance operator- () 
		{
			feet = -feet;
			inches = -inches;
			return Distance(feet, inches);
		}
};

void main() 
{
	clrscr();
	Distance D1(11, 10), D2(-5, 11);
	-D1;                     // apply negation
	D1.displayDistance();    // display D1
	-D2;                     // apply negation
	D2.displayDistance();    // display D2
	getch();
}