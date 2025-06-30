#include<iostream>
using namespace std;

tenplate <class T>
class Potter
{
    int x,y,z;
    public:
    Potter(int a=0,int b=0)
    {
        x=a;
        y=b;
        cout<<"Constructor created\n";
    }
    ~Potter()
    {
        cout<<"Destructor created\n";
    }
    void fun(int c)
    {
        z=c;
        cout<<"The passed value to the function is "<<z<<endl;
    }
};

class smrt_ptr
{
    Potter *ptr;
    public:
    smrt_ptr(Potter *p=NULL){ptr=p;}
    ~smrt_ptr(){delete ptr;}

    Potter &operator*(){return *ptr;}
    Potter *operator->(){return ptr;}
};

int main()
{
    cout<<"Main begins\n";
    smrt_ptr sp(new Potter(40,50));
    sp->fun(6);
    cout<<"Main ends\n";
    return 0;
}