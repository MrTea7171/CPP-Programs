#include<iostream>
using namespace std;
class MyException
{
    public:
        void Error()
        {
            cout<<"Zero Error"<<endl;
        }
};
int division(int a,int b)throw(MyException)
{
    if(b==0)
    {   MyException e;
        throw e;
    }
    return a/b;
}
int main()
{
    int a=10,b=10,c;
    try
    {
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(MyException e)
    {
        e.Error();
    }
    cout<<"Bye";
    return 0;   
}