#include<iostream>
using namespace std;

class A
{
    public:
      void display()
      {
          cout<<"Base class content."<<endl;
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

class C : public A
{
	public:
      void display_C()
      {
          cout<<"C class content."<<endl;
      }
};

int main()
{
	B obj_b;
	obj_b.display();
	obj_b.display_B();
    C obj;
    obj.display();
	obj.display_C();
    return 0;
}