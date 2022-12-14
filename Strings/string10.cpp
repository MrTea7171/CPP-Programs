#include<iostream>
#include<string>
using namespace std;

int main()
{
    string email="chaipanch98@gmail.com";
    int i=email.find('@');
    cout<<i<<endl;
    string uname=email.substr(0,i);
    cout<<uname<<endl;
    int flag=1;
    for(char a:uname)
    {
        if(!(a>='a' && a<='z'))
        {
            if(!(a>='A' && a<='Z'))
            {
                if(!(a>='0' && a<='9'))
                {
                   if(!(a=='_'))
                    {
                        flag=0;
                        break;
                    }     
                }
            }
            
        }
    }
    if(flag==1)
    {
        cout<<"Username Valid";
    }
    else
    {
        cout<<"Not Valid";
    }
}