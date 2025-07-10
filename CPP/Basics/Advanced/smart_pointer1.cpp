#include<iostream>
using namespace std;

class rohan
{
    public:
    int x,y;
    rohan(int a,int b):x(a),y(b)
    {

    }
    ~rohan()
    {
        cout<<"destructor called"<<endl;
    }
};
class SP
{
    rohan *ptr;
    public:
    SP(rohan *r=NULL)
    {
        ptr=r; 
    }
    ~SP()
    {
        delete ptr;
    }
    rohan &operator*()
    {
        return *ptr;
    }
    rohan *operator->()
    {
        return ptr;
    }
};
int main()
{
    SP sp(new rohan(10,20));
    cout<<sp->x<<endl;
    cout<<sp->y<<endl;
}