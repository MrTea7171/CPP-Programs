#include<iostream>
#include<string>
using namespace std; 
int main()
{
    string name="Chaitanya";
    int i=0;
    string::iterator j;
    for(char a:name)
    {
        i++;
    }
    cout<<i<<endl;
    i=0;
    for(j=name.begin();j!=name.end();j++)
    {
        i++;
    }
    cout<<i<<endl;

    name="Chaitanya";
    i=0;
    for(char &a:name)
    {
        if(a>='A'&&a<='Z')
        {
            a=a+32;
        }
        else if(a>='a'&&a<='z')
        {
            a=a-32;
        }
    }
    cout<<name<<endl;
 
}