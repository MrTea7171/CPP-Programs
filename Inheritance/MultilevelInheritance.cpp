#include<iostream>
using namespace std;

class A
{
    public:
      void display()
      {
          cout<<"A class content."<<endl;
      }
};

class B : public A
{
	public:
      void display_B()
      {
          cout<<"B class content."<<endl;
      }
};

class C : public B
{
	public:
      void display_C()
      {
          cout<<"C class content."<<endl;
      }
};

int main()
{
    C obj;
    obj.display();
	obj.display_B();
	obj.display_C();
    return 0;
}