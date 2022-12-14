#include<iostream>
using namespace std;

class Parent
{
    public:
        virtual void display()
        {
            cout<<"Display of Parent"<<endl;
        }
};

class Child:public Parent
{
     public:
        void display()
        {
            cout<<"Display of Child"<<endl;
        }
};

int main()
{   
    Child c;
    Parent *p=&c;
    p->display();
    return 0;
}