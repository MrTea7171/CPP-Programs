#include<iostream>
using namespace std;

#define PI 3.1425
#ifndef PI
    #define PI 3
#endif
#define max(x,y) (x>y?x:y)
#define MSG(y) #y

int main()
{
    cout<<PI<<endl;
    cout<<max(10,8)<<endl;
    cout<<MSG(Life);

}