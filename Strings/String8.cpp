#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="today";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<char(*it-32)<<endl;
    }

    string::reverse_iterator it2;
    for(it2=str.rbegin();it2!=str.rend();it2++)
    {
        cout<<char(*it2-32)<<endl;
    }

    for(char a:str)
    {
        cout<<a;
    }
    return 0;
}