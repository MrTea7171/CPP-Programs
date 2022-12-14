#include <fstream.h>
#include <iostream.h>
#include <conio.h>
int main () 
{
   /*File Write*/
   clrscr();
   char name[10];

   // open a file in write mode.
   ofstream outfile;
   outfile.open("test.txt");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   cin>>name;

   // write inputted data into the file.
   outfile << name << endl;
   cout<<"File Created Successfully";
   // close the opened file.
   outfile.close();

   getch();
}