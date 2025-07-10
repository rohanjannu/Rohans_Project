#include<iostream>
using namespace std;

class point
{
    public:
    int x;
    int y;
    void sub(int x, int y)
    {
        this->x=x;
        this->y=y;
    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }

    point &setx(int x)
    {
        this->x=x;
        return *this;

    }

    point &sety(int y)
    {
        this->y=y;
        return *this;  //returns the address of the object
    }

};

int main()
{
    point p;
    p.sub(10,20);
    p.print();
    (p.setx(40)).sety(50);
    p.print();
    return 0;
}