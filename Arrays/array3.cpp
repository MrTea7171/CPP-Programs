#include<iostream>
using namespace std;

int main()
{
    int A[5],i,max;
    cout<<"Enter 5 Different values:"<<endl;
    for(int &b:A)
    {
        cin>>b;
    }

    cout<<"Values in array are:"<<endl;
    for(int b:A)
    {
        cout<<b<<endl;
    }
    max=A[0];
    for(int b:A)
    {
        int temp;
       if(max<b)
       {
         temp=b;
         b=max;
         max=temp;   
       }
    }

    cout<<"The Max number is: "<<max;
    return 0;
}