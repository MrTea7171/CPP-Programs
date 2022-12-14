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

int main()
{
    Rectangle r1;
    r1.setLenght(10);
    r1.setBreath(10);
    cout<<"Area is:"<<r1.area()<<endl;
    cout<<"Perimeter is:"<<r1.perimeter();
    if(r1.checksquare())
    {
        cout<<"It's a Square";
    }
    return 0;
}