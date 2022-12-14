#include<iostream>
using namespace std;


//1. write a sum() function here to add 2 integer
int sum(int x,int y)
{
    return x+y;
}
//2. write a sum() function here to add 2 floats
float sum(float x,float y)
{
    return x+y;
}
//3. write a sum() function here to add 3 integer
int sum(int x,int y,int z)
{
    return x+y+z;
}


int main()
{
    cout<<sum(10,5);
    cout<<sum(12.9f,8.3f);
    cout<<sum(10,20,30);
    return 0;
}

//  #include<iostream>
//  using namespace std;

//  //1 write a Min() function here to Min of 2 integers
//  int Min(int x,int y)
//  {
//      if(x<y)
//      {
//          return x;
//      }
//      else
//      {
//          return y;
//      }
//  }
//  //2 write a Min() function here to Min of 3 integers
//  int Min(int x,int y,int z)
//  {
//      if(z<y && z<x)
//      {
//          return z;
//      }
//      else if(x<y)
//      {
//          return x;
//      }
//      else
//      {
//          return y;
//      }
//  }
//  //3 write a Min() function here to Min of 2 floats
//  float Min(float x,float y)
//  {
//      if(x<y)
//      {
//          return x;
//      }
//      else
//      {
//          return y;
//      }
 
//  int main()
//  {
//      cout<<Min(10,5);
//      cout<<Min(12,7,9)<<endl;
//      cout<<Min(18.0f,9.0f)<<endl;
//      return 0;
//  }

