#include<iostream>
using namespace std;

class myExecption1:exception
{

};
class myExecption2:myExecption1
{

};
int main()
{
    try
    {
        myExecption1 e;
        throw 1.8f;
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
    catch(myExecption2 e)
    {
        cout<<"myExecption2 Catch"<<endl;
    }
    catch(myExecption1 e)
    {
        cout<<"myExecption1 Catch"<<endl;
    }
    catch(...)
    {
        cout<<"All Catch"<<endl;
    }
    cout<<"Bye";
    return 0;   
}