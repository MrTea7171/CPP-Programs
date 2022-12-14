#include<iostream>
using namespace std;

class Innova
{
    public:
        static int Price;
        static int getPrice()
        {
            return Price;
        }
};
int Innova::Price=40;

int main()
{
    Innova i1,i2,i3;
    cout<<i1.Price<<endl;
    cout<<i3.Price<<endl;
    cout<<Innova::Price<<endl;
    return 0;
}