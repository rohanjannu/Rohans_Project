#include<iostream>
using namespace std;


class point
{
    int x,y;
    public:
    point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    point& setx(int x)
    {
        this->x=x;
        return *this;
    }
    point& sety(int y)
    {
        this->x=x;
        return *this;
    }
};

int main()
{
    int a;
    point p(10,20);
    (p.setx(10)).sety(20);

}