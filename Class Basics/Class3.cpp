#include<iostream>
using namespace std;

class Rectangle
{
    public:
        int lenght;
        int breath;
        
        int perimeter()
        {
            return 2*(lenght+breath);
        }

        int area()
        {
            return lenght*breath;
        }
};

int main()
{
    Rectangle *p=new Rectangle();
    p->lenght=10;
    p->breath=20;
    cout<<"Area is:"<<p->area()<<endl;
    cout<<"Perimeter is:"<<p->perimeter();
}