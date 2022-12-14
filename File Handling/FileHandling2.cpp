#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int age;
    string name,subject;
    //ofstream ofs("My.txt",ios::trunc);
    cout<<"Enter Name:"<<endl;
    getline(cin,name);
    cout<<"Enter Subject:"<<endl;
    getline(cin,subject);
    cout<<"Enter Age:"<<endl;
    cin>>age;

    ofstream ofs("My.txt",ios::app);
    ofs<<"Name:"<<name<<endl;
    ofs<<"Subject:"<<subject<<endl;
    ofs<<age<<endl;
    ofs.close();
    return 0;
}