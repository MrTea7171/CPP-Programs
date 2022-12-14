#include<iostream>
using namespace std;

int main()
{
    int si,p,t;
    float r;

    cout<<"ple enter the value for p,t,r";
    cin>>p;
    cin>>t;
    cin>>r;
    si=p*r*t/100;

    cout<<"the simple interest is :"<<si; 
    return 0;
}