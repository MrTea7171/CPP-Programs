#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //ifstream ifs("My.txt");
    ifstream ifs;
    ifs.open("My.txt");
    if(ifs)
    {
        cout<<"File is Open"<<endl;
    }
    string name;
    // int age;
    // string subject;
    while(!ifs.eof())
    {
        // ifs>>name>>age>>subject;
        ifs>>name;
        cout<<name<<endl; 
        // cout<<age<<endl; 
        // cout<<subject<<endl;
    }
    return 0;

}