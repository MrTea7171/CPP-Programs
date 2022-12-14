#include<iostream>
using namespace std;
class Base
{

    protected: 
        int b;
    public: 
        int c;

        void funBase()
        {
            a=10;
            b=5;
            c=15;
        }
    private: 
        int a=10;
};
class Derived:public Base
{
    public:
        void funDerived()
        {
            a=10;
            b=5;
            c=15;
            cout<<a;
        }
};
int main()
{
    Base b;
    // b.a=10;
    //b.b=5;
    b.c=20;
    cout<<b.c<<endl;
    Derived d;
    d.funDerived();
} 