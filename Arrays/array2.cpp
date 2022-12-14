#include<iostream>
using namespace std;

int main()
{
    int a[5]={0,1,2,3,4};
    int sum=0;
    for(auto b:a)
    {
        sum=sum+b;
    }
    cout<<"Sum is:"<<sum;
    return 0;
}