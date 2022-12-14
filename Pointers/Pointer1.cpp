#include<iostream>
using namespace std;

int main()
{
    int *p,a;
    a=5;
    p=&a;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;
    cout<<"Value of p: "<<p<<endl;
    cout<<"Adress of p: "<<&p<<endl;
    cout<<"Value of address p refrences: "<<*p<<endl;
    return 0;
}