/* C++ Program - Read and Display File */
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
	clrscr();
	ifstream ifile;
	char s[100], fname[20];
	cout<<"Enter file name to read and display its content (like file.txt) : ";
	cin>>fname;
	ifile.open(fname);
	if(!ifile)
	{
		cout<<"Error in opening file..!!";
		getch();
		exit(0);
	}
	while(ifile.eof()==0)
    {
        ifile>>s;
        cout<<s<<" ";
    }
	cout<<"\n";
	ifile.close();
	getch();
}