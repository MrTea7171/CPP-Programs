#include<iostream>
using namespace std;
int main()
{
    int age;
    char gender,maritial;
    cout<<"plz enter your gender and age"<<endl;
    cout<<"enter your gender in M or F"<<endl;
    cout<<"plz enter the maritial status in Y 0r F"<<endl;
    
    cin>>gender;
    cin>>age;
    cin>>maritial;
    if(gender=='f' ||gender=='F')
    {
        cout<<"you are working in urban area";
    }
    if(gender=='m' ||gender=='M' )
    {
        if(age>=20 && age<=40)
        {
            cout<<"you can work anywhere";
        }
        else if(age>=40 && age<=60)
        {
            cout<<"you can work in urban area";
        }
        else if(age>80) 
        {
            cout<<"ERROR";
        }

    }

    return 0;


}