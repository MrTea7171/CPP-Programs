#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int &y=x;
    x++;
    cout<<x<<endl;
    y++;
    cout<<y<<endl;
    cout<<"Address of x:"<<&x<<endl;
    cout<<"Address of y:"<<&y<<endl;
    return 0;
}
    