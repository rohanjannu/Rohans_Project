#include<iostream>
using namespace std;

class rohan
{
    int x;
    int y;
    public:
    rohan(int x,int y):x(x),y(y)
    {

    }
    rohan & setx(int x)
    {
        this->x=x;
        return *this;
    }
    rohan & sety(int y)
    {
        this->y=y;
        return *this;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    rohan r1(5,10);
    r1.print();
    r1.setx(15).sety(25);
    r1.print();
    return 0;
    
}