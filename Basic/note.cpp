#include<iostream>
using namespace std;

int main()
{
    int x,m,sum=0;
    cout<<"plz enter the money"<<endl;
    cin>>x;
    cout<<"2000 note ="<<x/2000<<endl;
    x=x%2000;
    cout<<"500 note ="<<x/500<<endl;
    x=x%500;
    cout<<"200 note ="<<x/200<<endl;
    x=x%200;
    cout<<"100 note ="<<x/100<<endl;
    x=x%100;
   
    cout<<"50 note ="<<x/50<<endl;
    x=x%50;
    cout<<"20 note ="<<x/20<<endl;
    x=x%20;
    cout<<"10 note ="<<x/10<<endl;
    x=x%10;
    cout<<"5 note ="<<x/5<<endl;
    x=x%5;
    cout<<"2 note ="<<x/2<<endl;
    x=x%2;
    cout<<"1 note ="<<x/116<<endl;
    x=x%1;
   
    
    
    return 0;
}