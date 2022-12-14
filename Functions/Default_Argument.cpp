#include<iostream>
using namespace std;

int sum(int x,int y,int z=8)
{
    return x+y+z;
}


int main()
{
    // cout<<sum(5)<<endl;
    cout<<sum(10,5)<<endl;
    cout<<sum(10,20,30);
    return 0;
}