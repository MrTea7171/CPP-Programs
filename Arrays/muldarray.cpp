#include<iostream>
using namespace std;

int main()
{
    int a[2][2]={{2,3},{3,4}};
    int b[2][2]={{0,1},{0,1}};
    int c[2][2];

    cout<<"frist matrix"<<endl;

     //1 st matrix//*
    for(auto &x : a)
    {
        for( int  &y:x)    
        {
            cin>>y;
        }
        cout<<endl;
    }
    cout<<"sec matrix"<<endl;
    //2 nd matrix//*
    for(auto &x : b)
    {
        for( int  &q:x)    
        {
            cin>>q;
        }
        cout<<endl;
    }
   
   
    //1 st matrix//*
    for(auto &x : a)
    {
        for( int  y:x)    
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"sec matrix"<<endl;
    //2 nd matrix//*
    for(auto &x : b)
    {
        for( int  q:x)    
        {
            cout<<q<<" ";
        }
        cout<<endl;
    }
    //3 nd matrix mul of a,b//*
    int i,j,k;
    for(i=0;i<2;i++)
    {   
        for(j=0;j<=2;j++)
        {
            c[i][j]=0;

            for(k=0;k<=1;k++)
            {
                
                c[i][j]=a[i][k]*b[j][k]+c[i][j];
                
            }
        }
        cout<<endl;
    }

    for(auto &x : c)
    {
        for( int  q:x)    
        {
            cout<<q<<" ";
        }
        cout<<endl;
    }

    return 0;
}