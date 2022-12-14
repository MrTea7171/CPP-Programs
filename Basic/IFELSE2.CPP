#include<iostream>
using namespace std;
int main()
{
    int al;
    char a;
    cout<<"PLZ ENTER THE CHAR"<<endl;
    cin>>a;
    
    if(a>='A' &&a <='Z')
    {
        al= (int)a+32;
        a=(char)al;
        cout<<"lowe case is"<<a;
    }
    else if(a >='a' && a <='z')
    {
    
        al= (int)a-32;
        a=(char)al;
        cout<<"higher case is"<<a;
    }
    return 0;
}   
