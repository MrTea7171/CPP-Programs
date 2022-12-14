#include<iostream>
using namespace std;

int main()
{
    int a=10,b=0,c;
    try
    {
        if(b==0)
        {
            throw 1.5f;
        }
        c=a/b;
        cout<<c<<endl;
    }
    catch(float e)
    {
        cout<<"Division by Zero.Error Code:"<<e<<endl;
    }
    cout<<"Bye";
    return 0;   
}