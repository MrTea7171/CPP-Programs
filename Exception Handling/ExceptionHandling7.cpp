#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw "String";
    }
    catch(int e)
    {
        cout<<"Int Catch"<<e<<endl;
    }
    catch(float e)
    {
        cout<<"Float Catch"<<e<<endl;
    }
    //Use when you not intersed in type error being thrown
    catch(...)
    {
        cout<<"All Catch"<<endl;
    }
    cout<<"Bye";
    return 0;   
}