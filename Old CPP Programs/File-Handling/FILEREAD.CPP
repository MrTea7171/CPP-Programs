#include <fstream.h>
#include <iostream.h>
#include <conio.h>
int main () 
{
   /*File Read*/
   clrscr();
   char name[10];

   // open a file in read mode.
   ifstream infile; 
   infile.open("test.txt"); 
 
   cout << "Reading from the file" << endl; 
   infile >> name; 

   // write the data at the screen.
   cout << name << endl;
   
   // again read the data from the file and display it.
   infile >> name; 
   cout << name << endl; 
   
   // again read the data from the file and display it.
   infile >> name; 
   cout << name << endl; 

   // close the opened file.
   infile.close();

   getch();
   return 0;
}