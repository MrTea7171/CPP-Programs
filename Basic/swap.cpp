#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"ple enter the value for a,b";
    cin>>a;
    cin>>b;
    c=a;
    a=b;
    b=c;

    cout<<"after swaping the nums :"<<a<<"\t"<<b; 
    return 0;
}