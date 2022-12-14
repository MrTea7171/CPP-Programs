#include<iostream>
using namespace std;

int main()
{
    int A[3][3]={{0,1,5},{2,0,6},{2,0,3}};
    for(auto &x:A)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}