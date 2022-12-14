#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    int *p=new int[size];
    delete []p;
    cout<<"Enter new size of array:"<<endl;
    cin>>size;
    p=new int[size];
    delete []p;
    return 0;
}