#include<iostream>
using namespace std;
class Test;
class Practice
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        friend Test;
};
class Test
{
    
    public:
        int sum;
        Practice p;
        void fun()
        {
            p.a=10;
            p.b=20;
            p.c=30;
            cout<<p.a<<" "<<p.b<<" "<<p.c;

        }
};


int main()
{
    Test t;
    t.fun();
    return 0;
}