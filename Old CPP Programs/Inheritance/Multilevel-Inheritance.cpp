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

class C : public B
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
    C obj;
    obj.display();
	obj.display_B();
	obj.display_C();
    getch();
}