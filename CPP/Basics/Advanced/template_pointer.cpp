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

template<class r>

class SP
{
    public:
    r *ptr;
    SP(r *p =NULL)
    {
        ptr=p;
    }
    ~SP()
    {
        delete ptr;
    }
    r &operator*()
    {
        return *ptr;
    }
    r *operator->()
    {
        return ptr;
    }  
};
int main()
{
    SP<int> sp(new int(10));
    cout<<*sp;
   // cout<<sp->x<<endl;
  //  cout<<sp->y<<endl;  
} 