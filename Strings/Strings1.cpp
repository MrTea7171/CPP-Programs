#include<iostream>
using namespace std;

int main()
{
    char s1[10]="hello";
    cout<<s1<<endl;
    char s2[10]={'H','E','L','L','O','\0'};
    cout<<s2<<endl;
    char s3[]={'H','E','L','L','O','\0'};
    cout<<s3<<endl;
    char s4[]={65,66,67,68,69,'\0'};
    cout<<s4<<endl;
    return 0;
}