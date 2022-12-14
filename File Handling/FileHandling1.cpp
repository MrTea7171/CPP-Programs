#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream ofs("My.txt",ios::app);
    //ofstream ofs("My.txt",ios::app);
    ofs<<"Jimin"<<endl;
    ofs<<22<<endl;
    ofs<<"BTS"<<endl;
    ofs.close();
    return 0;
}