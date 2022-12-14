#include<iostream.h>
#include<conio.h>

class A
{
    public:
      void display()
      {
          cout<<"Base class content.";
      }
};

class B : public A
{
	public:
      void display_B()
      {
          cout<<"B class content.";
      }
};

class C : public A
{
	public:
      void display_C()
      {
          cout<<"C class content.";
      }
};

void main()
{
	clrscr();
	B obj_b;
	obj_b.display();
	obj_b.display_B();
    C obj;
    obj.display();
	obj.display_C();
    getch();
}