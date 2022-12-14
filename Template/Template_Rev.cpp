# include<iostream>
using namespace std;

template<class t,class r>
class stack
{
    public:
        t name;
        r game;
        stack(t v ,r h)
        {
            name=v;
            cout<<name<<endl;
            game=h;
            cout<<game;
        }
};

int main()
{
    stack<int,float> s(10,11.6f);
     return 0;
}


