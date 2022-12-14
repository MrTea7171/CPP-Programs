#include<iostream>
using namespace std;

int main()
{
    char s[50];
    char s1[50];
    cout<<"Enter Name: "<<endl;
    //cin>>s;
    cin.get(s,20);
    cout<<"Describe You: "<<endl;
    //cin.ignore();
    cin.get(s1,20);
    //cin.getline(s,20);
    cout<<"Welcome: "<<s<<endl;
    cout<<"About Me: "<<s1<<endl;
    return 0;
}