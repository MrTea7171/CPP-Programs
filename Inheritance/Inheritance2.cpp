#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int lenght;
        int breath;
        
    public:
        void setLenght(int l)
        {
            if(l<0)
            {
                cout<<"lenght cannot be negative";
                lenght=abs(l);
            }
            else
            {
                lenght=l;
            }
        }

        void setBreath(int b)
        {
            if(b<0)
            {
                cout<<"breath cannot be negative";
                breath=abs(b);
            }
            else
            {
                breath=b;
            }
        }

        int getBreath()
        {
            return breath;
        }

        int getLenght()
        {
            return lenght;
        }

        int perimeter()
        {
            return 2*(lenght+breath);
        }

        int area()
        {
            return lenght*breath;
        }

        bool checksquare()
        {
            if(lenght==breath)
             return true; 
             else
              return false;
        }
};

class cuboid:public Rectangle
{
    private:
        int height;
    public:
        cuboid(int l,int b,int h)
        {
            height=h;
            setLenght(l);
            setBreath(b);
        }
        int getHeight()
        {
            return height;
        }
        int volume()
        {
            return getLenght()*getBreath()*height;
        }
};

int main()
{
    cuboid c(10,20,30);
    cout<<c.volume();
    return 0;
}