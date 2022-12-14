#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};

    int *q,*p=A;
    
    // move pointer to next location to print 4
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    
    p=p+3; // pointer will be pointing on 10
    cout<<*p<<endl;
    cout<<*(p-4)<<endl;    // complete this statement to print 2 without moving pointer

    q=A;
    p=&A[4];
    cout<<p-q;
    return 0;
}
    