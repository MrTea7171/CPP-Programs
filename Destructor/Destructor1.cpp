#include<iostream>
using namespace std;

class Demo
{
  
    public:
        Demo()
        {
            cout<<"Counstructor of Demo"<<endl;
        }
        ~Demo()
        {
            cout<<"Destructor of Demo"<<endl;
        }

};

void fun()
{
    Demo d;
}

void fun2()
{
    Demo *p=new Demo;
    delete p;
}

int main()
{
    fun();
    fun2();
    return 0;
}