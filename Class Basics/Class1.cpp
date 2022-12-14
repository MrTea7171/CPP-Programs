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
    Rectangle r1;
    r1.lenght=10;
    r1.breath=20;

    return 0;
}