#include<iostream>
using namespace std;

class Test
{
    public:
        int a;
        static int count;

        Test()
        {
            a=10;
            count++;
        }

    //friend void fun();
};
int Test::count=0;
int main()
{
    Test t1;
    cout<<t1.count<<endl;
    cout<<t1.a<<endl;
    Test t2;
    cout<<t2.count<<endl;
    cout<<t2.a<<endl;
    t1.count=25;
    cout<<t2.count<<endl;
    cout<<Test::count<<endl;
    return 0;
}