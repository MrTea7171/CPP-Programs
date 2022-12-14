#include<iostream>
using namespace std;
int main ()
{  
  // nested try-catch blocks

  try{
    try
    {
      throw 'd';      
    }
    catch (int e)
    {
      cout << "An exception occured. Exception Number: " << e << endl;
    }
   
  }
  catch(char c)
  {
    cout << "An exception occured. Exception type: " << c ;
  }
  
  return 0;
}