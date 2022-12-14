#include<iostream>
using namespace std;


//write a Max() function template for 2 numbers
template <class T,class Y>

T Max(T x,Y y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
    
}

int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5,17.3)<<endl;
    cout<<Max(12,17.3);
    return 0;
}
