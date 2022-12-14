#include<iostream>
using namespace std; 
class Mammal {
  public:
    void mammal_func()
    {
      cout << "Mammals can give direct birth."<<endl;
    }
};

class WingedAnimal {
  public:
    void wingedAnimal()
    {
      cout << "Winged animal can flap."<<endl;
    }
};

class Bat: public Mammal, public WingedAnimal {
	public:
	void display()
	{
		mammal_func();
		wingedAnimal();
	}
};

int main()
{
    Bat b1;
	b1.display();
    return 0;
}