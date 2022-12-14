#include <iostream.h>     
#include <iomanip.h>
#include<conio.h>    
/*
	SetFill Manipulator
*/   
void main() 
{
	clrscr();
	cout << setfill ('x') << setw (10);
	cout << 77 << endl;
	getch();
}