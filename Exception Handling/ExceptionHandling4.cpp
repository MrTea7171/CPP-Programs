#include<iostream>
using namespace std;

int main()
{
    int a=10,b=0,c;
    try
    {
        if(b==0)
        {
            throw string("Division by Zero");
        }
        c=a/b;
        cout<<c<<endl;
    }
    catch(string e)
    {
        cout<<e<<endl;
    }
    cout<<"Bye";
    return 0;   
}