#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    s1="Hello";
    s2="World";
    cout<<"String Functions"<<endl;
    cout<<"Strings"<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;

    cout<<"String Length"<<endl;
    cout<<s1.length()<<endl;
    cout<<s2.length()<<endl;

    cout<<"String Size"<<endl;
    cout<<s1.size()<<endl;
    cout<<s2.size()<<endl;

    cout<<"String Capacity"<<endl;
    cout<<s1.capacity()<<endl;
    cout<<s2.capacity()<<endl;

    cout<<"String Resize"<<endl;
    s1.resize(30);
    s2.resize(30);
    cout<<s1.capacity()<<endl;
    cout<<s2.capacity()<<endl;

    cout<<"String Max size"<<endl;
    cout<<s1.max_size()<<endl;
    cout<<s2.max_size()<<endl;

    s1.clear();
    s2.empty();

    cout<<"Strings"<<endl;
    cout<<s1<<endl;
    if(s1.empty())
    {
        cout<<"S1 is empty"<<endl;
    }
    cout<<s2<<endl;

    return 0;
}