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

    cout<<"String Append"<<endl;
    cout<<s1.capacity()<<endl;
    cout<<s2.capacity()<<endl;
    s1.append(" Chaitanya");
    s2.append(" on Fire");
    cout<<s1.capacity()<<endl;
    cout<<s2.capacity()<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<endl<<endl;

    cout<<"String Insert"<<endl;
    s1.insert(5,"AddWord");
    s2.insert(3,"Apple",2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<endl<<endl;

    cout<<"String Replace"<<endl;
    s1.replace(5,7,"");
    s2.replace(3,2,"");
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<endl<<endl;

    cout<<"String Push Back(add single char in last)"<<endl;
    s1.push_back('1');
    s2.push_back('2');
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<endl<<endl;

    cout<<"String Pop Back"<<endl;
    s1.pop_back();
    s2.pop_back();
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<endl<<endl;

    cout<<"String Swap"<<endl;
    s1.swap(s2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<endl<<endl;

    cout<<"String Erase==String Clear "<<endl;
    s1.erase();
    s2.erase();
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<endl<<endl;
    
}