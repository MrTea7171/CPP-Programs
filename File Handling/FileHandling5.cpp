#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //ifstream ifs("My.txt");
    ifstream ifs;
    char c[200];
    ifs.open("My.txt");
    if(ifs)
    {
        cout<<"File is Open";
    }
    while(!ifs.eof())
    {
        ifs>>c;
        cout<<c; 
       
    }

    ifs.close();
    return 0;
}