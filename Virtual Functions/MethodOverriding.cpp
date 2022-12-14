#include<iostream>
using namespace std;

class Parent
{
    public:
        void display()
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
    Parent p;
    p.display();
    Child c;
    c.display();
    c.Parent::display();
    return 0;
}