#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"ple enter the value for a,b";
    cin>>a;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"after swaping the nums :"<<a<<"\t"<<b; 
    return 0;
}