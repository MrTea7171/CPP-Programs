#include<iostream>
using namespace std;

class Complex
{
    public:
        int real;
        int img;

        // Complex add(Complex c)
        // {
        //     Complex temp;
        //     temp.real=real+c.real;
        //     temp.img=img+c.img;
        //     return temp;
        // }

        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.img=img+c.img;
            return temp;
        }
};

int main()
{
    Complex c1,c2,c3;
    c1.real=5;c1.img=10;
    c2.real=15;c2.img=20;
    //c3=c1.add(c2);
    c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.img;
    return 0;
}