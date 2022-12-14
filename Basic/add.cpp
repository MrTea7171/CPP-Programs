#include<iostream>
using namespace std;
template <class T>
class Fun
{
    public:
        static int x;
        Fun()
        {
            x+=1;
        }
};
template <class T>
int Fun<T>::x=0;
int main()
{
    // int a,b,c;

    // cout<<"ple enter the value for a,b";
    // cin>>a;
    // cin>>b;
    // c=a+b;
    // cout<<"the add of num :"<<c; 
    // return 0;  

    Fun<int> a,b;
    Fun<double> c;
    cout<<a.x<<b.x<<c.x;
    return 0;
}