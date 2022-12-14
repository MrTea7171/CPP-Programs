#include<iostream>
using namespace std;

void fun(const int &a,int &b)
{
    //a++;
    b++;
    cout<<a<<" "<<b<<endl;
}

int main()
{
   int x=10;
   int y=20;

   fun(x,y);
}