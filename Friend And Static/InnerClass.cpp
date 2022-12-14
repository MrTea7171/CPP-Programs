#include<iostream>
using namespace std;

class Outer
{
    public: 
    static const int b=9;
    void fun()
    {
        i.display();
    }
        class Inner
        {
            public:
                void display()
                {
                    cout<<"Display of Inner"<<b<<endl;
                }
        };
        Inner i;
};

int main()
{
    Outer::Inner i;
    i.display();

    return 0;
}