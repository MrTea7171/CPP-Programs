#include <iostream.h>     
#include <iomanip.h>
#include<conio.h>    
/*
	SetPrecision Manipulator
*/   
void main() 
{
	clrscr();
	double f =3.14159;
	cout << setprecision(5) << f << '\n';
	cout << setprecision(9) << f << '\n';
	cout << fixed;
	cout << setprecision(5) << f << '\n';
	cout << setprecision(9) << f << '\n';
	getch();
}