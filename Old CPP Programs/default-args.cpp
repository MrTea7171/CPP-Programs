#include<iostream.h> 
#include<conio.h> 
/* 
	Default Arguments in Function Definition
*/
int sum(int x, int y, int z=0, int w=0) 
{ 
    return (x + y + z + w); 
} 
void main() 
{ 
	clrscr();
    cout << sum(10, 15) << endl; 
    cout << sum(10, 15, 25) << endl; 
    cout << sum(10, 15, 25, 30) << endl;
	getch();
}