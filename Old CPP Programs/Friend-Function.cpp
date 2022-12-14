#include <iostream.h>
#include <conio.h>
/* 
	Friend Function
*/
// forward declaration
class B;
class A 
{
	private:
		int numA;
	public:
		A()
		{
			numA=12;
		}
		// friend function declaration
		friend int add(A, B);
};
class B 
{
	private:
		int numB;
	public:
		B()
		{
			numB=1;
		}
		// friend function declaration
		friend int add(A , B);
};
// Function add() is the friend function of classes A and B
// that accesses the member variables numA and numB
int add(A objectA, B objectB)
{
   	return (objectA.numA + objectB.numB);
}

void main()
{
	clrscr();
    A objectA;
    B objectB;
    cout<<"Sum: "<< add(objectA, objectB);
    getch();
}
